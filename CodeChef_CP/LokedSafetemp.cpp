/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 14/03/2021
*/
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

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
#define bitscount 60
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
const ll formax = 1e18;
const ll formin = -1e18;

bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------

ll int prefix_count[bitscount][1000000];

void combinationUtil(ll int arr[],ll int n,ll int r,ll int index,ll int data[],ll int i,ll int A[],ll int& c1);

void findPrefixCount(ll int arr[],ll int n) 
{ 
  
    // Loop for each bit 
    for (ll int i = 0; i < bitscount; i++) { 
        // Loop to find prefix count 
        prefix_count[i][0] = ((arr[0] >> i) & 1); 
        for (ll int j = 1; j < n; j++) { 
            prefix_count[i][j] = ((arr[j] >> i) & 1); 
            prefix_count[i][j] += prefix_count[i][j - 1]; 
        } 
    } 
}

// Function to answer query 
ll int rangeOr(ll int l,ll int r) 
{ 
  
    // To store the answer 
    ll int ans = 0; 
  
    // Loop for each bit 
    for (ll int i = 0; i < bitscount; i++) { 
        // To store the number of variables 
        // with ith bit set 
        ll int x; 
        if (l == 0) 
            x = prefix_count[i][r]; 
        else
            x = prefix_count[i][r] 
                - prefix_count[i][l - 1]; 
  
        // Condition for ith bit 
        // of answer to be set 
        if (x != 0) 
            ans = (ans | (1 << i)); 
    } 
  
    return ans; 
}

// Function to answer query 
ll int rangeAnd(ll int l,ll int r) 
{ 
  
    // To store the answer 
    ll int ans = 0; 
  
    // Loop for each bit 
    for (ll int i = 0; i < bitscount; i++) { 
        // To store the number of variables 
        // with ith bit set 
        ll int x; 
        if (l == 0) 
            x = prefix_count[i][r]; 
        else
            x = prefix_count[i][r] 
                - prefix_count[i][l - 1]; 
  
        // Condition for ith bit 
        // of answer to be set 
        if (x == r - l + 1) 
            ans = (ans | (1 << i)); 
    } 
  
    return ans; 
}


void printCombination(ll int arr[],ll  int n,ll int r,ll int A[],ll int& c1)
{
    ll int data[r];

    combinationUtil(arr, n, r, 0, data, 0,A,c1);
}
 
void  combinationUtil(ll int arr[],ll int n,ll int r,ll int index,ll int data[],ll int i,ll int A[],ll int& c1)
{
    if (index == r) {
        ll int maxi;
      ll int t_or=rangeOr(data[0],data[1]); //O(1)
           ll int t_and=rangeAnd(data[0],data[1]); //O(1)
           ll int temp=(t_or^t_and);
    
       maxi=*max_element(A+(data[0]),A+(data[1])+1);
       if(temp>=maxi)
            {c1++;} 
        return;
    }
 
    if (i >= n)
        return;
 
    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1,A,c1);
 
    combinationUtil(arr, n, r, index, data, i + 1,A,c1);
}


void chef()
{
    
    ll int n,c1=0;
    cin>>n;
    ll int A[n];
    for0(i,n)
    {cin>>A[i];}
    findPrefixCount(A,n);

    ll int arr[n];
    for0(i,n)//make the array of index B[n]
     {arr[i]=i;}

    printCombination(arr,n,2,A,c1);

    cout<<(c1+count(A,A+n,0))<<endl;
}

//------------------------------------
void helper()
// {chef();}
{ testcases {
   // auto start = system_clock::now();
     chef();
    // auto stop = system_clock::now();
       // duration<double> duration = (stop - start);
       // cerr << "\nTime: "<< fixed << setprecision(10) << (double)duration.count() <<"sec"<< endl;
     }}
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