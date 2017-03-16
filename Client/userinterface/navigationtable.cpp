#include <QVBoxLayout>
#include <QHeaderView>
#include "navigationtable.h"

NavigationTable::NavigationTable(QWidget *parent)
    : QWidget(parent)
    , m_tableView(new QTableView(this))
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    m_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    m_tableView->horizontalHeader()->setVisible(false);
    m_tableView->verticalHeader()->setVisible(false);
    m_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->addWidget(m_tableView);
    setLayout(mainLayout);

    connect(m_tableView, &QTableView::clicked, [=](QModelIndex index){
        emit cellClicked(index.row());
    });
}

void NavigationTable::setNavigationModel(QStandardItemModel *model)
{
    m_tableView->setModel(model);
}

