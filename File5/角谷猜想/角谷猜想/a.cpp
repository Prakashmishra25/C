#include <iostream>

using namespace std;

int main(void)

{

   unsigned int x;

   cout << "������һ����������" << endl;

   cin >> x;

   cout << "������̣� " << endl;

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

        x = x * 3 + 1;// ����д�� x *= 3 + 1;

        cout << x << endl;

        if( x == 1)

        break;

     }

   }

   cout << "��������";

   cout << x << endl;

   return 0;

}