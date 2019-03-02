#include "stdio.h"
#define MAX 100
 
void combine(int a[], int n, int m, int b[], int M);
 
int main(void)
{
 int i;
 int a[MAX], b[MAX];
 
 for (i = 1; i < 100; i++)
  a[i - 1] = i;
 
 combine(a, 5, 4, b, 4);
}
 
void combine(int a[], int n, int m, int b[], int M)
{ 
 int i, j;
 
 for (i = n; i >= m; i--)
  {
   b[m - 1] = i - 1;
   if (m > 1)
    combine(a, i - 1, m - 1, b, M);
   else
    {
     for (j = M - 1; j >= 0; j--)
      printf("%d ", a[b[j]]);
     printf("\n");
    }
  }
}
