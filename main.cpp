/* Программа, в которой создается массив и заполняелся след. образом:
❤️ элементы с четными индексами значением получают индекс,
элементы с нечетными индексами значением получают квадрат индекса:
0, 1^2, 2, 3^2, 4, 5^2, 6, 7^2 и т.д. ❤️ */
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int colichectvo;
    cout << "Vvedite colichectvo chisel ";
    cin >> colichectvo;
    int massiv [ colichectvo];
   /* for ( int n = 0; n < colichectvo; n +=2)
    {
      massiv [n] = n;
    }
    for ( int k = 1; k < colichectvo; k +=2)
    {
        massiv [k] = pow ( k,2);
    }
    for ( int i = 0; i < colichectvo; i ++)
    {
        cout << massiv [i] << endl;
    } */
    for ( int n = 0; n < colichectvo; n++)
    {
      if ( n % 2 == 0 )
      {
          massiv [n] = n;
      }
      else
       {
         massiv [n] = pow (n,2);
       }
    }
    for ( int i = 0; i < colichectvo; i ++)
    {
        cout << massiv [i] << endl;
    }
}
