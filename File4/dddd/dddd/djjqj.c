#include<stdio.h>
#include<stdlib.h> 
void change(int a);
int main(void)
{
	int a;
	printf("请输入一个你要转化的数字");
	scanf_s("%d",&a);
	change(a);
	system("PAUSE");
	return 0;
}

 void change(int a)
 {
	 int arr[32],i,t;
	 if(a>=0){
			  for(i=0;i<32;i++)
				 arr[i]=0;
			  for(i=0;a!=0;i++)
			  {
				  arr[31-i]=a%2;
				  a=a/2;
			  } 
	 for(i=0;i<32;i++)
	 {
	 printf("%d",arr[i]);
	 if((i+1)%4==0)
		 printf(" ");
	 }
			  }
	 else
	 {
	 a=-a;
	  for(i=0;i<32;i++)
		 arr[i]=0;
	   for(i=0;a!=0;i++)
			  {
				  arr[31-i]=a%2;
				  a=a/2;
			  } 
	   for(i=0;i<32;i++)
	   {
		   if(arr[i]==0)
			   arr[i]=1;
		   else
			   arr[i]=0;
	   }
	  arr[31]=arr[31]+1;
	 for(i=0;i<32;i++)
	 {
	 printf("%d",arr[i]);
	 if((i+1)%4==0)
		 printf(" ");
	 }
	 }
	 
 }
