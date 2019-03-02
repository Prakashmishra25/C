#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
	/*int x=4, y=3;
	double z1, z2;
	z1=x/y,z2=x%y;
	printf("%d,%d", z1, z2);
	system("pause");
	return 0;*/



	/*int a=5;
	int b=--a;
	printf("%d",b);
	return 0;*/

	/*int a=3;
	int b=4;
	int c;
	c=a<4;
	printf("%d", c);
	return 0;*/

	/*int x=3, y=4, z;
	z=x++ + --y;
	printf("%d %d %d", x, y, z);
	return 0;
	system("pause");*/


	/*反输出*/
	/*int a, b, c, n, m;
	printf("请输入三位数n的值:");
	scanf("%d",&n);
	a=n/100;
	b=(n/10)%10;
	c=n%10;
	m=c*100+b*10+a;
	printf("转换后输出的值为: %d",m);
	system("pause");
	return 0;*/
	

	/*int y=4, x=4, z, w, r;
	z=++x+ x++ + x++;
	printf("%d", z);
	return 0;

*/
	const double pi=3.1415926;
	double r, area, circuit;
	printf("请输入半径：");
	scanf("%1f", &r);
	if(r<=0)/*r<=0的判定，如果r<=0,则直接退出*/
	
		printf("错误：你输入的半径小于或等于0，程序退出.\n")，
		system("PAUSE");         return 0;
	
	else if(r>0)
	
		area =pi*r*r;
	    circuit=2*pi*r;
	    printf("圆的面积和周长分别为: %f,%f\n",area, circuit);
	    system("PAUSE");
	    return 0;
	
}




