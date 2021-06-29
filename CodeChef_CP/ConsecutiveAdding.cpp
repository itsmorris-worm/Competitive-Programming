/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 08/03/2021
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
#define vfor0(i,vec) for(int i=0;i<(int)(n.size());i++)
#define vfor1(j,vec) for(int j=1;j<(int)(n.size());j++)
#define for0(j,n) for(int j=0;j<(int)(n);j++)
#define rfor(j,l,r) for(int j=(int)(l);j>(int)(r);j--)
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
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
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
   int r,c,x;
	cin>>r>>c>>x;
	int A[r][c], B[r][c];
	int sumA=0,sumB=0;
		for0(i,r)
		{
			for0(j,c)
			{
				cin>>A[i][j];
				sumA+=A[i][j];
			}
		}
		for0(i,r)
		{
			for0(j,c)
			{
				cin>>B[i][j];
				sumB+=B[i][j];
			}
		}
		
		if(x==2 && 0)
		{
			int addtemp=0;
			for0(i,r)
			{
				for0(j,c)
				{
					int m1;
					if((r-i+c-j)%2!=0) m1=1;
					else m1=-1;
					if(!(i==r-1 && j==c-1)) addtemp+=m1*(A[i][j]-B[i][j]);
				}
			}
			
			if(A[r-1][c-1]-addtemp!=B[r-1][c-1])
                no;
			else
                yes;
		}
		else
		{
			int diff[r][c];
			for0(i,r)
			{
				for0(j,c)
				{
					diff[i][j]=B[i][j]-A[i][j];
				}
			}
			for0(j,c)
			{
				int ad=0;
				int idxad=r-x;
				jabtak(idxad>=0)
				{
					ad += diff[idxad][j];
					idxad -= x;
				}
				rfor(i,(r-1),(r-x))
				{
					int temp=i-x;
					jabtak(temp>=0)
					{
						diff[i][j] += diff[temp][j];
						temp=temp-x;
					}
					diff[i][j] -= ad;
				}
			}
			rfor(i,(r-1),(r-x))
			{
				int ad=0;
				int idxad=c-x;
				jabtak(idxad>=0)
				{
					ad += diff[i][idxad];
					idxad -= x;
				}
				rfor(j,(c-1),(c-x))
				{
					int temp=j-x;
					jabtak(temp>=0)
					{
						diff[i][j] += diff[i][temp];
						temp=temp-x;
					}
					diff[i][j] -= ad;
				}
			}
			int check=1;
			rfor(i,(r-1),(r-x))
			{
				rfor(j,(c-1),(c-x))
				{
					if(diff[i][j]!=0)
                        check=0;
				}
			}
			if(check)
                yes;
			else
                no;
		}
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
