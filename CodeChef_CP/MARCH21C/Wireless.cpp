/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 13/03/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define vfor0(i,vec) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,vec) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(int j=0;j<(int)(n);j++)
#define for1(j,n) for(int j=1;j<=(int)(n);j++)
#define for2(j,n) for(int j=2;j<=(int)(n);j++)
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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define jabtak(t) while(t) 
#define ll long long 
#define ld long double 
#define ull unsigned long long 
typedef pair<int,int> pii;
#define pi 3.14159265358979323846264338327950L
const ll int formax = 1e18;
const ll int formin = -1e18;
const int limit = 1000001;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------ 

//------------------------------------
void helper()
{
     int n,m;
    cin>>n>>m;
    vector<pii> cities;
    for0(i,n) 
    {
        int x;
        int y;
        cin>>x>>y;
        cities.push_back({x,y});
    }
    vector<pair<pii, pii>> lines;
    for0(i,m) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        lines.pb({{x1,y1},{x2,y2}});
        if(i==0) 
            cout<<(-x1-1)<<" "<<(-y1)<<endl;
        else if(i==1) 
            cout<<(limit-x1)<<" "<<(limit-1-y1)<<endl;
        else 
        {
            int d1 = (limit-x1)*(limit-x1) + (limit-1-y1)*(limit-1-y1);
            int d2 = (-x1-1)*(-x1-1) + (-y1)*(-y1);
            if(d1>=d2) 
                cout<<(-x1-1)<<" "<<(-y1)<<endl;
            else 
                cout<<(limit-x1)<<" "<<(limit-1-y1)<<endl;
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
