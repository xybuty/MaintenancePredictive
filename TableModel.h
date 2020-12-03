#pragma once

#include <QAbstractTableModel>

class TableModel : public QAbstractTableModel
{
	Q_OBJECT

public:
	TableModel(QObject *parent = nullptr);
	~TableModel();

	int rowCount(const QModelIndex &parent) const Q_DECL_OVERRIDE;
	int columnCount(const QModelIndex &parent) const Q_DECL_OVERRIDE;
	QVariant data(const QModelIndex &index, int role) const Q_DECL_OVERRIDE;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const Q_DECL_OVERRIDE;
	Qt::ItemFlags flags(const QModelIndex &index) const Q_DECL_OVERRIDE;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::CheckStateRole);

	virtual bool ModelBeginRemoveRows(int row, int count, const QModelIndex& parent = QModelIndex());
	virtual bool ModelEndRemoveRows();

	void setHeadData(const QStringList& dataList);
	void setTableData(QList<QVariantList> dataLst);

private:
	QStringList	m_TileLst;
// 	typedef QList<QVariant> QVariantList;
// 	typedef QMap<QString, QVariant> QVariantMap;
// 	typedef QHash<QString, QVariant> QVariantHash;

	//QVariantList<QVariantMap> a;

	QList<QVariantList> m_DataLst;

	QList<QList<QVariantMap>> m_VarMapLst;

};
