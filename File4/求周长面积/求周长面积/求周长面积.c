#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
    const double pi=3.1415926;
	double r, area, circuit;
	printf("������뾶��");
	scanf("%lf", &r);
	if(r<=FLT_EPSILON)/*r<=0���ж������r<=0,��ֱ���˳�*/
	{
		printf("����������İ뾶С�ڻ����0�������˳�.\n");
		system("PAUSE");   return 0;
	}
	
		
	
	area =pi*r*r;
	circuit=2*pi*r;
	printf("Բ��������ܳ��ֱ�Ϊ: %f,%f\n",area, circuit);
	system("PAUSE");
	return 0;
}
