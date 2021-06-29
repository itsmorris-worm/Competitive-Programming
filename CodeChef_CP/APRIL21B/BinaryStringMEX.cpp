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
constexpr ll MOD=1e9+7;
constexpr ll formax = 1e18;
constexpr ll formin = -1e18;

int memo0[1000002],memo1[1000002],succ0[1000000],succ1[1000000];

// bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
// int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
// int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------
void chef()
{
    string s;
    cin>>s;
    int temp=-1,i=0;
    while(i<s.length())
    {
        if(s[i]=='0')
        {
            for(int j=temp+1;j<=i;j++)
                succ0[j]=i;
            temp=i;
        }
        i++;
    }
    int v=temp+1;
    while(v<s.length())
    {
        succ0[v]=s.length();
        v++;
    }
    if(succ0[0]==s.length())
        {cout<<"0"<<endl; return;}
    
    temp=-1; int y=0;
    while(y<s.length())
    {
        if(s[y]=='1')
        {
            for(int j=temp+1;j<=y;j++)
                succ1[j]=y;
            temp=y;
        }
        y++;
    }
    int q=temp+1;
    while(q<s.length())
    {
        succ1[q]=s.length();
        q++;
    }

    memo0[s.length()]=memo1[s.length()+1]=memo0[s.length()+1]=memo1[s.length()]=0;
    int ii=(s.length()-1);
    while(ii>=0)
    {
        memo0[ii]=memo0[ii+1];
        if(s[ii]=='0' && succ1[ii]<s.length())
            memo0[ii]=max(memo0[ii],memo0[succ1[ii]+1]+1);
        if(s[ii]=='1' && succ0[ii]<s.length())
            memo0[ii]=max(memo0[ii],memo0[succ0[ii]+1]+1);
        memo1[ii]=memo1[ii+1];
        if(succ1[ii]<s.length())
            memo1[ii]=max(memo1[ii],memo0[succ1[ii]+1]+1);
        ii--;
    }

    int length=memo1[0]+1,cindex=succ1[0]+1;
    string res="1";
    for1(p,length)
    {
        if(cindex>=s.length())
        {
            res.pb('0'); continue;
        }
        if(succ0[cindex]>=s.length())
        {
            res.pb('0');
            cindex=succ0[cindex]+1;
            continue;
        }
        if(memo0[succ0[cindex]+1]<length-p-1)
        {
            res.pb('0');
            cindex=succ0[cindex]+1;
        }
        else
        {
            res.pb('1');
            cindex=succ1[cindex]+1;
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
