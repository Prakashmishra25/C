#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x;
	int y;
	int z;
	printf("请输入两个整数的值x, y");
	scanf("%d,%d", &x, &y);
	z=x+y;
	printf("%d + %d =%d\n",x, y, z);
	system("PAUSE");
	return 0;
}