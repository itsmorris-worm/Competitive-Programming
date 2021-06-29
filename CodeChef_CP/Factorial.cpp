/*Author: itsmorris_worm/Chandan Sharma
DOB: 01/03/2021 14:47
*/
#include<bits/stdc++.h>
using namespace std;

void technician_bhaiya()
{
    int n,quo,ans=0;
    cin>>n;
    if(n<5)
    cout<<0<<endl;
    else
    { while(n>=5)
     {
        quo=n/5;
        n=quo;
        ans+=quo;
     }
    cout<<ans<<endl;
    }
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

    int t;
    cin>>t;
    while(t--)
    {
        technician_bhaiya();
    }
    return 0;
}