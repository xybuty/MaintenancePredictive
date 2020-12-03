#!/usr/bin/python
# -*- coding: utf-8 -*-
import pandas as pd
#import numpy as np
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.font_manager as fm
import os
myfont = fm.FontProperties(fname='D:/font/simhei.ttf') ## 加入中文字体
plt.rcParams['axes.unicode_minus'] = False#显示负号

class Kmeans_(object):
    def __init__(self):
        super().__init__()

    '''
    def read_file(self,inputfile):
        with open(inputfile) as fp:
            self.content = fp.read();
        return self.content
        '''

    def read_file(self,inputfile):
        self.df = pd.read_csv(inputfile, encoding='gb18030', error_bad_lines=True, engine='python')
        return self.df

    # 标准化函数
    def standardize(self,df):
        for i in df.columns:
            df[i] = (df[i] - df[i].mean(axis=0)) / (df[i].std(axis=0))
        return df

    #反标准化函数
    def reStandardize(self,df1,df2):
        mean_value=[]
        std_value=[]
        for i in df1.columns:
            mean=df1[i].mean(axis=0)
            mean_value.append(mean)
            std=df1[i].std(axis=0)
            std_value.append(std)
        for indexs in df2.index:
            df2.loc[indexs]=df2.loc[indexs]*std_value+mean_value
        return df2

    def kmeans_building(self,types_num,iter_num,init_num):
        #备份数据用于反标准化
        b_data = self.df.copy()
        # 数据标准化
        data = self.standardize(self.df)
        # sklearn中的kmeans算法执行
        kmodel = KMeans(n_clusters=types_num, max_iter=iter_num, n_init=init_num).fit(data)  # 训练模型
        #获取聚类结果
        self.cluster_result = pd.concat([b_data, pd.Series(kmodel.labels_, index=data.index)], axis=1)  # 详细输出每个样本对应的类别
        self.cluster_result.columns = list(data.columns) + [u'聚类类别']  # 重命名表头
        #print(self.cluster_result.head(5))
        #展示聚类中心
        r1 = pd.Series(kmodel.labels_).value_counts()  # 统计各个类别的数目
        r2 = pd.DataFrame(kmodel.cluster_centers_)  # 找出聚类中心
        r3 = self.reStandardize(b_data, r2).reset_index()  # 将聚类中心还原为标准化前的数值
        cluster_center = pd.concat([r3, r1], axis=1)  # 横向连接（0是纵向），得到聚类中心对应的类别下的数目
        self.columns = ["类别"] + list(data.columns) + ["聚类个数"]  # 重命名表头
        return cluster_center.values.tolist()

    #获取聚类中心表头
    def get_columns_name(self):
        return self.columns

    #获取聚类结果图
    def get_cluster_plot(self):
        plot_df = self.cluster_result
        # 获取聚类类别的值
        cluster_label = plot_df["聚类类别"].unique()
        cluster_list = list(self.df.columns)
        #将聚类类别设为索引
        plot_df.set_index(["聚类类别"], inplace=True)
        fig = plt.figure()
        ##创建一个子图,行列
        #plt.subplot(111)
        ax = Axes3D(fig)
        for i in cluster_label:
            x = plot_df[cluster_list[0]].loc[i].tolist()
            y = plot_df[cluster_list[1]].loc[i].tolist()
            z = plot_df[cluster_list[2]].loc[i].tolist()
            ax.scatter(x,y,z)
        plt.xlabel('环境参数1',fontproperties=myfont,fontsize="13")
        plt.ylabel('环境参数2',fontproperties=myfont,fontsize="13")
        plt.title('样本聚类分布图',fontproperties=myfont,fontsize=15)
        #解析项目根目录
        project_path = os.path.dirname(os.path.dirname(os.getcwd()))
        #fig.savefig(project_path+'/Resources/cluster.png', bbox_inches='tight')  ##保存图片
        fig.savefig('D:/code/MaintenancePredictive11-30/Resources/cluster.png', bbox_inches='tight')  ##保存图片
        print(project_path)
        return "cluster.png"



if __name__ == '__main__':
    '''调用类
    1、实例化类名
    2、调用方法读取文件
    3、调用方法进行参数运算--
    '''
    file_path = 'E:/data/airspace_engine/operational_setting.csv'
    model = Kmeans_()
    model.read_file(file_path)
    cluster_center = model.kmeans_building(6,300,10)
    print(cluster_center)
    model.get_cluster_plot()
    print(os.path.dirname(os.path.dirname(os.getcwd())))

