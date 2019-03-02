////#include<iostream>
////#include<algorithm>
////using namespace std;
////
////int main(){
////    
////    int n;
////    cin>>n;
////    int a[500];
////    for(int i=0;i<n;i++){
////        cin>>a[i];  
////    }
////    sort(a,a+n);
////    int res;
////    if(n==1){
////        cout<<a[0];
////        return 0;
////    }
////    if(a[0]!=a[1]){
////        cout<<a[0];
////        return 0;
////    }
////    if(a[n-2]!=a[n-1]){
////        cout<<a[n-1];
////        return 0;
////    }
////    for(int i=1;i<n-2;i++){
////        if(a[i]!=a[i+1]&&a[i+1]!=a[i+2]){
////            cout<<a[i+1];
////            return 0;
////        }
////        
////    }
////	return 0;
////}
////#include<iostream>
////#include<vector>
////using namespace std;
////bool f(long long c,int  a){
////    if(c%a){
////        return false;
////    }
////    return true;
////    
////}
////vector<int> res
//#include<stdio.h>
//#include<string.h>
//int main(){
//    int i,n,j,flag;
//	char a[1000]={0};
// 
//    for(j=0;j<10;j++){
////  printf("input string:");
//    gets(a);
//    n=strlen(a);
// 
//    flag=1;
//    for(i=0;i<n;i++){
//        if(a[i]==' '||a[i]=='\t'||a[i]=='\r'||a[i]=='\n')
//            flag=1;
//        if(a[i]>=48&&a[i]<=57)
//            flag=0;
//        if(flag == 1&&a[i]>='a'&&a[i]<='z'){
//            a[i]-=32;flag=0;
//        }  
//    }
//    for(i=0;i<n;i++)
//        printf("%c",a[i]);
//    printf("\n");
//    }
//    return 0;
//}
//

//#include <iostream>  
//#define INF 0xffffff          
//using namespace std;  
//char str[200][200];     
//int num[200];             
//  
//int main()  
//{  
//    int m,n;  
//    memset(num,0,sizeof(num));  
//    cin>>n;  
//    cin>>m;  
//    num[0] = INF;      
//    for (int i=1;i<=m;i++)  
//    {  
//        cin>>str[i];  
//          
//         
//        for (int j=0;j<n;j++)  
//        {  
//            for (int k=j+1;k<n;k++)  
//            {  
//                if (str[i][j] > str[i][k])  
//                {  
//                    num[i]++;  
//                }  
//            }  
//        }  
//  
//    }  
//  
//    int p=0;  
//  
//   
//    for (int i=1;i<=m;i++)  
//    {  
//        for (int j=1;j<=m;j++)  
//        {  
//            if (num[j] < num[p])  
//            {  
//                p = j;  
//            }  
//        }  
//        cout<<str[p]<<endl;  
//        num[p] = INF;       
//  
//    }  
//  
//    system("pause");  
//    return 0;  
//      
//}  
//
//
//
#include<iostream>
using namespace std;
int main(void){
	int n;
	int *a;
	while(cin>>n){
		int sum=0;
		a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int s=j+1;s<n;s++){
					if(a[i]^a[j]^a[s]==0){
						sum++;
					}
				}
			}
		}
		cout<<sum;

	}
	
	
	return 0;
}