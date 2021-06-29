/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 03/03/2021
*/
#include<bits/stdc++.h>
#include<chrono>
#define vfor0(i,n) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,n) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(int i=0;j<(int)(n);j++)
#define vfor1(j,n) for(int j=1;j<(int)(n);j++)
#define all(x) (x).begin(), (x).end() //forward traversal
#define rall(x) (x).rbegin(), (x).rend()//reverse traversal
#define tr(vec,i) for(__typeof__((vec)).begin() i=(vec).begin();i!=(vec).end();i++)//iterator
#define present(vec,x) ((vec).find(x)!=(vec).end())//for set and map(log(n))
#define cpresent(vec,x) (find(all(vec),x)!=(vec).end())//for all containers
#define delete(vec,x) vec.erase(std::remove(vec.begin(), vec.end(), x), vec.end())
#define sz(a) int((a).size())
#define endl "\n"
#define jabtak(t) while(t) 
#define lint long long //1e18
#define ldouble long double //1e4932
#define uint unsigned long long //1e19
#define pi 3.14159265358979323846264338327950L
const int MOD=1e9+7;
const int inf = 1e18;
using namespace std;
using namespace std::chrono;
bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------

void alpha()
{
 int a=9,b=7;
 cout<<add(a,b)<<endl;
}

int main()
{
//------------------------------------
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//------------------------------------
 int t=2;
    //cin >> t;
    jabtak(t--){
        auto start = system_clock::now();
        alpha();
        auto stop = system_clock::now();
        duration<double> duration = (stop - start);
        cerr << "\nTime: "<< fixed << setprecision(10) << (double)duration.count() <<"sec"<< endl;
    }
return 0;
}
