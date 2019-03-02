#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=31;
	float f=30.45;
	char a[10] = "abcd\0";
	printf(" % 7.3d\n", x);
	printf(" % 7.3x\n", x);
	printf(" % 7.3o\n", x);

	printf(" % 7.3e\n", f);
	printf(" % 7.3f\n", f);
	printf(" % 7.3s\n", a);
	system("PAUSE");
	return 0;
}