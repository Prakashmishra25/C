#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float r, h, s, v;
	printf("������뾶rֵ:");
	scanf("%d", &r);
	printf("������뾶hֵ:");
	scanf("%d", &h);
	s=2*r*r*3.14+2*3.14*r*h;
	v=r*r*3.14*h;
	printf("Բ���ı����Ϊ:");
	printf("%d",&s);
	printf("Բ�������Ϊ:");
	printf("%d",&v);
	system("pause");
	return 0;
}

