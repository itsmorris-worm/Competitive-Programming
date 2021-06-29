/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 09/03/2021
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

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------

ll int isxor(ll int i,ll int j, vector<ll int> A)
{
    ll int ret=0,t_or=0,t_and=(~0);
    if(i==j)
       {return ret; }
    else
    {
        for(ll int k=i;k<=j;k++)
        {
            t_or = (t_or | A[k]);
            t_and = (t_and & A[k]);
        }
        ll int ret=t_or^t_and;
      return ret;
    }
}

void chef()
{
   ll int n,count=0,count1=0,maxi;
   cin>>n;
   vector<ll int> A(n+1);//original vector
   for0(i,n)
   {cin>>A[i];}

    ll temp=((n*(n-1))/2);
    for0(j,n)
    {
        
        if(A[j]==A[j+1])
            {count++;}
        else
            {
                count++;
                temp=temp-((count*(count-1))/2);
                count=0;
            }
    }
   for(ll int i=0;i<n;i++)
   {
       for(ll int j=i;j<n;j++)
       {
           ll int temp=isxor(i,j,A);
           maxi=*max_element((A.begin()+i),(A.begin()+j+1));
           if(temp>=maxi)
            {count1++;}
       }
   }
    cout<<min(count,count1)<<endl;
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
//input done
//    vector<int> A1(n+1);//xor vector
//    A1=A;//making a duplicate of A
//    A1[0]=0;
//    for1(i,(n+1))
//    {A1[i]=(A1[i-1]^A1[i]);}
//memory to store consecutiv xor's done