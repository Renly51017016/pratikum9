#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

double getradius();
double square (double);

int main()
{
        const double pi = 3.14159;
    double rad;
 //cout << fixed << shovpoint << setprecision(2);
   cout << "program ini untuk menghitung luas lingkaran.\n";
   rad = getradius();
   cout << " luasnya adalah : "<< pi * square(rad) << endl;
   getch();
   return 0 ;
  }

  double getradius()
  {

          double radius;
          cout << "masukan jari jari lingkaran: ";
          cin >> radius;
          return radius;
  }

  double square (double number)
  {
  return number * number;
  }
