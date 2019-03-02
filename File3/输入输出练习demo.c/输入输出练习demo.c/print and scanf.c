#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x=34;
	int y=-34;
	printf("x= %8d, y= %8d\n", x, y);
	printf("x= %08d, y= %08d\n", x, y);
	printf("x= % 08d, y= % 08d\n", x, y);
	printf("x= % -8d, y= % -8d\n", x, y);
	printf("x= % - 8d, y= % - 8d\n", x, y);
	printf("x= % - + 8d, y= % - + 8d\n", x, y);
	printf("x= %8.4d, y= %8.4d\n", x, y);
	printf("x= % - 8.4d, y= % - 8.4d\n", x, y);





	system("PAUSE");
	return 0;
}