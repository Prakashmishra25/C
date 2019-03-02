#include<stdio.h>
#define ARR 20
int main(void)
{
	int k=0,base,n,j,num[ARR],temp;
	printf("enter 10-basenumber:");
	scanf("%d",&n);
	printf("enter base:");
	scanf("%d",&base);
	temp=n;
	do{
		num[k++]=temp%base;
		temp/=base;
	
}while(temp!=0);
	