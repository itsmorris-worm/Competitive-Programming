/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 9/05/2021
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
    ll int ax=0,zero=0,space=0,optionA=0,optionB=0;
    vector<vector<char>> vec;
    for(int i=0;i<3;i++)
    {
        vector<char> temp;
        for(int j=0;j<3;j++)
        {
            char c;
            cin>>c;
            temp.pb(c);
        }
        vec.pb(temp);
        temp.clear();
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(vec[i][j]=='X')
                ax++;
            else if(vec[i][j]=='O')
                zero++;
            else
                space++;
        }
    }
    if(vec[0][0]=='X' && vec[0][1]=='X' && vec[0][2]=='X')
        optionA=1;
    if(vec[0][0]=='X' && vec[1][0]=='X' && vec[2][0]=='X')
        optionA=1;
    if(vec[1][0]=='X' && vec[1][1]=='X' && vec[1][2]=='X')
        optionA=1;
    if(vec[0][1]=='X' && vec[1][1]=='X' && vec[2][1]=='X')
        optionA=1;
    if(vec[2][0]=='X' && vec[2][1]=='X' && vec[2][2]=='X')
        optionA=1;
    if(vec[0][2]=='X' && vec[1][2]=='X' && vec[2][2]=='X')
        optionA=1;
    if(vec[0][2]=='X' && vec[1][1]=='X' && vec[2][0]=='X')
        optionA=1;
    if(vec[0][0]=='X' && vec[1][1]=='X' && vec[2][2]=='X')
        optionA=1;

    if(vec[0][0]=='O' && vec[0][1]=='O' && vec[0][2]=='O')
        optionB=1;
    if(vec[0][0]=='O' && vec[1][0]=='O' && vec[2][0]=='O')
        optionB=1;
    if(vec[1][0]=='O' && vec[1][1]=='O' && vec[1][2]=='O')
        optionB=1;
    if(vec[0][1]=='O' && vec[1][1]=='O' && vec[2][1]=='O')
        optionB=1;
    if(vec[2][0]=='O' && vec[2][1]=='O' && vec[2][2]=='O')
        optionB=1;
    if(vec[0][2]=='O' && vec[1][2]=='O' && vec[2][2]=='O')
        optionB=1;
    if(vec[0][2]=='O' && vec[1][1]=='O' && vec[2][0]=='O')
        optionB=1;
    if(vec[0][0]=='O' && vec[1][1]=='O' && vec[2][2]=='O')
        optionB=1;

    if((optionA==1 && optionB==1) || (ax<zero) || (ax>zero+1))
        cout<<3<<endl;
    else if(ax==0 && zero==0 && space==9)
        cout<<2<<endl;
    else if(optionA==1 && optionB==0 && (ax-zero)>0)
        cout<<1<<endl;
    else if(optionA==0 && optionB==1 && (ax-zero)==0)
        cout<<1<<endl;
    else if(optionA==0 && optionB==0 && space==0)
        cout<<1<<endl;
    else if(optionA==0 && optionB==0 && ax>0)
        cout<<2<<endl;
    else
        cout<<3<<endl; 
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
