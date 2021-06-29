/*Author: itsmorris_worm/Chandan Sharma
DOB: 01/03/2021 17:29
*/
#include<bits/stdc++.h>
using namespace std;
void ladduChahiye()
{
    int A_no,sum=0;
    string activity_origin;
    cin>>A_no>>activity_origin;
    for(int i=0;i<A_no;i++)
    {
        string option;
        cin>>option;
        if(option=="CONTEST_WON")
        {
            int rank;
            cin>>rank;
            if(rank>20)
            sum+=300;
            else
            sum+=(300+20-rank);
        }
        else if(option=="TOP_CONTRIBUTOR")
        {
            sum+=300;
        }
        else if(option=="BUG_FOUND")
        {
            int severity;
            cin>>severity;
            sum+=severity;
        }
        else if(option=="CONTEST_HOSTED")
        {
            sum+=50;
        }
    }
    
    if(activity_origin=="INDIAN")
    cout<<(sum/200)<<endl;
    else
    cout<<(sum/400)<<endl;
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
        ladduChahiye();
    }
    return 0;
}