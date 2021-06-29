#include<bits/stdc++.h>
using namespace std;

void morris(long long int arr[],int n)
{
    long long int sum=0,ans=0;
    sort(arr,arr+n);//log(n)=6(approx)
    for(int i=0;i<n;i++)//itr=1e6(approx)
    {
        sum=arr[i]*(n-i);
        ans=max(ans,sum);
           }
    cout<<ans;
    
}

int main()
{
 //--------------------------------------
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//--------------------------------------

int n;
cin>>n;
long long int arr[n];
for(int i=0;i<n;i++) 
{
    cin>>arr[i];
}
morris(arr,n);
return 0;
}