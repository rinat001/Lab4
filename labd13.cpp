#include <iostream>
using namespace std;
int main() {
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if(x1>0 &&  y1>0 && x2>0 && y2>0)
{
cout<<"YES"<<endl;
return 0;
}
 
if(x1<0 &&  y1>0 && x2<0 && y2>0)
{
cout<<"YES"<<endl;
return 0;
}
 
if(x1<0 &&  y1<0 && x2<0 && y2<0)
{
cout<<"YES"<<endl;
return 0;
}
 
if(x1>0 &&  y1<0 && x2>0 && y2<0)
{
cout<<"YES"<<endl;
return 0;
}
else
cout<<"NO"<<endl;
 
return 0;
}
 