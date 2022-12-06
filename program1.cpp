#include <iostream>
using namespace std;
int main()

{
int a,b;
float c;
cout<<"enter the value of a&b";
cin>>a>>b;
try
{
if(b!=0)
{

c=a/b;
cout<<"dission="<<c;
}
else
{throw b;
}
}


catch(int i)
{
cout<<"result is in finity b is"<<i;
}
return 0;
}
