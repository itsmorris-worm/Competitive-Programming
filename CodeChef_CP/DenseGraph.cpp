/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 14/03/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define vfor0(i,vec) for(ll int i=0;i<(ll int)(n.size());i++)
#define vfor1(j,vec) for(ll int j=1;j<(ll int)(n.size());j++)
#define for0(j,n) for(ll int j=0;j<(ll int)(n);j++)
#define for1(j,n) for(ll int j=1;j<(ll int)(n);j++)
#define all(x) (x).begin(), (x).end() //forward traversal
#define rall(x) (x).rbegin(), (x).rend()//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define pb push_back
#define testcases int asdflkj; cin>>asdflkj; while(asdflkj--)
#define endl "\n"
#define empty(m) m.clear()
#define yes cout<<"YES"<<endl
#define c0 cout<<0<<endl
#define c2 cout<<1<<endl
#define no cout<<"NO"<<endl
#define back continue
#define jabtak(t) while(t)  
#define ld long double 
#define ull unsigned long long 
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll formax = 1e18;
const ll formin = -1e18;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------ 
vector<ll int> memory1,memory2;

ll int cook(ll int f,ll int s)
{
    for0(i,sz(memory1))
    {
        if(memory2[i]>=f && memory1[i]<=s)
            return 1;
    }
    return 0;
}
//------------------------------------

void helper(ll int M, ll int X, ll int Y, ll int A[], ll int B[], ll int C[], ll int D[])
{
    ll int res=-1,Z=0;
    ll Way[M]={0};
    vector<ll int> P1,P2;
    P1.pb(X);
    P2.pb(X);
    jabtak((sz(P1)!=0) && (res==-1))
    {
        empty(memory1); empty(memory2);
        memory1=P1; memory2=P2;
        vector<ll int> temp1,temp2;
        for0(i,M)
        {
            if((Way[i]==0) && (cook(A[i],B[i])))
            {
                temp1.pb(C[i]);
                temp2.pb(D[i]);
                if(D[i]>=Y && C[i]<=Y)
                    res=Z+1;
                Way[i]=1;
            }
        }
        P1=temp1; P2=temp2; Z=Z+1;
    }
    cout<<res<<endl;
} 

//------------------------------------
void chef()
{ 
    testcases
    {
        ll N,M,X,Y;
        cin>>N>>M>>X>>Y;
        ll A[M],B[M],C[M],D[M];
        for0(i,M)
        {
            cin>>A[i]>>B[i]>>C[i]>>D[i];
        }
        if(X==Y)
            {c0; back;}
        helper(M,X,Y,A,B,C,D);
    }
}
//------------------------------------
// {chef();}
// { testcases { chef();}}
//------------------------------------

int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
chef();
return 0;
}
