//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	/*int a[2][3]={1,2,3,4,5,6};
//	int b[2][3]={1,2,3,4,5,6};
//	int c[2][3];
//	int i=0, j;
//	while(i<=1)
//	{
//		for(j=0;j<=2;j++)
//		{
//			c[i][j]=a[i][j]+b[i][j];
//			printf("%d",c[i][j]);
//		
//		
//		}
//		i++;
//		
//	}*/
//	
//	int a[2][3]={1,2,3,4,5,6};
//	int b[3][2]={2,2,2,2,2,2};
//	int c[2][2];
//	int i=0,j;
//	while(i<=1)
//	{
//		for(j=0;j<=1;j++)
//		{
//			c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
//
//			printf("%d",c[i][j]);
//
//		}
//		i++;
//
//	
//	}
//
//
//	system("pause");
//	return 0;
//
//
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr1[4]={3,6,9,1};
	int arr2[5]={1,3,8,45,89};
	int i=0, j=0, k=0, arr3[8];
	while(i<4 && j<5)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			arr3[k]=arr2[j];
			k++;
			J++;
		}
		else if(arr1[i]=arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			j++;
			k++;
		
		}
	}
	i=0;
	while(i<8)
	{
		printf("%d",arr3[i]);
		i++;
	
	}
	system("pause");
	return 0;

}