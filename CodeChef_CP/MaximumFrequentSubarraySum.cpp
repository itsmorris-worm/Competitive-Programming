/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 4/06/2021
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

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------
void gsubset(vector<ll int> vec,unordered_map<vector,int> &mp)
{
    ll int count=pow(2,n);
    for(int i=0;i<count;i++)
    {
        vector<ll int> v;
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
                v.pb(vec[i]);
        }
        mp[v]++;
    }
}

bool comp(pair<vector,int> a, pair<vector,int> b) {
    return a.second > b.second;
}

void chef()
{
   ll int n;
   cin>>n;
   vecyot<ll int> vec;
   for(int i=0;i<n;i++)
   {
       int input;
       cin>>input;
       vec.pb(input);
   }
   unordered_map<vector,int> mp;
   gsubset(vec,mp);
    for(auto it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    // sort(mp.begin(),mp.end(),comp);
    // auto it=mp.begin();
    // string str=it->first;
    // int freq=it->second;
    // int sum=0;
    // for(int i=0;i<str.size();i++)
    // {
    //     sum+=stoi(str[i]);
    // }
    // cout<<(sum*freq)<<endl;
}

//------------------------------------
void helper()
{ testcases { chef();}}
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
