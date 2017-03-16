#ifndef NAVIGATION_TABLE_H
#define NAVIGATION_TABLE_H

#include <QWidget>
#include <QStandardItemModel>
#include <QTableView>

class NavigationTable : public QWidget
{
    Q_OBJECT

public:
    explicit NavigationTable(QWidget *parent = 0);
    ~NavigationTable() {}


signals:
    void cellClicked(int);

public:
    void setNavigationModel(QStandardItemModel *);


private:
    //QStandardItemModel model;
    QTableView *m_tableView;
};

#endif // NAVIGATION_TABLE_H
