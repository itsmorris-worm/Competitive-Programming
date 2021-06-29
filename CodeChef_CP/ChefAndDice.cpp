/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 02/04/2021
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
#define testcases int asdflkj; cin>>asdflkj; while(asdflkj--)
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
//------------------------------------

void chef()
{
ll int N;
cin>>N;
//4(a)+b=N+
ll a=N/4, b= N%4, res=0;
if(N==1)
    res=21-1; //(2+3+4+5+6)
else if(N==2)
    res=2*20-(2*2); //36
else if(N==3)
    res=2*20-(2*2)-1-2+(3+4+5+6); //51
else if(N>=4)
    {
        if(b==0)
        {
            res= 4*(6+5)*a; //side view-stacked
            res+=4*4; //top view
        }
        else if(b==1)
        {
            res= 4*(6+5)*a; //side view-stacked
            res+=3*4; //top view
            res+=20;
        }
        else if(b==2)
        {
            res= 4*(6+5)*a; //side view-stacked
            res+=2*4; //top view
            res+=36;
        }
        else if(b==3)
        {
            res= 4*(6+5)*a; //side view-stacked
            res+=1*4; //top view
            res+=51;
        }
    }
cout<<res<<endl;
}

//------------------------------------
void helper()
// {chef();}
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
