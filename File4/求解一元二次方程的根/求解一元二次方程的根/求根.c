#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	double delta;
	double x1, x2;
	printf("输入a,b,c(a不为0，数据间以空格隔开):");
	scanf("%d %d %d", &a,&b, &c);
	delta =b^2-4*a*c;
	if(delta >= 0)
	{
		x1= (-b+sqrt(b^2-4*a*c))/(2.0*a);
		x2= (-b-sqrt(b^2-4*a*c))/(2.0*a);
		printf("方程的根为：%f, %f.\n", x1, x2);
	}
	else
	{
		printf("方程无实数根.\n");
	}
	system("pause");
	return 0;
}

