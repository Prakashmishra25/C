#include<stdio.h>
#include<stdlib.h>
int strlen(char *a)
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;

	}
	return i;

}
int main(void)
{
	char a[10];
	printf("ÇëÊäÈëÃ÷ÎÄ:");
	scanf("%s",a);
	int n=0;
	while(n<strlen(a))
	{
		printf("%c",a[n]+4);
		n++;
	}
	system("pause");
	return 0;

}