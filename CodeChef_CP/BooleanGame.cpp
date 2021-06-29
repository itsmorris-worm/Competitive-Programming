/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 07/04/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define ll long long
#define vfor0(i,vec) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,vec) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(ll int j=0;j<(ll int)(n);j++)
#define for1(j,n) for(ll int j=1;j<(ll int)(n);j++)
#define efor1(j,n) for(ll int j=1;j<=(ll int)(n);j++)
#define rfor1(j,n) for(ll int j=(ll int)n;j>0;j--)
#define all(x) x.begin(), x.end() //forward traversal
#define rall(x) (x).rbegin(), (x).rend()//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define pb push_back
#define vvpi vector<vector<pair<ll int,ll int>>>
#define vpi vector<pair<ll int,ll int>>
#define testcases long long int asdflkj; cin>>asdflkj; while(asdflkj--)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define jabtak(t) while(t)  
#define ld long double 
#define ull unsigned long long 
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll formax = 1e18;
const ll formin = -1e18;

// bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
// int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
// int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------aim partial
void chef(ll int &N, ll int &M, ll int &K)
{
ll int size=N+1;
vector<ll int> vec(size);
efor1(i,N)
{cin>>vec[i];}
vvpi arr(size);
for0(i,M)
    {
        ll int U,V,D;
        cin>>U>>V>>D;
        arr[U].pb(make_pair(i,D));
        arr[V].pb(make_pair(i,D));
    }
vvpi memory(size);
memory[0].pb(make_pair(0,0));
efor1(i,N)
    {
        vpi temp;
        temp.insert(temp.end(),all(memory[i-1]));
        ll int carry=0;
        ll int now=0;
        set<ll int> bucket;
        rfor1(j,i)
        {
            now=now+vec[j];
            carry=carry^(1LL<<j);
            for(auto worm : arr[j])
                {
                if(bucket.count(worm.first))
                    now=now+worm.second;
                else
                    bucket.insert(worm.first);
                }
            if(j>1)
                {for(auto morris:memory[j-2])
                {
                    temp.pb(make_pair(morris.first+now,carry^morris.second));
                }}
            else
                temp.pb(make_pair(now,carry));
        }
        sort(all(temp));
        reverse(all(temp));
        ll int dig=0;
        set<ll int> set1;
        for(ll int j=0;j<sz(temp) && dig<K;j++)
        {
            if(set1.count(temp[j].second))
                continue;
            memory[i].pb(temp[j]);
            dig++;
            set1.insert(temp[j].second);
        }

    }
    for0(i,K)
    {
        cout<<memory[N][i].first<<" ";
    }
    cout<<endl;
}

//------------------------------------
void helper()
{ testcases {ll int N,M,K; cin>>N>>M>>K; chef(N,M,K);}}
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
