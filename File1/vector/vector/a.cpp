#include<iostream>
/*#include<vector>
using namespace std;
int main(void)
{
	vector<int>vec;
	vec.push_back(2);
	vec.push_back(3);
	vec.pop_back();
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);
	int a;
	a=vec.at(1);
	int b;
	b=vec.size();
	cout<<vec[1]<<endl;

	cout<<b<<endl;

	return 0;*/
	

#include<iostream>
#include<vector>
//#include<priority_queue>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    int temp;
    while(cin >> temp){
        nums.push_back(temp);
    }
    int k = nums[nums.size()-1];
    sort(nums.begin(), nums.end()-2);
    for(int i = 0; i < k; i++){
        cout << nums[i];
        if(i < k-1)
            cout << " ";
    }
    return 0;
    //priority_queue<int> maxHeap(k);
    //for()
}
void binary(int num)
{
    int i;
    for(i=0; i<32; i++)
    {
        printf("%d", ((num<<i)<0) ? 1 : 0);
        if(i%4 == 3)
            printf(" ");
    }
    printf("\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);
    binary(n);

    return 0;
}
