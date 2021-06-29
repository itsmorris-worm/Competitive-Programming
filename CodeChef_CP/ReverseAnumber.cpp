#include<bits/stdc++.h>
using namespace std;
//int ar[6]={10,1}

void Reverseit()
{
    int count=0;
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='0')
        {count++;
        cout<<s[i];}
        else if(s[i]=='0')
        {
            if(count==0)
            continue;
            else
            cout<<s[i];
        }
    }
    cout<<endl;
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
     Reverseit();
    }
    return 0;
}