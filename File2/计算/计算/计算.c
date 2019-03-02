#include<stdio.h>
int main(void)
{
	char a, b, c;
	printf("%d",sizeof("abc\x61\0"));
	return 0;
}