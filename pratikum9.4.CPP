#include <iostream.h>
#include <conio.h.>
#include <iomanip.h>

int panjang, lebar;

void input();

void luas()
{
        int ls;
   ls = panjang * lebar;
   cout<<"luasnya adalah : "<<ls;
}

void keliling()
{
         int kl;
    kl = (2*panjang)+ (2*lebar);
    cout<<"kelilingnya adalah : "<<kl;
}

void diagonal()
{
          float dg;
     dg =((panjang*panjang)+(lebar*lebar));
     cout<<"diagonalnya adalah : "<<dg;
}

void main()
{
           int pilih;
   do

           {
           clrscr();
           cout<<"pilihlah ------> " <<endl;
           cout<<"1. luas persegi panjang \n";
           cout<<"2. keliling persegi pnajang \n";
           cout<<"3. diagonal persegi panjang \n";
           cout<<"4. selesai \n";
           cout<<"masukan pilihan anda : ";
           cin>>pilih;

           if (pilih =4)
                          input ();
           switch (pilih)
           {
              case 1 : luas();
                                   break;
              case 2 : keliling();
                                   break;
              case 3 : diagonal();
                                   break;
              case 4 : cout<<"terimah kasih ..!";
           }
           getch();
        }  while (pilih !=4);
     }


  void input ()
  {


            cout<<"masukan nilai panjang : ";
       cin>>panjang;
       cout<<"masukan nilai lebar : ";
       cin>>lebar;
       return;
   }