#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float r, h, s, v;
	printf("请输入半径r值:");
	scanf("%d", &r);
	printf("请输入半径h值:");
	scanf("%d", &h);
	s=2*r*r*3.14+2*3.14*r*h;
	v=r*r*3.14*h;
	printf("圆柱的表面积为:");
	printf("%d",&s);
	printf("圆柱的体积为:");
	printf("%d",&v);
	system("pause");
	return 0;
}

