#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
    const double pi=3.1415926;
	double r, area, circuit;
	printf("请输入半径：");
	scanf("%lf", &r);
	if(r<=FLT_EPSILON)/*r<=0的判定，如果r<=0,则直接退出*/
	{
		printf("错误：你输入的半径小于或等于0，程序退出.\n");
		system("PAUSE");   return 0;
	}
	
		
	
	area =pi*r*r;
	circuit=2*pi*r;
	printf("圆的面积和周长分别为: %f,%f\n",area, circuit);
	system("PAUSE");
	return 0;
}
