#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	 char arr1[] = "abcdefghijklmnopqrstuvwxyz1234567890";
	 char arr2[] = "18ac4y7bxuiep23hjs5ofwv0zdl9gkm6nqrt";
	 char c[10];
	 int len,i,j;
	 printf("ÇëÊäÈëÃ÷ÎÄ:");
	 scanf("%s",c);
	 len=strlen(c);
	  i=0;
	 j;
	 while(i<len)
	 {
		for(j=0;j<36;j++)
		{
			if(c[i]==arr1[j])
			{
				c[i]=arr2[j];
				
			}					
		}
		i++;
	 
	 }
	 printf("%s",c);
	 system("pause");
	 return 0;

}