/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 06/04/2021
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
//------------------------------------

void chef()
{

ll int N,M,K,res=0;
cin>>N>>M>>K;
ll int vec[N+1][M+1];
for(int i=0;i<=N;i++)
{
    for(int j=0;j<=M;j++)
    {
        if(i==0 || j==0)
            vec[i][j]=0;
        else
            cin>>vec[i][j];
    }
}
//-------------------------------------------------
for(int i=0;i<=N;i++)
{
    ll int sum=0;
    for(int j=0;j<=M;j++)
    {
        sum+=vec[i][j];
        vec[i][j]=sum;
    }
}
for(int i=0;i<=M;i++)
{
    ll int sum=0;
    for(int j=0;j<=N;j++)
    {
        sum+=vec[j][i];
        vec[j][i]=sum;
    }
}
// for(int i=0;i<=N;i++)
// {
//     for(int j=0;j<=M;j++)
//     {
//         cout<<vec[i][j]<<" ";
//     }
//     cout<<endl;
// }

//-------------------------------------------------
ll int min_order=min(N,M);
for(int order=1;order<=min_order;order++)
{
    int i_row=order, j_col=M;
    for(int i_row=order;i_row<=N;i_row++)
    {
        ll int x_dir=i_row-order+1;
        ll int y_dir=j_col-order+1;
        ll int z= vec[i_row][j_col]-vec[x_dir-1][j_col]-vec[i_row][y_dir-1]+vec[x_dir-1][y_dir-1];
        if((z/(order*order))<K)
            continue;
        else
            {
                ll int start=order,end=M,ans=-1;
                while(start<=end){
                    ll int mid= start+(end-start)/2;
                    x_dir=i_row-order+1;
                    y_dir=mid-order+1;
                    ll int z= vec[i_row][mid]-vec[x_dir-1][mid]-vec[i_row][y_dir-1]+vec[x_dir-1][y_dir-1];
                    if((z/(order*order))<K)
                        start=mid+1;
                    else
                        {
                            ans=mid;
                            end=mid-1;
                        }
                }
            res+=(M-ans+1);
            }
    }
}
cout<<res<<endl; 
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
