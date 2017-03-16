#include "navigationwiget.h"
#include "navigationconstant.h"
#include "navigationtable.h"
#include "navigationmodel.h"

NavigationWiget::NavigationWiget(QWidget *parent)
    : QToolBox(parent)
    , m_curDrawerIndex(0)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QFont font;
    font.setPixelSize(20);
    font.setBold(true);

    setFont(font);

    int padding = (200 - 16 - fontMetrics().width(Navigation_NS::DRAWER_MENU[0]))/2;
    setStyleSheet(QString("QToolBox::tab {padding-left: %1px;}").arg(padding));

    setMenuDrawer();
    //this->layout()->setSpacing(2);

    connect(this, &NavigationWiget::currentChanged, [=](int index){
        m_curDrawerIndex = index;
    });
}

void NavigationWiget::setMenuDrawer()
{
    NavigationTable *table[MENU_COUNT];
    for (int i = 0; i < MENU_COUNT; i++)
    {
        table[i]= new NavigationTable(this);
        connect(table[i], &NavigationTable::cellClicked, [=](int index){
           emit menuCellClicked(m_curDrawerIndex, index);
        });

        addItem(table[i], tr(Navigation_NS::DRAWER_MENU[i]));
    }

    //NavRealTimePageModel realTimeModel;
    table[0]->setNavigationModel(new NavRealTimePageModel());
    //NavQueryDataPageModel queryPageModel;
    table[1]->setNavigationModel(new NavQueryDataPageModel());
    //NavHelpPageModel helpPageModel;
    table[2]->setNavigationModel(new NavHelpPageModel());
}
