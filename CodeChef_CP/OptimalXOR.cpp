/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 11/06/2021
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

// void subset(vector<ll int> A,ll int k,ll int start,ll int currLen, vector<bool> used,vector<vector<ll int>> &store) {

// 		if (currLen == k) {
//             vector<ll int> v;
//             if(k==1)
//                 {
//                     v.pb(A.size());
//                     v.pb(A.size());
//                     store.pb(v);
//                     return;
//                 }
//             ll int xore=0;
// 			for (int i = 0; i < A.size(); i++) {
// 				if (used[i] == true) {
//                     v.pb(A[i]);
//                     xore=xore^A[i];
// 				}
// 			}
//             if(floor(log2(xore+1))==ceil(log2(xore+1)))
//                 {
//                     v.pb(xore);
//                     store.pb(v);
//                 }
// 			return;
// 		}
// 		if (start == A.size()) {
// 			return;
// 		}
// 		used[start] = true;
// 		subset(A, k, start + 1, currLen + 1, used,store);
// 		used[start] = false;
// 		subset(A, k, start + 1, currLen, used,store);
// }

void subset(ll int &N,ll int &K,vector<vector<ll int>> &store)
{
    vector<ll int> vi;
    if(K==1)
    {
    vi.pb(N);
    vi.pb(N);
    store.pb(vi);
    return;
    }
    vector<ll int> vec;
    for(int i=1;i<=N;i++)
        vec.pb(i);
    for(ll int bitmask=0;bitmask<(1<<N);bitmask++)
    {
        vector<ll int> v;
        for(ll int p=0;p<N;p++)
        {
            if(bitmask & (1<<p))
                v.pb(vec[p]);       
        }
        if(v.size()==K)
        {
            ll int xore=0;
            for(int i=0;i<K;i++)
                xore=xore^v[i];
            if(floor(log2(xore+1))==ceil(log2(xore+1)))
            {
                v.pb(xore);
                store.pb(v);
            }
        } 
    } 
}
void chef()
{
 ll int N,K;
 cin>>N>>K;
 
 vector<vector<ll int>> store;
//  vector<bool> B(N);
    // subset(vec,K,0,0,B,store);
    subset(N,K,store);
ll int maxi=INT64_MIN,track=-1;
// for(int i=0;i<store.size();i++)
// {
//     for(int j=0;j<store[i].size();j++)
//     {
//         cout<<store[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(int i=0;i<store.size();i++)
{
    if(store[i][store[i].size()-1]>maxi)
       { maxi=store[i][store[i].size()-1]; track=i;}
}
for (int i=0;i<store[track].size()-1;i++) {
	cout <<store[track][i]<< " ";
	}
    cout<<endl;
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
