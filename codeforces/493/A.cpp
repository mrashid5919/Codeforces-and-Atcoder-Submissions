#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string hname,aname;
    int n,i,tm,num,h[105],a[105];
    char team,card;
    for(i=0;i<100;i++)
    {
        h[i]=0;
        a[i]=0;
    }
    cin>>hname;
    cin>>aname;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>tm>>team>>num>>card;
        if(card=='r')
        {
            if(team=='h'){
                h[num]+=2;
                if(h[num]<=3)
                    cout<<hname<<" "<<num<<" "<<tm<<"\n";
            }
            else{
                a[num]+=2;
                if(a[num]<=3)
                    cout<<aname<<" "<<num<<" "<<tm<<"\n";
            }
        }
        else
        {
            if(team=='h'){
                h[num]++;
                if(h[num]==2)
                    cout<<hname<<" "<<num<<" "<<tm<<"\n";
            }
            else{
                a[num]++;
                if(a[num]==2)
                    cout<<aname<<" "<<num<<" "<<tm<<"\n";
            }
            
        }
    }
    return 0;
}