#pragma once

#include <QDialog>
#include <QFile>
#include<QFileInfo>
#include <QFileDialog>
//#include <arrayobject.h>

#include "ui_clusteringDlg.h"

class clusteringDlg : public QDialog
{
	Q_OBJECT

public:
	clusteringDlg(QWidget *parent = Q_NULLPTR);
	~clusteringDlg();

	int getNum();
	int getMaxNum();
	int getCentroidNum();
	QString getFile();
	QString getFile_path();
	QString File_ab_path;
private:
	Ui::clusteringDlg ui;
};
