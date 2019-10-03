#include<iostream.h>
int main()
{
int x,y,z=0;
cin>>x;
while(x!=0)
{
y=x%10;
z=z*10+y;
x=x/10;
}
cout<<"reverse of number is :" <<z;/reverse no
return 1;
}

