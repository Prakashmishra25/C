#include<stdio.h>
#include<stdlib.h>
int strlen(char *a)
{
	int i=0;
	while(a[i]!='\0');
	i++;
	return i;

}
//char *strcpy(char*a, char b[])
//{
//	int len=strlen(b);
//	int i;
//	for(i=0;i<len;i++)
//	{
//		a[i]=b[i];
//	}
//	a[i]='\0';
//	return a;


int main(void)
{
	char x[10]="hello";
	char y[6]="abcd";
	printf("%d",strlen(x));
	system("pause");
	return 0;
}





		






