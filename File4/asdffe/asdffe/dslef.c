#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char a[10];
	printf("ÇëÊäÈëÃ÷ÎÄ:");
	scanf("%s",a);
	int i=0;
	while(i<(strlen(a)))
	{
		a[i]=a[i]+32;
		i++;
	}
	printf("%s",a);
	system("pause");
	return 0;

}