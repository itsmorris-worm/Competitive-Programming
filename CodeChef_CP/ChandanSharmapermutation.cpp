
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
void StoringSubset_Permute(string str, int start, int end, set<string> &ans)
{
    //Base case 
    if(start==end)
        ans.insert(str); 
    else
    {
        //Generating permutaions
        for(int i=start;i<=end;i++)
        {
            //swapping
            swap(str[start],str[i]);
            //Recursion called
            StoringSubset_Permute(str,start+1,end,ans);
            //Backtracking
            swap(str[start],str[i]);
        }
    }
}
//Function to generate and store all subsets.
//This function takes four parameters
//1.string to store input string
//2.vector of string to store susbsets
//3. Index in current subset, curr
//4. Store current subset
void allsubset(string str,vector<string> &vec,ll int idx=0,string curr="")
{
    ll int n=str.size();
    //Base case
    if(idx==n)
    {
        vec.pb(curr);
        return;
    }
    //two case for every character
    //conside character as part of current subset
    //Do not consider character as part of current subset
    allsubset(str,vec,idx+1,curr+str[idx]);
    allsubset(str,vec,idx+1,curr);
}
//Drive code
int main()
{
    string str="abc";
    vector<string> vec;
    set<string> ans;
    allsubset(str,vec);
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]!="")
            {
                ll int n=vec[i].size();
                StoringSubset_Permute(vec[i],0,n-1,ans);
            }
                
    }
    for(auto i=ans.begin();i!=ans.end();i++)
    {
        cout<<(*i)<<endl;
    }
    return 0;
}
// void chef()
// {
//     string str;
//     cin>>str;
//     vector<string> vec;
//     set<string> ans;
//     subset(str,vec);
//     for(int i=0;i<vec.size();i++)
//     {
//             if(vec[i]!="")
//                {ll int n=vec[i].size(); StoringSubset_Permute(vec[i],0,n-1,ans);}
                
//     }
//     //sort(ans.begin(),ans.end());
//     for(auto i=ans.begin();i!=ans.end();i++)
//     {
//         cout<<(*i)<<endl;
//     }
//     cout<<endl;
// }
//------------------------------------
// void helper()
// { testcases { chef();}}
// //------------------------------------

// int main()
// {
// IOS;
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
// helper();
// return 0;
// }
