#include <iostream>
#include <cmath>

using namespace std;

 

bool fun(int &rx,int &ry)

{

   int a = (int)(sqrt(abs(rx-ry)));

   int b = (int)(sqrt(rx+ry));

   if(abs(rx-ry) == a*a && rx+ry == b*b)

   {

      cout << "x��y����Ȼ����������ƽ����Ϊ�� "  << a <<" �� " << b << endl;

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

   cout << "������������Ȼ��x��y��" << endl;

   cin >> x >> y;

   if(fun(x,y))

   {

      cout << "x��y������Ϊ: "

             << "x = " << x << "   "

             << "y = " << y << endl;

   }else

      cout << "x��y������Ȼ���ԡ�" << endl;

   return 0;

}