#include<stdio.h>
#define ARR 13
int main(void)
{
	int a[ARR]={10},i,j,m,count;
	for(i=1;i<ARR;i++)
		a[i]=1;
	for(i=0,count=1;count<12;count++){
		for(m=0;m<3;){
			i=i%12+1;
			if(a[i]!=0)
				m++;
		}
	a[i]=0;
	}
	for(i=1;i<ARR;i++)
		if(a[i])
			printf("%d\n",i);
	return 0;
}