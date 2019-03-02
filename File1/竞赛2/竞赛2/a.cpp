#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int>vec;
	int num;
	while(cin<<num)
	{
		vec.push_back(num);

	}
	int i;
	int s;
	int count;
	int num=0;
	for(i=0;i<vec.size();i++)
	{
		count=0;
		for(s=i+1;s<vec.size();s++)
		{
			if(vec[i]<vec[s])
			{
				count++;
			}
			if(count>=num)
			{
				num=count;
			}
		}
	}
	cout<<num;
	
}