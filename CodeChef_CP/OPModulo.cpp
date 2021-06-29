/*
Author: itsmorris_worm/Chandan Sharma
DOB:26/02/2021 21:20
*/

#include<bits/stdc++.h>
using namespace std;

void f()
{
    long long int L,R,sum=0,i=1;
    cin>>L>>R;
    while(pow(2,i)<=R)
    {
        if(pow(2,i)>L)
            sum+=2*pow(2,i)-1;//pow+pow-1
        i++;
    }
    cout<<sum;
    
}
int main()
{

//--------------------------------------
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//--------------------------------------

f();
return 0;
}

