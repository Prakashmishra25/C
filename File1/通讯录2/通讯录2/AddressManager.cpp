#include"AddressManager.h"
List AddressManager:: m_Reclist;
#include<stdlib.h>
#include<iostream>
using namespace std;

void AddressManager::start()
{


	
	while(1)
	{

		int n;
		system("cls");
		cout<<"===== 通 讯 录 ====="<<endl
		<<"    1 [添加记录]"<<endl
		<<"    2 [删除记录]"<<endl
		<<"    3 [浏览记录]"<<endl
		<<"    4 [查找记录]"<<endl
		<<"    5 [退出系统]"<<endl
		<<"===================="<<endl
		<<"[请选择您要执行的操作]:";
		cin>>n;
		if((n<1)||(n>5))
		{
				n=6;
		}
		switch(n)
		{
			
		

			case 1:
				{
					
					cout<<"[请输入新联系人的姓名]:";
					string name;
					cin>>name;
					cout<<"[请输入新联系人的电话]:";
					string phone;
					cin>>phone;
					cout<<"[请输入新联系人的地址]:";
					string address ;
					cin>>address;
					Record r;
					r.setName(name);
					r.setPhone(phone);
					r.setAddress(address);
					m_Reclist.push(r);
					cout<<"[新建联系人成功！]";
					system("pause");
					break;
				}	   
			case 2:
				{
					int i=1;
					cout<<"[请输入要删除联系人的姓名]";
					string name1;
					cin>>name1;
					while(m_Reclist.at(i).getName()!=name1)
					{
						i++;
					}
					if(i<=m_Reclist.length())
					{
						m_Reclist.remove(i);
						cout<<"[联系人"<<name1<<"已删除！]"<<endl;

					}
					else
					{
						cout<<"[删除的姓名不存在！]"<<endl;
					}
					system("pause");
	
					break;
				}
			case 3:
				{
					cout<<"姓名         电话           地址"<<endl;
					for(int i=1;i<=m_Reclist.length();++i)
					{
						string address,name,phone;
						address=m_Reclist.at (i).getAddress();
						name=m_Reclist.at (i).getName();
						phone=m_Reclist.at (i).getPhone();
						cout<<name<<"          "<<phone<<"          "<<address<<endl;
					}
					system("pause");
					break;
				}
			case 4:
				{

					string name2;
					string a,b,c;
					cout<<"[请输入要查找联系人的姓名]：";
					cin>>name2;
					int len=m_Reclist.length();
					int i;
					for(i=1;i<=len;++i)
					{
						if(m_Reclist.at (i).getName()==name2)
						{
							Record r=m_Reclist.at(i);
							cout<<"姓名         电话           地址"<<endl;
							a=r.getName();
							b=r.getPhone();
							c=r.getAddress();
							cout<<a<<"          "<<b<<"          "<<c<<endl;	
							system("pause");
							break;
						}
					}
					if(i>len)
					{
						cout<<"[姓名不存在！]"<<endl;
						system("pause");
						
					}
					break;
				}	

					
			case 5: 
				{
					return;
				}
			case 6:
				{
					cout<<"输入不正确请重新输入:"<<endl;
					system("pause");
					break;
				}

		}
	}


}