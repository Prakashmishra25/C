#include<iostream>
using namespace std;
/*��

��̬���Գ�Ա�����࣬�����ж��������ԣ���Ҫ�������������ⶨ�壬��Ҫ��static;
(��̬���Գ�Ա���ⶨ�����ֻ�ܷ���Դ�ļ���.cpp)
�����public������ֱ��ͨ�����ͣ�����̬����������
��̬��Ա������ר�ŷ��ʾ�̬���Գ�Ա��������û�ж�������·��ʾ�̬����
��̬��Ա����ֻ�ܷ��ʾ�̬���Գ�Ա�;�̬��Ա����
��ͨ��Ա�������Է�������������Լ������г�Ա����


*/
/*class Person{
public:
	string name;
	static int count;
}
int Person::count;

class Person{
public:
	static int getcount(){}

private:

	string name;
	static int count;
}*/




/*


�������ԣ����Ӷ���
û��Ĭ�Ϲ��캯�����Ӷ��󣬱���ͨ��������Ĺ��캯���ĳ�ʼ���б���г�ʼ����
����˳���ȹ����Ӷ����ٹ��쵱ǰ����Ĺ��캯��
*/


class Person{
public:
	Person()
		:id("00001")
	{
	}
	void printName()
		const//����ͷ���const���ں���ͷ
	{}
	string name;
	const string id;
	mutable int n;//�Ʊ���κ���������Խ���д�������ϣ���޸ĳ���������ԣ�

}
void Person::printName()const{}
int main(void)
{
	const Person p1;
	//p1.name=...;//����
	//��������ó���Ա����
	p1.n









	return 0;


}