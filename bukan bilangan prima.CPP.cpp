#include <iostream.h>
#include <conio.h>
int main(){
int x,y;
cout<<"masukan sebuah bilangan: ";cin>>x;
y=0;
for(int i=1;i<=x;i++)
if(x%i==0)
y++;
if(y==2)
cout<<x<<" =>bilangan prima "<<endl;
else
cout<<x<<" =>bukan bilangan prima"<<endl;
getch ();
}

