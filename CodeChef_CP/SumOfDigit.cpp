#include<bits/stdc++.h>
using namespace std;

void joro()
{
    int sum=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        sum+=int((s[i])-48);
    }
    cout<<sum<<endl;
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
     joro();
    }
    return 0;
}