#include <bits/stdc++.h>
using namespace std;

void refuse()
{
    string s;
    cin>>s;
    if(s.length()>=2 || s.length()<=100000)
    cout<<count(s.begin(),s.end(),'#')<<endl;
}

int main() {

//--------------------------------------
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//--------------------------------------
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    refuse();
	}
	return 0;
}
