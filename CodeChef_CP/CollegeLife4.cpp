/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 11/03/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define vfor0(i,vec) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,vec) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(int j=0;j<(int)(n);j++)
#define for1(j,n) for(int j=1;j<(int)(n);j++)
#define all(x) (x).begin(), (x).end() //forward traversal
#define rall(x) (x).rbegin(), (x).rend()//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define pb push_back
#define testcases long long int asdflkj; cin>>asdflkj; while(asdflkj--)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define jabtak(t) while(t) 
#define ll long long 
#define ld long double 
#define ull unsigned long long 
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll formax = 1e18;
const ll formin = -1e18;

// bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
// int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
// int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
ll int min(ll int a,ll int b) {if(a<b){return a;} else{return b;}}
ll int max(ll int a,ll int b) {if(a>b){return a;} else{return b;}}
//------------------------------------


ll int chef(ll int n,ll int e,ll int h,ll int a,ll int b,ll int c)
{
    ll quant_max=min(e,h),abc=0,ans=INT64_MAX;

    while(abc<=quant_max)
    {
        ll egg,choco,value=0;
        if(abc<n)
        {
            value=value+(abc*c);
            choco=h-abc;
            egg=e-abc;
            if(a>b)
            {
                ll negg=egg/2;
                ll nchoco=choco/3;
                if(nchoco<(n-abc))
                {    
                    value=value+nchoco*b;
                    if(nchoco+negg+abc>=n)
                        value=value+(n-abc-nchoco)*a;
                    else
                        value=INT64_MAX;
                }
                else
                    value=value+(n-abc)*b;
            }
            else
            {
                ll nchoco=choco/3;
                ll negg=egg/2;
                if(negg>=(n-abc))
                    value=value+(n-abc)*a;
                else
                    {
                        value=value+negg*a;
                        if(nchoco+negg+abc>=n)
                            value=value+(n-abc-negg)*b;
                        else
                            value=INT64_MAX;
                           
                    }
            }
        }
        else if(abc>n)
            break;
        else
            value=value+(abc*c);
        if(value<ans)
            ans=value;
    abc++;
    }
    //cout<<ans<<endl;
    if(ans==INT64_MAX)
        return -1;
    else
        return ans;
    
}

//------------------------------------
void helper()
// {chef();}
{ testcases{
        ll int n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        cout<<chef(n,e,h,a,b,c)<<endl;
}}
//------------------------------------

int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout); 
#endif
helper();
return 0;
}