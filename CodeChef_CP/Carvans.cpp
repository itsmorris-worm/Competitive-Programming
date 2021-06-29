#include <iostream>
#include <math.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t-->0)
{
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
int c=1;
int mx=a[0];
for(i=1;i<n;i++)
{
    if(a[i]<=mx)
    {
    c++;
    mx=a[i];
    }
}
cout<<c<<endl;
}
return 0;
}
	

