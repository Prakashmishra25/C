#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void f(char **p,int len)
{
	int i, j;
	char *t;
	for (i=0;i<len-1;i++)
	{
		for (j=0;j<len-i-1;j++)
		{
			if(strcmp(p[j],p[j+1])==1)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	i=0;
	while(i<len)
	{
		printf("%s\n",p[i]);
		i++;
	}
}
int main(void)
{
	char *a[5]={"abcd","1889","efga","666a","bcde"};
	f(a,5);
	system("pause");
	return 0;

}

