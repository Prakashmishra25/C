#include"StringFunction.h"
#pragma comment(lib, "StringFunction.lib")
#include<stdio.h>
int main(void)
{
	char str1[100]="Hello";
	char str2[100]="World!";
	char str3[100]="";
	char str4[100]="";
	printf("str1 is %s,str2 is %s \n",str1, str2);
	int len=myStrlen(str1);
	int mycmp=myStrcmp(str1,str2);
	printf("compare of Hello and World! is %d\n",mycmp);
	return 0;
	
}
