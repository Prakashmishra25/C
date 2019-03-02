#include <iostream>

using namespace std;

int main(void)

{

   unsigned int x;

   cout << "请输入一个正整数：" << endl;

   cin >> x;

   cout << "演算过程： " << endl;

   while(1)

   {

     if(x % 2 == 0)  

     {

       cout << x << " "<< "/ 2 = ";

       x = x / 2;

       cout << x << endl;

     if( x == 1)

        break;

     }else

     {

        cout << x << " " << " * 3 + 1 = ";

        x = x * 3 + 1;// 不能写成 x *= 3 + 1;

        cout << x << endl;

        if( x == 1)

        break;

     }

   }

   cout << "计算结果：";

   cout << x << endl;

   return 0;

}