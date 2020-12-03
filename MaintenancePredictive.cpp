#include "MaintenancePredictive.h"
#include "clusteringDlg.h"
#include "TableModel.h"
#include <Python.h>
#include<iostream>

#include <QFileDialog>
#include <QPainter>
#include <QImage>

MaintenancePredictive::MaintenancePredictive(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initialize();
	ConnetSignalAndSlot();

	QString strPath = QDir::currentPath();
	QString stylePath = strPath + "/MaintenancePredictive.qss";
	loadStyleSheet(stylePath);
	//QString str = QCoreApplication::applicationDirPath(); 


}

MaintenancePredictive::~MaintenancePredictive()
{

}

void MaintenancePredictive::initialize()
{
	
	m_TableModel = new TableModel(ui.tableView);
	ui.tableView->setModel(m_TableModel);
	ui.tableView->verticalHeader()->setVisible(false);

}

void MaintenancePredictive::ConnetSignalAndSlot()
{
	connect(ui.title_btn0, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);
	connect(ui.title_btn1, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);
	connect(ui.title_btn2, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);
	connect(ui.title_btn3, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);
	connect(ui.title_btn4, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);
	connect(ui.title_btn5, &QPushButton::clicked, this, &MaintenancePredictive::titleClicked);

	connect(ui.fileBtn, &QPushButton::clicked, this, &MaintenancePredictive::slotLocalFileBtnClicked);
	connect(ui.clusteringBtn, &QPushButton::clicked, this, &MaintenancePredictive::clusteringClicked);

	connect(ui.sqlBtn, &QPushButton::clicked, this, &MaintenancePredictive::slotSqlBtnClicked);
	connect(ui.pushButton_3, &QPushButton::clicked, this, &MaintenancePredictive::slottest);

	connect(ui.mPButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(slotButtonJudge(int)));
	
}

void MaintenancePredictive::loadStyleSheet(const QString &sheetName)
{
	QFile file(sheetName);
	file.open(QFile::ReadOnly);
	if (file.isOpen())
	{
		QString strSheet = QString(file.readAll());
		this->setStyleSheet(strSheet);
	}
}

QStringList MaintenancePredictive::changeData(vector<wchar_t*> p_lis)
{
	QStringList headLst;
	headLst.clear();
	for (int i =0; i < p_lis.size(); ++i)
	{
		wchar_t* wcharhead = p_lis.at(i);
		headLst << QString::fromWCharArray(wcharhead);
	}
	return headLst;
}

QList<QVariantList> MaintenancePredictive::changedTableData(vector<vector<double>> vecData)
{
	QList<QVariantList> tableLst;
	for (int i =0; i< vecData.size(); ++i)
	{
		QVariantList rVarLst;
		vector<double> rData = vecData.at(i);
		for (int j =0; j < rData.size(); ++j)
		{
			double dData = rData.at(j);
			QVariantMap varMap;
			varMap.insert(QString::number(Qt::DisplayRole), dData);
			rVarLst.append(varMap);
		}

		tableLst.append(rVarLst);
	}

	return tableLst;
}


void MaintenancePredictive::deletePngFile(const QString &strPath)
{
	if (strPath.isEmpty())
	{
		return;
	}
	QFile file(strPath);
	if (file.exists())
	{
		file.remove();
	}

}

void MaintenancePredictive::titleClicked()
{
	if (sender() == ui.title_btn0)
	{
		if (ui.widget_0->isHidden())
		{
			ui.widget_0->show();
		}
		else
		{
			ui.widget_0->hide();
		}

	}
	else if (sender() == ui.title_btn1)
	{
		if (ui.widget->isHidden())
		{
			ui.widget->show();
		}
		else
		{
			ui.widget->hide();
		}
		
	}
	else if (sender() == ui.title_btn2)
	{
		if (ui.widget_2->isHidden())
		{
			ui.widget_2->show();
		}
		else
		{
			ui.widget_2->hide();
		}
	}
	else if (sender() == ui.title_btn3)
	{
		if (ui.widget_3->isHidden())
		{
			ui.widget_3->show();
		}
		else
		{
			ui.widget_3->hide();
		}
	}
	else if (sender() == ui.title_btn4)
	{
		if (ui.widget_4->isHidden())
		{
			ui.widget_4->show();
		}
		else
		{
			ui.widget_4->hide();
		}
	}
	else if (sender() == ui.title_btn5)
	{
		if (ui.widget_5->isHidden())
		{
			ui.widget_5->show();
		}
		else
		{
			ui.widget_5->hide();
		}
	}

}

int init_numpy() {
	//初始化 numpy 执行环境，主要是导入包，python2.7用void返回类型，python3.0以上用int返回类
	_import_array();
	return 0;
}

wchar_t* utf8_to_unicode(char *str)
{
	int textlen;
	wchar_t *result;
	textlen = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
	result = (wchar_t*)malloc((textlen + 1) * sizeof(wchar_t));
	memset(result, 0, (textlen + 1) * sizeof(wchar_t));
	MultiByteToWideChar(CP_UTF8, 0, str, -1, (LPWSTR)result,textlen);
	return result;
}

int CN_to_Unicode(char* input, wchar_t *output) {
	int len = strlen(input);
	len = MultiByteToWideChar(CP_ACP, 0, input, -1, output, MAX_PATH);
	return 1;
}

void MaintenancePredictive::clusteringClicked()
{
	clusteringDlg dlg(this);
	if (dlg.exec() == QDialog::Accepted)
	{	
		QString file_path = dlg.getFile_path();
		int num = dlg.getNum();
		int MaxNum = dlg.getMaxNum();
		int CentroidNum = dlg.getCentroidNum();

		
		Py_Initialize();
		//init_numpy();
		PyEval_InitThreads();
		PyObject* pFunc=NULL;
		PyObject* pArg = NULL;
		PyObject* pName = NULL;
		PyObject* pReturn;
		PyObject* pValue;
		PyObject * pFunctwo;
		PyObject * pGetGname = NULL;
		PyObject* module = NULL;
		//PyObject* pArgs = PyList_New(2);
		PyObject* nList, *pList;
		nList = PyList_New(0);
		pList = PyList_New(1);
		//PyRun_SimpleFile("import sys");
		//PyRun_SimpleFile("sys.path.append('./')");

		module = PyImport_ImportModule("Kmeans_test");
		if (!module)
		{
			printf("it could not find");
		}
		PyObject* pDict = PyModule_GetDict(module);
		PyObject* pKmeans_test = PyDict_GetItemString(pDict,"Kmeans_");
		PyObject* pKeans = PyInstanceMethod_New(pKmeans_test);
		PyObject* Instance = PyObject_CallObject(pKeans,NULL);
		char* a;
		QByteArray ba = file_path.toLatin1();
		
		//QByteArray ba = "E:/data/kmeans_test.txt";
		a = ba.data();
		PyObject_CallMethod(Instance, "read_file", "s", a);
		
		PyArrayObject* ret_array;
		pFunctwo = PyObject_CallMethod(Instance,"kmeans_building","iii", num, MaxNum, CentroidNum);
		//ret_array = PyArray_GETCONTIGUOUS((PyArrayObject*)pFunctwo);
		//PyArray_OutputConverter(pFunctwo, &ret_array);
		//PyArray_Converter(pFunctwo, &ret_array);
		//npy_intp *shape = PyArray_SHAPE(ret_array);
		int Index_i = 0, Index_k = 0, Index_m = 0;
		int sizeOfList = PyList_Size(pFunctwo);
		//PyObject *ListItem = PyList_GetItem(pFunctwo,0);
		//int N= PyList_Size(ListItem);
		vector<vector<double>>_2D_array;
		vector<double> _1D_array;
		int NumOfItems = PyList_Size(PyList_GetItem(pFunctwo, 0));
		for (Index_m = 0; Index_m<NumOfItems; Index_m++) {
			for (Index_i = 0; Index_i < sizeOfList; Index_i++) {
				//_1D_array.clear();
				PyObject *ListItem = PyList_GetItem(pFunctwo, Index_i);
				PyObject *Item = PyList_GetItem(ListItem, Index_m);
				//int NumOfItems = PyList_Size(ListItem);
				double ans = PyFloat_AsDouble(Item);
				_1D_array.push_back(ans);
			}
			/*for (Index_m=0;Index_m<NumOfItems;Index_m++){
				PyObject *Item=PyList_GetItem(ListItem, 0);
				double ans=PyFloat_AsDouble(Item);
				_1D_array.push_back(ans);
			}*/
			//_2D_array.push_back(_1D_array);
 		}
		int rows=_1D_array.size()/ NumOfItems;
		vector<double> _it;
		for (int i = 0; i < rows; i++) {
			_it.clear();
			for (int j = 0; j < NumOfItems; j++) {
				_it.push_back(_1D_array[j*rows +i]);
			}
			_2D_array.push_back(_it);
		}

		//获取一维数组
		

			pValue=PyObject_CallMethod(Instance,"get_columns_name",NULL);
			int SizeOfList = PyList_Size(pValue);
			vector<wchar_t*> p_list;
			//p_list = new float[SizeOfList];
			for (int i=0;i<SizeOfList;i++) {
				PyObject *Item = PyList_GetItem(pValue,i);
				char* r; wchar_t*_r;
				PyArg_Parse(Item,"s",&r);
				_r=utf8_to_unicode(r);
				//printf("%f\n",r);
				p_list.push_back(_r);
			}
		
		QStringList headLst = changeData(p_list);
		QList<QVariantList> dataLst = changedTableData(_2D_array);
		if (m_TableModel)
		{
			m_TableModel->setHeadData(headLst);
			m_TableModel->setTableData(dataLst);
		}



		pGetGname= PyObject_CallMethod(Instance, "get_cluster_plot", NULL);
		char* png_name;
		PyArg_Parse(pGetGname, "s", &png_name);
		
		QString strPngName = QString::fromUtf8(png_name);

		QString strPngPath = QDir::currentPath()+"/Resources/" + strPngName;
		ui.pngLabel->loadImagePath(strPngPath);
		ui.pngLabel->update();
		deletePngFile(strPngPath);


		pReturn = PyObject_CallMethod(Instance, "kmean_building", "iii" ,num, MaxNum, CentroidNum);
		int result;
		PyArg_Parse(pReturn, "i", &result);
		//

		//PyObject* pClassCalc = PyDict_GetItemString(pDict,"Kmeans_");
		//PyObject* pConstruct = PyInstanceMethod_New(pClassCalc);
		//PyObject* pInstance = PyObject_CallObject(pConstruct,NULL);


		//创建参数:



// 		char* a;
// 		QByteArray ba = file_path.toLatin1();
// 		a = ba.data();
// 		pArg = Py_BuildValue("s", "hello");
// 		PyList_Append(nList,Py_BuildValue("s", file_path));
// 		PyList_Append(pList, Py_BuildValue("iii", num, MaxNum, CentroidNum));
// 		PyList_SetItem(pArgs, 0,nList);
// 		PyList_SetItem(pArgs, 1,pList);
// 		QString res;
// 		pReturn = PyObject_CallObject(pFunc,pArg);
// 		PyArg_Parse(pReturn, "s", &res);
// 		//std::cout << "res:" << res << std::endl;//输出结果
// 		printf("%s", res);
		Py_Finalize();
	}
	else
	{

	}
}
void MaintenancePredictive::slotLocalFileBtnClicked()
{
	QList<QAbstractButton*> buttonsList = ui.mPButtonGroup->buttons();
	if (buttonsList.isEmpty()) {
		return;
	}
	foreach(QAbstractButton *button, buttonsList)
	{
		((QPushButton*)button)->setChecked(false);
	}

	QString filePath = QFileDialog::getOpenFileName(this, QStringLiteral("导入本地文件"), "", QStringLiteral("文件类型(*.*)"));

}

void MaintenancePredictive::slotSqlBtnClicked()
{
	QList<QAbstractButton*> buttonsList = ui.mPButtonGroup->buttons();
	if (buttonsList.isEmpty()) {
		return;
	}
	foreach(QAbstractButton *button, buttonsList)
	{
		((QPushButton*)button)->setChecked(false);
	}


}

void MaintenancePredictive::slottest()
{
	//ui.pushButton_3->setChecked(true);
}

void MaintenancePredictive::slotButtonJudge(int id)
{
	QPushButton *btn = qobject_cast<QPushButton*> (ui.mPButtonGroup->button(id));
	btn->setChecked(true);
}

// void MaintenancePredictive::paintEvent(QPaintEvent* event)
// {
// 	QPainter painter(this);
// 
// 	QPixmap pix;
// 
// 	pix.load("C:/Users/15898/Desktop/--/200013.png");
// 
// 	//painter.drawPixmap(0, 0, 100, 33, pix);
// 
// 
// 	painter.drawPixmap(0, 0, this->width(), this->height(), pix);
// 
// // 	QImage image;
// // 	image.load("C:/Users/15898/Desktop/--/200013.png");
// // 	//	ui.pngLabel->setPixmap(QPixmap::fromImage(image));
// // 
// // 	ui.pngLabel->setPixmap(QPixmap::fromImage(image.scaled(ui.pngLabel->size())));
// 
// 
// }
