#include<stdio.h>
int
main()
{
	int N,AH,AM,AS,BH,BM,BS,i,h,m,s,k;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		k=0;
		scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);
		s=(AS+BS)%60;
		k=(AS+BS)/60;
		m=(AM+BM+k)%60;
		k=(AM+BM+k)/60;
		h=AH+BH+k;
		printf("%d %d %d\n",h,m,s);
	}
	return 0;
}
