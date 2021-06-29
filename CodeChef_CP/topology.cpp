/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 13/03/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define vfor0(i,vec) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,vec) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(ll int j=0;j<(ll int)(n);j++)
#define for1(j,n) for(ll int j=1;j<=(ll int)(n);j++)
#define for2(j,n) for(ll int j=2;j<=(ll int)(n);j++)
#define all(x) (x).begin(), (x).end() //forward traversal
#define rall(x) (x).rbegin(), (x).rend()//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define pb push_back
#define testcases ll int asdflkj; cin>>asdflkj; while(asdflkj--)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define jabtak(t) while(t) 
#define saaf(a) a.clear()
#define r0 return 0
#define r1 return 1 
#define ld long double 
#define ull unsigned long long 
typedef pair<ll int,ll int> pii;
#define pi 3.14159265358979323846264338327950L
const ll int formax = 1e18;
const ll int formin = -1e18;
const ll int MOD = 1000000007;

const ll int limit = (ll int)5e5+5;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------ 
ll int N;
vector<ll int> vecfact(limit+1), vecinvnum(limit+1), vecinvfact(limit+1);

void fact(ll int pp)
{
    vecfact[0]=1;
    for1(i,limit)
    {
        vecfact[i]=(vecfact[i-1]*i)%pp;
    }
}

void invnum(ll int pp)
{
    vecinvnum[0]=1;
    vecinvnum[1]=1;
    for2(i,limit)
    {
        vecinvnum[i]=vecinvnum[pp%i]*(pp-pp/i)%pp;
    }
}

void invfact(ll int pp)
{
    vecinvfact[0]=1;
    vecinvfact[1]=1;
    for2(i,limit)
    {
        vecinvfact[i]=(vecinvnum[i]*vecinvfact[i-1])%pp;
    }
}

int expension(int limit, int R, int pp)
{
    if(R>limit) r0;
    if(R==limit) r1;
    ll int res= ((vecfact[limit]*vecinvfact[R])%pp * vecinvfact[limit-R])%pp;
    return res;
}
//------------------------------------

vector<vector<ll int>> a;
vector<ll int> v,t,sub_tree;
ll int dfs(ll int node)
{
    v[node]=1;
    ll int res=1, s_tree=0;
    for(auto h:a[node])
    {
        if(v[h]==0)
        {
            ll int present=dfs(h);
            s_tree+=present;
            res*=expension(s_tree,present,MOD);
            res%=MOD;
            res*=t[h];
            res%=MOD;
        }
    }
    res%=MOD;
    t[node]=res;
    return s_tree+1;
}

vector<pair<ll int,pii>> A;
ll int getNode(ll int node)
{
    v[node]=1;
    ll int s_tree=0, present1;
    for(auto g:a[node])
    {
        if(v[g]==0)
        {
            present1=getNode(g);
            s_tree+=present1;
            int temp=min(present1,(N-present1));
            A.pb({temp,{g,node}});
        }
    }
    sub_tree[node]=s_tree+1;
    return s_tree+1;
}

//------------------------------------
void helper()
{
    fact(MOD);
    invnum(MOD);
    invfact(MOD);
    testcases
    {
        int K;
        cin>>N>>K;
        int M=N-1;
        saaf(a), saaf(v), saaf(t);
        a.resize(N), v.resize(N,0), t.resize(N);
        jabtak(M--)
        {
            int t1,t2;
            cin>>t1;
            cin>>t2;
            a[t1-1].pb(t2-1);
            a[t2-1].pb(t1-1);
        }
        if(N==1)
        {
            int temp1=0,temp2=0;
            if(K!=1)
            {
                saaf(v),saaf(t);
                v.resize(N,0),t.resize(N);
                dfs(temp2);
                cout<<(temp2+1)<<" "<<t[temp2]%MOD<<endl;
            }
            else
            {
               saaf(v), saaf(t);
                v.resize(N,0), t.resize(N);
                dfs(temp1);
                cout<<(temp1+1)<<" "<<t[temp1]%MOD<<endl;
            }
            continue;
        }
        saaf(A), saaf(sub_tree), sub_tree.resize(N);
        getNode(0);
        ll int index=1;
        sort(all(A),greater<pair<ll int,pii>>());
        ll int temp1,temp2;
        if(A[0].first!=A[1].first)
        {
            ll int temx=A[0].second.first, temy=A[0].second.second;
            if(sub_tree[temx]!=N-sub_tree[temx])
            {
                if(sub_tree[temx] > (N-sub_tree[temx]))
                {
                    temp1=temx;
                    temp2=temy;
                }
                else
                {
                    temp2=temx;
                    temp1=temy;
                }
            }
            else
            {
                temp1=max(temx,temy);
                temp2=min(temx,temy);
            }
        }
        else
        {
            vector<ll int> te;
            if((A[0].second.first==A[1].second.second)||(A[0].second.first==A[1].second.first))
                temp1=A[0].second.first;
            else
                temp1=A[0].second.second;
            index=1;
            te.pb((A[0].second.first!=temp1)?A[0].second.first : A[0].second.second);
            jabtak(index!=N && A[index-1].first==A[index].first)
            {
                te.pb((A[index].second.first!=temp1)?A[index].second.first:A[index].second.second);
                ++index;
            }
            temp2=*max_element(all(te));
        }
            if(K!=1)
            {
                saaf(v), saaf(t);
                v.resize(N,0), t.resize(N);
                dfs(temp2);
                cout<<temp2+1<<" "<<((t[temp2]%MOD) +MOD)%MOD<<endl;
            }
            else
            {
               saaf(v), saaf(t);
                v.resize(N,0), t.resize(N);
                dfs(temp1);
                cout<<temp1+1<<" "<<((t[temp1]%MOD) +MOD)%MOD<<endl; 
            }
    }
}


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
helper();
}
