/*#include<iostream>
using namespace std;
template <typename T>
inline void mySwap(T & a,T & b)
{
	T c;
	c=a;
	a=b;
	b=c;
}
template <typename T>
void bubbleSort(T*  const arr,int size)
{
	bool change=true;
	for(int i=0;i<size-1&&change;i++)
	{
		change=false;
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				T temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				change=true;
			}
		}
	}

}
template <typename T >
void printResult(T* const arr, int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<endl;
}
int main(void)
{

	int arri[10] = { 4, 2, 5, 7, 9, 1, 3, 8, 0, 6 };
	bubbleSort(arri, 10);
    printResult<int>(arri,10);
	double arrd[10] = {4.4,2.2,5.5,7.7,9.9,1.1,3.3,8.8,0,6.6};
    bubbleSort(arrd, 10);
    printResult<double>(arrd,10);
	char arrc[10] = "aefdighcb";
    bubbleSort(arrc, strlen(arrc));
    printResult<char>(arrc, strlen(arrc));
	return 0;
}*/