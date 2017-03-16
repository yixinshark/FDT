#ifndef NAVIGATION_WIGET_H
#define NAVIGATION_WIGET_H

#include <QToolBox>

class NavigationWiget : public QToolBox
{
    Q_OBJECT

public:
    explicit NavigationWiget(QWidget *parent = 0);
    ~NavigationWiget() {}

signals:
    void menuCellClicked(int, int);

private:
    void setMenuDrawer();

    int m_curDrawerIndex;
};

#endif // NAVIGATION_WIGET_H
