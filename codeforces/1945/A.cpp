#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,a,b,c,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>a>>b>>c;
        if(b%3==0)
        {
            cnt=a+b/3;
            if(c%3==0)
                cnt+=c/3;
            else
                cnt+=1+c/3;
        }
        else if(c<3-b%3)
        {
            cout<<-1<<"\n";
            continue;
        }
        else
        {
            cnt=a+(b+c)/3;
            if((b+c)%3!=0)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}