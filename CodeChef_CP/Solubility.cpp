/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 12/05/2021
*/
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define ll long long 
#define ld long double 
#define ull unsigned long long
#define vfor0(i,vec) for(ll int i=0;i<(ll int)(n.size());i++)
#define vfor1(j,vec) for(ll int j=1;j<(ll int)(n.size());j++)
#define for0(j,n) for(ll int j=0;j<(ll int)(n);j++)
#define for1(j,n) for(ll int j=1;j<(ll int)(n);j++)
#define for2(j,n) for(ll int j=2;j<(ll int)(n);j++)
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
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll int N1=2e6+5;
const ll int N2=2e6;
const ll formax = 1e18;
const ll formin = -1e18;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------

void chef() //4 7 12 19 28 39 52
{
 ll int X,A,B;
 cin>>X>>A>>B;
 cout<<(((100-X)*B + A)*10)<<endl;
}

//------------------------------------
void helper()
{  testcases{chef();}   }
// {
//     auto start = system_clock::now();
//         testcases { chef(res);}
//         auto stop = system_clock::now();
//         duration<double> duration = (stop - start);
//         cerr << "\nTime: "<< fixed << setprecision(10) << (double)duration.count() <<"sec"<< endl;
// }
//}

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







