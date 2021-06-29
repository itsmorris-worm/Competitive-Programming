/* 
Author: itsmorris_worm/Chandan Sharma
DOB:23/02/21 19:38pm
*/
#include<bits/stdc++.h>
using namespace std;

void lapin_bhaiya()
{
   string s;
   cin>>s;
   int count=0,length=s.size();
   vector<int> front(26,0);
   vector<int> back(26,0);
   for(int i=0;i<length/2;i++)
   {
     int alphabet=s[i]-'a';
     front[alphabet]+=1;
   }      
   for(int j=(length+1)/2;j<length;j++)
   {
     int alphabet=s[j]-'a';
     back[alphabet]+=1;
   }
   for(int n=0;n<26;n++)
   {
     if(front[n]!=back[n])
     count++;
   }
   if(count==0)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
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

    int t;
    cin>>t;
    while(t--)
    {
     lapin_bhaiya();
    }
    return 0;
}