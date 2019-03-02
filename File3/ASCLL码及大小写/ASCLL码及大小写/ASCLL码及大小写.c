#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a1, a2, a3;
	printf("请输入a1,a2,a3三个字符对应的小写字母:");
	scanf("%c %c %c", &a1, &a2, &a3);
	printf("三个小写字母对应的ASCLL码分别为:");
	printf("%d %d %d",a1, a2, a3);
	a1=a1-32;
	a2=a2-32;
	a3=a3-32;
	printf("三个小写字母对应的大写字母分别为:");
	printf("%c %c %c", a1, a2, a3);
	system("pause");


	return 0;
	system("pause");

}