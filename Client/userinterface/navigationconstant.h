#ifndef ANVIGATION_CONSTANT_H
#define ANVIGATION_CONSTANT_H


namespace Navigation_NS {

#define BUFFER_SIZE (40)
#define MENU_COUNT (3)
//const char HEADER[] = "功能导航";

const char DRAWER_MENU[][BUFFER_SIZE] = {
    {"实时状态"}, {"历史数据"}, {"软件帮助"}
};

const char MENU_REALTIME_PAGE[][BUFFER_SIZE] = {
    {"平台状态"},
    {"应用状态"}, {"继电器采集状态"},
    {"继电器驱动状态"}, {"自动闭塞区间状态维护信息"},
    {"区间方向控制状态"}, {"采集方向控制信息"},
    {"占用逻辑检查状态"}, {"解锁盘接收信息"},
    {"解锁盘发送信息"}, {"UPS状态信息"},
    {"站间通信信息"}, {"数据统计信息"}, {"设备连接信息"}
};

const char MENU_QUERYDATA_PAGE[][BUFFER_SIZE] = {
    {"平台状态"},
    {"应用状态"}, {"继电器采集"},
    {"继电器驱动"},{"自动闭塞区间状态维护"},
    {"区间方向控制"}, {"采集方向信息"},
    {"区间占用逻辑"}, {"报警信息"},
    {"解锁盘接收信息"}, {"解锁盘发送信息"},
    {"平台统计信息"}, {"UPS信息"},
    {"设备连接状态"}, {"宕机信息"}
};

const char MENU_HELP_PAGE[][BUFFER_SIZE] = {
    {"关于软件"}, {"联系我们"}
};

}



#endif // ANVIGATION_CONSTANT_H
