/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 10/06/2021
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
#define vpi vector<pair<ll int,ll int>>
#define msi multiset<ll int>
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
void chef()
{
   ll int N;
   cin>>N;
   vpi x_co,y_co;
   msi X_co,Y_co;
   for(int i=0;i<N;i++)
   {
       ll int input1,input2;       
       cin>>input1>>input2;
       x_co.push_back({input1,input2});
       y_co.push_back({input2,input1});
       X_co.insert(input1);
       Y_co.insert(input2);
   }
   ll int h1=0,h2=0,mxh=0,mih=INT64_MAX,ar=INT64_MAX;
   sort(all(x_co)); sort(all(y_co));
   for0(i,N-1)
   {
       mih=min(mih,x_co[i].second);
       mxh=max(mxh,x_co[i].second);
       h1= mxh-mih;
       auto it=Y_co.find(x_co[i].second);
       Y_co.erase(it);
       h2=*(Y_co.rbegin())-(*Y_co.begin());
       ll int n_ar=(x_co[i].first-x_co[0].first)*h1 + (x_co[N-1].first-x_co[i+1].first)*h2;
       ar=min(ar,n_ar);  
   }
   ll int w1=0,w2=0,mxw=0,miw=INT64_MAX;
   for0(i,N-1)
   {
       miw=min(miw,y_co[i].second);
       mxw=max(mxw,y_co[i].second);
       w1=mxw-miw;
       auto it=X_co.find(y_co[i].second);
       X_co.erase(it);
       w2=*(X_co.rbegin())-(*X_co.begin());
       ll int n_ar=(y_co[i].first-y_co[0].first)*w1 + (y_co[N-1].first-y_co[i+1].first)*w2;
       ar=min(ar,n_ar);  
   }
    if(ar==INT64_MAX)
        ar=0;
    cout<<ar<<endl;
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
