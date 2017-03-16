#ifndef NAVIGATION_MODEL_H
#define NAVIGATION_MODEL_H

#include <QStandardItemModel>
#include "navigationconstant.h"

class NavRealTimePageModel : public QStandardItemModel
{
public:
    explicit NavRealTimePageModel();
    ~NavRealTimePageModel(){}
};


class NavQueryDataPageModel : public QStandardItemModel
{
public:
    explicit NavQueryDataPageModel();
    ~NavQueryDataPageModel() {}
};


class NavHelpPageModel : public QStandardItemModel
{
public:
    explicit NavHelpPageModel();
    ~NavHelpPageModel(){}
};

#endif // NAVIGATION_MODEL_H
