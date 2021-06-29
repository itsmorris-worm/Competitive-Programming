/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 14/05/2021
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
//#define vector <ll int> vll
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
vector<ll int> memory1,memory2;
vector<vector<ll int>> vec;

void cook(ll int curr,ll int last) 
{
    ll int sum=1,cnt=1;
    memory1[curr]=(5-4);
    memory2[curr]=memory1[curr];
    sum--;
    cnt--;
    for(ll int i=0;i<vec[curr].size();i++)
    {
        ll int node=vec[curr][i];
        if(!(node!=last))
            continue;
        else
        {
            cook(node,curr);
            memory1[curr]=(memory1[curr]+(2*memory1[node]%MOD))%MOD;
            cnt=cnt+1;
            memory2[curr]=(memory2[curr] + memory2[node])%MOD;
            memory2[curr]=(memory2[curr] + memory1[node])%MOD;
            sum=sum+memory1[node];
        }
    }
    for(ll int i=0;i<vec[curr].size();i++)
    {
        ll int node=vec[curr][i];
        if(!(node!=last))
            continue;
        else
            memory2[curr]=(memory2[curr] + (memory1[node]*((sum-memory1[node])+MOD)%MOD)%MOD)%MOD;
    }
}


void chef()
{
    ll int res=0,N;
    cin>>N;
    vec.clear(); vec.resize(N+1);
    memory1.clear(); memory2.clear();
    memory1.resize(N+1); memory2.resize(N+1);
    for(ll int i=1;i<N;i++)
    {
        ll int L,R;
        cin>>L>>R;
        vec[L].pb(R);
        vec[R].pb(L);
    }
    cook(1,1);
    res=memory2[1]%MOD;
    cout<<res<<endl;
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
