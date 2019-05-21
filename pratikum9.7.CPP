#include <iostream.h>
#include <conio.h>

void tukarab (int a,int b)
{ int temp;
  temp = a;
  a=b;
  b=temp;
  cout<<"dalam fungsi tukarab \n";
  cout<<"nilai a=  "<<a<<"  dan nilai b = "<<b<<endl;
}

int main ()
{
        int a,b;
    cout<<"masukan nilai a: " ;cin>>a;
    cout<<"masukan nilai b: " ;cin>>b;
    cout<<"\n nilai a dab b sebelum masuk fungsi tukarab: \n";
    cout<<"nilai a = "<<a<<" dab b "<<b<<endl<<endl;

    tukarab (a,b);
    cout<<"\nnilai a dan b sesudah keluar fungsi tukarab: \n";
    cout<<"nilai a = "<<a<<" dan b "<<b<<endl<<endl;
    getch();
    return(0);
    }