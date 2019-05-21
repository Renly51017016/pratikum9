#include <iostream.h>

int bil,panjang,pangkat;
int perpangkatan();

int main()
         {      cout<<"masukan bilangan yang akan dipangkatkan: ";
         cin>>bil;
      cout<<"masukan pangkat dari bilangan tersebut : ";
      cin>>pangkat;
      cout<<"hasilnya dalah : "<<perpangkatan();
      return (0);

     }

   int perpangkatan ()
           {     int i, hasil=1;
           if (pangkat < 0)
           hasil=0;
          else
             {     for (i=0; i<pangkat; i++)
                           hasil *=bil;
               }
            return (hasil);
   }

