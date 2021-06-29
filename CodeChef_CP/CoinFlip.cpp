/*Author: itsmorris_worm/Chandan Sharma
DOB: 01/03/2021 15:22
*/
#include<bits/stdc++.h>
using namespace std;

void chotaHatthi()
{
    int i,n,q;
    cin>>i>>n>>q;
    if(q==i)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<(n+1)/2<<endl; 
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

    int t,g;
    cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--)
        {
            chotaHatthi();//worst: 20000
        }
    }
    return 0;
}