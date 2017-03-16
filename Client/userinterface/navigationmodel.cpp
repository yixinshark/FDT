#include "navigationmodel.h"

namespace NV = Navigation_NS;
NavRealTimePageModel::NavRealTimePageModel()
{
    int rowCount = sizeof(NV::MENU_REALTIME_PAGE) / BUFFER_SIZE;

    this->setRowCount(rowCount);
    this->setColumnCount(1);


    for (int i = 0; i < rowCount; i++)
    {
        setData(this->index(i, 0, QModelIndex()), QVariant(NV::MENU_REALTIME_PAGE[i]), Qt::DisplayRole);
        this->item(i, 0)->setTextAlignment(Qt::AlignCenter);
    }
}

NavQueryDataPageModel::NavQueryDataPageModel()
{
    int rowCount = sizeof(NV::MENU_QUERYDATA_PAGE) / BUFFER_SIZE;

    this->setRowCount(rowCount);
    this->setColumnCount(1);


    for (int i = 0; i < rowCount; i++)
    {
        setData(this->index(i, 0, QModelIndex()), QVariant(NV::MENU_QUERYDATA_PAGE[i]), Qt::DisplayRole);
        this->item(i, 0)->setTextAlignment(Qt::AlignCenter);
    }
}

NavHelpPageModel::NavHelpPageModel()
{
    int rowCount = sizeof(NV::MENU_HELP_PAGE) / BUFFER_SIZE;

    this->setRowCount(rowCount);
    this->setColumnCount(1);


    for (int i = 0; i < rowCount; i++)
    {
        setData(this->index(i, 0, QModelIndex()), QVariant(NV::MENU_HELP_PAGE[i]), Qt::DisplayRole);
        this->item(i, 0)->setTextAlignment(Qt::AlignCenter);
    }
}
