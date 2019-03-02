/* 预处理宏，防止头文件重复包含*/
#ifndef ADDRESSMANAGER_H
#define ADDRESSMANAGER_H
#include "List.h"
/***
 *  class AddressManager : 通讯录管理器类
 */
class AddressManager
{
public:
    /* 静态方法：运行通讯录管理器 
     * 本程序负责运行整个通讯录的业务逻辑主循环，调
     * 用本方法后通讯录开始运行。 
     */
	static void start();

private:
    /* 静态子对象：保存记录的链表成员 
     * 提示：静态属性需要在类外定义，本属性需要在
     * AddressManager.cpp源文件中进行定义，定义
     * 方法（全局域） List AddressManager::m_Reclist;
     */
	static List m_Reclist;
};
#endif