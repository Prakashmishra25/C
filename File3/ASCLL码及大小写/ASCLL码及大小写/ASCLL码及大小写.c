#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a1, a2, a3;
	printf("������a1,a2,a3�����ַ���Ӧ��Сд��ĸ:");
	scanf("%c %c %c", &a1, &a2, &a3);
	printf("����Сд��ĸ��Ӧ��ASCLL��ֱ�Ϊ:");
	printf("%d %d %d",a1, a2, a3);
	a1=a1-32;
	a2=a2-32;
	a3=a3-32;
	printf("����Сд��ĸ��Ӧ�Ĵ�д��ĸ�ֱ�Ϊ:");
	printf("%c %c %c", a1, a2, a3);
	system("pause");


	return 0;
	system("pause");

}