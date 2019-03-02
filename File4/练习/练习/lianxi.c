#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;


}
int main(void)
{
	int a=3, b=5;
	int c;
	printf("a=%d\t,b=%d",a,b);
	swap(&a,&b);
	printf("a=%d\t,b=%d",a,b);

	/*char x[10];
	int i=0, j=0;
	
	
	scanf("%s",x);
	while(x[j]!='\0');
	{
		j++;
	}
	j--;
	while(i<j)
	{
		if(x[i]!=x[j])
		{
			break;
		}
		else
		{
		
			i++;
			j--;
		}
	}
	if(i<j)
	{
		printf("不是回文");
	}
	if(i==j)
	{
		printf("是回文");
	}
	system("pause");
	return 0;
}

*/
	return 0;
}
