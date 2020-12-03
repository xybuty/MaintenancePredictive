#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MaintenancePredictive.h"
#include <Python.h>
#include <arrayobject.h>
#include <wchar.h>
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;
class TableModel;

class MaintenancePredictive : public QMainWindow
{
	Q_OBJECT

public:
	MaintenancePredictive(QWidget *parent = Q_NULLPTR);
	~MaintenancePredictive();
	void initialize();
	void ConnetSignalAndSlot();
private:
	Ui::MaintenancePredictiveClass ui;

	TableModel* m_TableModel{ NULL };
private:
	void loadStyleSheet(const QString &sheetName);
	void deletePngFile(const QString &strPath);
	QStringList changeData(vector<wchar_t*> p_lis);
	QList<QVariantList> changedTableData(vector<vector<double>> vecData);

private slots:
	void titleClicked();
	void clusteringClicked();

	void slotLocalFileBtnClicked();
	void slotSqlBtnClicked();
	void slottest();
	void slotButtonJudge(int id);
};
