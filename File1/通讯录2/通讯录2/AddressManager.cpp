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
		cout<<"===== ͨ Ѷ ¼ ====="<<endl
		<<"    1 [��Ӽ�¼]"<<endl
		<<"    2 [ɾ����¼]"<<endl
		<<"    3 [�����¼]"<<endl
		<<"    4 [���Ҽ�¼]"<<endl
		<<"    5 [�˳�ϵͳ]"<<endl
		<<"===================="<<endl
		<<"[��ѡ����Ҫִ�еĲ���]:";
		cin>>n;
		if((n<1)||(n>5))
		{
				n=6;
		}
		switch(n)
		{
			
		

			case 1:
				{
					
					cout<<"[����������ϵ�˵�����]:";
					string name;
					cin>>name;
					cout<<"[����������ϵ�˵ĵ绰]:";
					string phone;
					cin>>phone;
					cout<<"[����������ϵ�˵ĵ�ַ]:";
					string address ;
					cin>>address;
					Record r;
					r.setName(name);
					r.setPhone(phone);
					r.setAddress(address);
					m_Reclist.push(r);
					cout<<"[�½���ϵ�˳ɹ���]";
					system("pause");
					break;
				}	   
			case 2:
				{
					int i=1;
					cout<<"[������Ҫɾ����ϵ�˵�����]";
					string name1;
					cin>>name1;
					while(m_Reclist.at(i).getName()!=name1)
					{
						i++;
					}
					if(i<=m_Reclist.length())
					{
						m_Reclist.remove(i);
						cout<<"[��ϵ��"<<name1<<"��ɾ����]"<<endl;

					}
					else
					{
						cout<<"[ɾ�������������ڣ�]"<<endl;
					}
					system("pause");
	
					break;
				}
			case 3:
				{
					cout<<"����         �绰           ��ַ"<<endl;
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
					cout<<"[������Ҫ������ϵ�˵�����]��";
					cin>>name2;
					int len=m_Reclist.length();
					int i;
					for(i=1;i<=len;++i)
					{
						if(m_Reclist.at (i).getName()==name2)
						{
							Record r=m_Reclist.at(i);
							cout<<"����         �绰           ��ַ"<<endl;
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
						cout<<"[���������ڣ�]"<<endl;
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
					cout<<"���벻��ȷ����������:"<<endl;
					system("pause");
					break;
				}

		}
	}


}