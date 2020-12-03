#include "TableModel.h"

Q_DECLARE_METATYPE(QList<QVariant>);

TableModel::TableModel(QObject *parent)
	: QAbstractTableModel(parent)
{
	m_TileLst.clear();
	
	
}

TableModel::~TableModel()
{
}

int TableModel::rowCount(const QModelIndex &parent) const 
{
	return m_DataLst.size();
}

int TableModel::columnCount(const QModelIndex &parent) const 
{
	return m_TileLst.size();
}

QVariant TableModel::data(const QModelIndex &index, int role) const 
{
	if (!index.isValid() || m_DataLst.isEmpty())
	{
		return QVariant();
	}

	int row = index.row();
	int column = index.column();


	QVariantList rVarLst = m_DataLst.at(row);
	if (rVarLst.isEmpty())
	{
		return QVariant();
	}

	QVariant cVar = rVarLst.at(column);

	QVariantMap cMap = cVar.toMap();

	if (cMap.isEmpty())
	{
		return QVariant();
	}

// 	QList<QVariantMap> varMap = m_VarMapLst.at(row);
// 	QVariantMap varMap1 = varMap.at(column);
// 	switch (column)
// 	{
// 	case 
// 
// 	default:
//		break;
// 
// 	}


	if (cMap.contains(QString::number(role)))
	{
		return cMap.value(QString::number(Qt::DisplayRole));
	}

	return QVariant();

}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const 
{
	if (role == Qt::DisplayRole)
	{
		if (orientation == Qt::Horizontal)
		{
			return m_TileLst.at(section);
		}
		else
		{
			return section + 1;
		}
	}
	return QVariant();
}

Qt::ItemFlags TableModel::flags(const QModelIndex &index) const 
{
	return QAbstractTableModel::flags(index);
}

bool TableModel::setData(const QModelIndex &index, const QVariant &value, int role /*= Qt::CheckStateRole*/)
{
	return QAbstractTableModel::setData(index, value, role);
}

bool TableModel::ModelBeginRemoveRows(int row, int count, const QModelIndex& parent /*= QModelIndex()*/)
{
	return true;
}

bool TableModel::ModelEndRemoveRows()
{
	return true;
}

void TableModel::setHeadData(const QStringList& dataList)
{
	m_TileLst.clear();
	m_TileLst = dataList;
}

void TableModel::setTableData(QList<QVariantList> dataLst)
{
	beginResetModel();
	m_DataLst = dataLst;
	endResetModel();
}
