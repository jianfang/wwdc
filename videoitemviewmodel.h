#ifndef VIDEOITEMVIEWMODEL_H
#define VIDEOITEMVIEWMODEL_H

#include <QAbstractItemModel>

#include <QModelIndex>

class VideoItemViewModel : public QAbstractItemModel
{
public:
    VideoItemViewModel();

    virtual int	columnCount(const QModelIndex & parent = QModelIndex()) const { return 1; }
    virtual QVariant	data(const QModelIndex & index, int role = Qt::DisplayRole) const { return QVariant(); }
    virtual QModelIndex	index(int row, int column, const QModelIndex & parent = QModelIndex()) const {return QModelIndex(); }
    virtual QModelIndex	parent(const QModelIndex & index) const {return QModelIndex(); }
    virtual int	rowCount(const QModelIndex & parent = QModelIndex()) const { return 0;}
};

#endif // VIDEOITEMVIEWMODEL_H
