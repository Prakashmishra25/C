/* 预处理宏，防止头文件重复包含*/
#ifndef RECORD_H
#define RECORD_H

#include <string>
using namespace std;

/***
 *  class Record : 记录类
 */
class Record
{
public:
    /* 构造函数 */
	Record(string aName = "", string aPhone = "", string aAddress ="" );

    /* 设置记录-姓名属性 */
	void setName(string aName);
    /* 设置记录-电话号码属性 */
	void setPhone(string aPhone);
    /* 设置记录-家庭地址属性 */
	void setAddress(string aAddress);

    /* 获取记录-姓名属性 */
	string getName();
    /* 获取记录-电话号码属性 */
	string getPhone();
    /* 获取记录-家庭地址属性 */
	string getAddress();

private:
    /* 记录-姓名属性 */
	string m_strName;
    /* 记录-电话号码属性 */
	string m_strPhone;
    /* 记录-家庭地址属性 */
	string m_strAddress;
};

#endif