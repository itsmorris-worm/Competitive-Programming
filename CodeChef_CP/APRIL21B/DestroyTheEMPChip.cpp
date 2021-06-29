/* 
" हर-हर महादेव "
Author: Chandan Sharma(itsmorris_worm), India
commit: 09/04/2021
*/
#include<bits/stdc++.h>
using namespace std;
//#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
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
#define ll long long int
#define ld long double 
#define ull unsigned long long 
#define pi 3.14159265358979323846264338327950L
const ll MOD=1e9+7;
ll formax = 1e18;
ll formin = (-1ll)*1e18;
// bool is_integer(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
// int add(int x,int y) {if(y==0) return x; else return add(x^y,(x&y)<<1);}
// int sub(int x,int y) {if(y==0) return x; else return sub(x^y,(~x&y)<<1);}
//------------------------------------aim partial
void chef(ll &Q,ll &D)
{
    string str;
    ll local=1,startX=formin,endX=formax;
    ll startY=startX,endY=endX;
    startX=startX-1; startY=startY-1;
    endX=endX+1; endY=endY+1; 
    jabtak(1)
    {
        if(local==1)
        {
            if(((endX-2)>=startX) && ((endY-2)>=startY))
            {
                ll midy=(endY+startY)/2;
                ll midx=(endX+startX)/2;
                cout<<local<<" "<<midx<<" "<<midy;
                cout<<endl;
                cin>>str;
                if(str.compare("O")==0 || str.compare("FAILED")==0)
                    break;
                if(str[0]=='X')
                    {
                        startX=midx-1;
                        endX=midx+1;
                    }
                else if(str[0]=='P')
                    {
                        if(D==0)
                            endX=midx-1;
                        else
                            {endX=midx; startX--;}
                    }
                else               
                    {
                        if(D==0)
                            startX=midx+1;
                        else
                            {startX=midx; endX++;}
                    }
//-----------------------------------------
                if(str[1]=='Y')
                    {
                        startY=midy-1;
                        endY=midy+1;
                    }
                else if(str[1]=='P')
                    {
                        if(D==0)
                            endY=midy-1;
                        else
                            {endY=midy; startY--;}
                    }
                else    
                    {
                        if(D==0)
                            startY=midy+1;
                        else
                            {startY=midy; endY++;}
                    }
                if(D!=0)
                    {
                        if(((endX-3)<=startX) && ((endY-3)<=startY))
                            local=2;
                    }
                else
                    {}
            } 
            else
            {
                local=2;
                cout<<local<<" "<<startX<<" "<<startY<<" "<<endX<<" "<<endY;
                cout<<endl;
                cin>>str;
                break;
            }
        }   
        else
            {
                if(((endX-3)==startX) && ((endY-3)==startY))
                    {
                        cout<<local<<" "<<startX<<" "<<startY<<" "<<startX+2<<" "<<endY;
                        cout<<endl;
                        cin>>str;
                        if(str.compare("O")==0)
                            break;
                        else if(str.compare("IN")==0)
                            endX=startX+2;
                        else
                            {
                                startX=startX+2;
                                endX++;
                            }
                    }
                if(((endX-2)==startX) && ((endY-3)==startY))
                    {
                        cout<<local<<" "<<startX<<" "<<startY<<" "<<endX<<" "<<startY+2;
                        cout<<endl;
                        cin>>str;
                        if(str.compare("O")==0)
                        {}
                        else if(str.compare("IN")==0)
                            {
                                cout<<local<<" "<<startX<<" "<<startY<<" "<<endX<<" "<<startY+2;
                                cout<<endl;
                                cin>>str;
                            }
                        else
                            {
                                cout<<local<<" "<<startX<<" "<<startY+2<<" "<<endX<<" "<<startY+2+2;
                                cout<<endl;
                                cin>>str;
                            }
                        break;
                    }
                if(((endX-3)==startX) && ((endY-2)==startY))
                    {
                        cout<<local<<" "<<startX<<" "<<startY<<" "<<startX+2<<" "<<endY;
                        cout<<endl;
                        cin>>str;
                        if(str.compare("O")==0)
                        {}
                        else if(str.compare("IN")==0)
                            {
                                cout<<local<<" "<<startX<<" "<<startY<<" "<<startX+2<<" "<<endY;
                                cout<<endl;
                                cin>>str;
                            }
                        else
                            {
                                cout<<local<<" "<<startX+2<<" "<<startY<<" "<<startX+2+2<<" "<<endY;
                                cout<<endl;
                                cin>>str;
                            }
                        break;
                    }
                else
                    {
                        cout<<local<<" "<<startX<<" "<<startY<<" "<<endX<<" "<<endY;
                        cout<<endl;
                        cin>>str;
                        break;
                    }
            } cout.flush();
    } cout.flush();
}



void helper()
{
    ll T,Q,D;
    cin>>T>>Q>>D; 
    jabtak(T--)
    {
    chef(Q,D);     
    }
}


//------------------------------------
// void helper()
// { testcases { chef();}}
//------------------------------------

int main()
{
//IOS;
helper();
return 0;
}
