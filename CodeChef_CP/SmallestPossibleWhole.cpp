#include<bits/stdc++.h>
using namespace std;

void worm()
{
    long long N,K;
    cin>>N>>K;
    if(N>=K)
    cout<<(N%K)<<endl;
    else
    cout<<N<<endl;
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
  worm();
}
return 0;
}