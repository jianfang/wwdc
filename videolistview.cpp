#include "videolistview.h"

#include "videoitemviewmodel.h"

VideoListView::VideoListView(QWidget *parent)
    : QListView(parent)
{
    setModel(new VideoItemViewModel());
}

