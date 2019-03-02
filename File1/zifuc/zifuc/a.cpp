











//#include<iostream>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//vector<double> res;
//int main(){
//	int n;
//	long long a,b;
//	double num;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a>>b;
//		double s=a+b;
//		num=a/s;
//		res.push_back(num);
//
//	}
//	for(int i=0;i<res.size();i++){
//		printf("%.12lf\n",res[i]);
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main(void){
//	vector<int> res;
//	int T;
//	int N,B;
//	int M[101];
//	int C[101];
//	int sum;
//	int count;
//	cin>>T;
//	for(int i=0;i<T;i++){
//		cin>>N>>B;
//		for(int j=0;j<N;j++){
//			cin>>M[j];
//			sum+=M[j];
//
//		}
//		for(int t=0;t<B;t++){
//			cin>>C[i];
//			
//		}
//		sort(C,C+B);
//		for(int s=0;s<B;s++){
//			if(sum>=C[s]){
//				count++;
//				sum-=C[s];
//			}else{
//				res.push_back(count);
//				count=0;
//				sum=0;
//				break;
//				
//			}
//		}
//	}
//	for(int i=0;i<res.size();i++){
//		cout<<res[i];
//	}
//	return 0;
//}

















//#include<iostream>
//#include<stdio.h>
//using namespace std;
//#include<vector>
//int array[5001]={0};
//vector<int> s;
//int n;
//int main(void){
//	while(cin>>n){
//		for(int i=1;i<=n;i++){
//			scanf("%d",&array[i]);
//		}
//		for(int i=1;i<n-1;i++){
//			for(int j=i+1;j<=n-1;j++)
//			{
//				if(((array[i]^array[J])^array[j])==0)
//				{
//					array[0]+=1;
//					
//				}
//			
//			}
//		
//		}
//		s.push_back(array[0]);
//		memset(array,0,sizeof(array));
//	
//	}
//	for(int i=0;i<s.size();i++){
//		printf("%d",s[i]);
//	
//	}
//	return 0;
//
//}
//#include<iostream>
//#include<string.h>
//using namespace std;
//#include<stdlib.h>
//int main(void){
//	char s[10]={0};
//	s[0]='s';
//	s[1]='o';
//	int len=strlen(s);
//	printf("%d",len);
//
//	return 0;
//
//
//}
//
//#include<iostream>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//int main(void){
//	int M;
//	int C[101];
//	int N,B;
//	int T;
//	cin>>T;
//	for(int i=0;i<T;i++){
//		int count=0;
//		int sum=0;
//		cin>>N>>B;
//		for(int j=0;j<N;j++){
//			cin>>M;
//			sum+=M;
//		}
//		for(int s=0;s<B;s++){
//			cin>>C[s];
//		}
//		sort(C,C+B);
//		for(int t=0;t<B;t++){
//			if((sum>=C[t])&&count<N){
//				count++;
//				sum-=C[t];
//				
//			}
//			
//		}
//		cout<<count<<endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
bool isrp(int a,int b){
	if(a==0||b==0||a==b){
		return false;
	}else if(a==1||b==1){
		return true;
	}else{
		while(1){
			int t=a%b;
			if(t==0){
				break;
			}else{
				a=b;
				b=t;
			}
		}
		if(b>1){
			return false;
		}else{
			return true;
		}
		
	}
}
int main(void){
    int N;
	cin>>N;
	cout<<0<<"/"<<1<<endl;
	for(int i=0;i<=N;i++){
		for(int j=i;j<=N;j++){
			if(isrp(j,i)){
				cout<<i<<"/"<<j<<endl;;
			}
		}
	}
	return 0;

	


    
}
