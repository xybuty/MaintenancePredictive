#include "clusteringDlg.h"

clusteringDlg::clusteringDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &clusteringDlg::accept);
	connect(ui.FileButton, &QPushButton::clicked, this, &clusteringDlg::getFile);
}

clusteringDlg::~clusteringDlg()
{
}

int clusteringDlg::getNum()
{
	return ui.numSbx->value();
}

int clusteringDlg::getMaxNum()
{
	return ui.maxNumSbx->value();
}

int clusteringDlg::getCentroidNum()
{
	return ui.centroidNumSbx->value();
}

QString clusteringDlg::getFile()
{
	QString File_full, file_name,file_path;
	QFileInfo fileinfo;
	QString currentPath = QDir::currentPath();
	QString dlgTitle = "打开一个文件";
	QString filter = "所有文件(*.*)";
	File_full = QFileDialog::getOpenFileName(this, dlgTitle, currentPath, filter);
	fileinfo = QFileInfo(File_full);
	file_path = fileinfo.absoluteFilePath();
	File_ab_path =file_path;
	return file_path;
}

QString clusteringDlg::getFile_path()
{
	return File_ab_path;
}