#include<iostream>

#include<string>

using namespace std;

int main(void)

{

   string p;

   char temp;

   cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º" << endl;

   cin >> p;

   for (int i = 0; i < p.size()/2; i++)

   {

      temp = p[i];

      p[i] = p[p.size() - i - 1];

      p[p.size() - i - 1]=temp;

   }

   cout << p << endl;

   return 0;

}