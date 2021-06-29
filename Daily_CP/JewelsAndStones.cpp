/*
Author: itsmorris_worm/Chandan Sharma
DOB: 24/02/21 22:35
*/
#include<bits/stdc++.h>
using namespace std;



void somaDIDI()
{
    int jewel_lwr[26]={0},jewel_upr[26]={0};
    int stone_lwr[26]={0},stone_upr[26]={0};

    string j,s;
    int res;
    res=0;
    cin>>j>>s;//how many characters of s are in j
    for(int i=0;i<j.size();i++)
    {
        if(j[i]>='A' && j[i]<='Z')
        {
            jewel_upr[int(j[i])-65]=1;
        }
        else
            jewel_lwr[int(j[i])-97]=1;
    }
    for(int p=0;p<s.size();p++)  
    {
        if(s[p]>='A' && s[p]<='Z')
        {
            stone_upr[int(s[p])-65]++;
        }
        else
            stone_lwr[int(s[p])-97]++;
    }
    for(int m=0;m<26;m++)
    {
            if(jewel_lwr[m]>0 && stone_lwr[m]>0)
            {
                res=res+max(jewel_lwr[m],stone_lwr[m]);
            }
            if(jewel_upr[m]>0 && stone_upr[m]>0)
            {
                res=res+max(jewel_upr[m],stone_upr[m]);
            }
    }
cout<<res<<endl; 

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
        somaDIDI();
    }
return 0;
}