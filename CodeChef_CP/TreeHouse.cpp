/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 10/05/2021
*/
#pragma GCC optimize("Ofast","unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define ll long long
#define vfor0(i,vec) for(ll int i=0;i<(int)(vec.size());i++)
#define vfor1(j,vec) for(ll int j=1;j<(int)(vec.size());j++)
#define for0(j,n) for(int j=0;j<(int)(n);j++)
#define for1(j,n) for(long long int j=1;j<(long long int)(n);j++)
#define all(x) (x).begin(), (x).end() //forward traversal
#define rall(x) rbegin(x), rend(x)//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define pb push_back
#define eb emplace_back
#define testcases long long int asdflkj; cin>>asdflkj; while(asdflkj--)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define jabtak(t) while(t)  
#define ld long double 
#define ull unsigned long long 
#define pii pair<ll int,ll int>
//#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll formax = 1e18;
const ll formin = -1e18;
const ll int MAXI=3e5+5;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------
// mt19937_64 range(chrono::steady_clock::now().time_since_epoch().count());
// inline ll int comp(ll int p,ll int q)
// {
//     if(p>q)
//         {
//             ll int temp=p;
//             p=q;
//             q=temp;
//         }
//     return (ll int)(range()%(uint64_t)(1+q-p)+p);
// }
// template<typename T1,typename T2>
// ostream &operator<<(ostream &os, pair<T1,T2> par)
// {
//     os<<"("<<par.first<<","<<par.second<<")";
//     return os;
// }
// template <typename T>
// ostream &operator<<(ostream &os,vector<ll int> vec)
// {
//     vfor0(i,vec)
//     {
//         if(i)
//             os<<" ";
//     }
//     return os;
// }
vector<ll int> adj_li[MAXI],subval,val;
vector<pair<ll int,ll int>> pi;

void cook(ll int curr,ll int last=-1) 
{
    for(auto x:adj_li[curr])
    {
        if(x==last)
            continue;
        cook(x,curr);
    }
    pi.clear();
    for(auto x:adj_li[curr])
    {
      if(x!=last)
        pi.eb(subval[x],x);  
    }
    sort(rall(pi));

    ll int look=1;
    for(auto [_val, id] : pi)
        val[id]=look++;
    for(auto x:adj_li[curr])
    {
        if(x!=last)
            subval[curr] += val[x] * subval[x];
    }
}


void chef()
{
    ll int N,X;    
    cin>>N>>X;
    subval.assign(N,1),val.assign(N,0);
    for(ll int i=0;i<N;++i)
        vector<ll int>().swap(adj_li[i]);
    for(ll int i=0;i<N-1;++i)
    {
        ll int u,v;
        cin>>u>>v;
        --u; 
        --v;
        adj_li[u].eb(v),adj_li[v].eb(u);
    }
    cook(0);
    cout<<subval[0]%MOD * X%MOD<<endl;
}

//------------------------------------
void helper()
{ testcases { chef();}}
// {
//     auto start = system_clock::now();
//         testcases { chef();}
//         auto stop = system_clock::now();
//         duration<double> duration = (stop - start);
//         cerr << "\nTime: "<< fixed << setprecision(10) << (double)duration.count() <<"sec"<< endl;
// }

//------------------------------------

int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//memory();
helper();
return 0;
}
