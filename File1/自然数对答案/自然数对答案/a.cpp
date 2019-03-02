#include <iostream>
#include <cmath>

using namespace std;

 

bool fun(int &rx,int &ry)

{

   int a = (int)(sqrt(abs(rx-ry)));

   int b = (int)(sqrt(rx+ry));

   if(abs(rx-ry) == a*a && rx+ry == b*b)

   {

      cout << "x和y是自然数对且两个平方数为： "  << a <<" 和 " << b << endl;

      int t = rx;rx = ry;ry = t;

      return true;

   }else

   {

      return false;

   }

}

int main(void)

{

   int x , y;

   cout << "请输入两个自然数x和y：" << endl;

   cin >> x >> y;

   if(fun(x,y))

   {

      cout << "x和y交换后为: "

             << "x = " << x << "   "

             << "y = " << y << endl;

   }else

      cout << "x和y不是自然数对。" << endl;

   return 0;

}