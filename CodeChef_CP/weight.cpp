/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 30/04/2021
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

void chef()
{
    ll int N,W,Wr,temp1,temp2;
    cin>>N>>W>>Wr;
    vector<ll int> pq;
    for(int i=0;i<N;i++)
    {
        ll int input;
        cin>>input;
        pq.pb(input);
    }
    sort(all(pq));
    if(Wr>=W)
    {
        cout<<"YES"<<endl; return;
    }
    ll int diff=(W-Wr);
    for(int i=0;i<sz(pq)-1;i++)
    {
        temp1=pq[i];
        temp2=pq[i+1];
        if(temp1==temp2)
            {
                diff-=(temp1+temp2); i++;
            }
        if(diff<=0)
            break;  
    }
    if(diff<=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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
