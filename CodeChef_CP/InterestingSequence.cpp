/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 12/05/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define endl "\n"

inline void chef(vector<int> &memory2)
{
    int sum=memory2.size();
    vector<int> memory1(sum);
    for(int i=0;i<sum;i++)
    {
        memory1[i]=i;
    }
    for(int p=2;p<sum;p++)
    {
        if(memory1[p]!=p)
            continue;
        else
        {
            memory1[p]--;
            for(int i=2*p;i<sum;i+=p)
            {
                memory1[i]=(memory1[i]/p)*(p-1);
            }
        }
    }
    for(int i=1;i<sum;i++)
    {
        memory2[i] += i-1;
        for(int j=2*i;j<sum;j+=i)
        {
            memory2[j] += i*((1+memory1[j/i])/2);
        }
    }

}

int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//-------------------------
int N1,N2,sum=0;
    N1=2e6+2; N2=2e6+3;
    sum=N1+N2;
    vector<int> memory2(sum,0);
    chef(memory2);
    
int t;
cin>>t;
    for(int i=0;i<t;i++)
    {
        int K;
        cin>>K;
        cout<<memory2[2*(2*K +1) - 1]<<endl;
    }

return 0;
}







