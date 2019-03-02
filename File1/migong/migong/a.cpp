#include <iostream>
using namespace std;
#define MAX(a, b) a > b ? a : b
 
int main()
{
         int NUM[150][150] = {0};
         int n;
         cin >> n;
         for(int i = 1 ; i <= n; i++)
                   for(int j = 1; j <= i; j++)
                            cin >> NUM[i][j];
         for(int i = 1 ; i <= n; i++)
                   for(int j = 1; j <= i; j++)
                            NUM[i][j] +=  MAX(NUM[i-1][j-1],NUM[i-1][j]);
         int max = 0;
		 for(int i = 1; i <= n; i++){

			 if(NUM[n][i] > max){
				 max = NUM[n][i];
			 }                
		 }
         cout << max;

}