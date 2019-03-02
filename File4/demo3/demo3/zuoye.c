#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr1[4]={3,6,9,11};
	int arr2[5]={1,3,8,45,89};
	int i=0, j=0, k=0, arr3[8];
	while(i<4&&j<5)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		if(arr1[i]>arr2[j])
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
		if(arr1[i]=arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			j++;
			k++;
		
		}
	}
	arr3[6]=arr2[3];
	arr3[7]=arr2[4];
	i=0;
	while(i<8)
	{
		printf("%d",arr3[i]);
		i++;
	
	}
	system("pause");
	return 0;

}