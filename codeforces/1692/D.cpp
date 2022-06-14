#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int ara[100],i,t,x,cnt;
    for(i=0;i<=5;i++)
        ara[i]=i*70;
    ara[6]=601;
    for(i=7;i<=11;i++)
        ara[i]=ara[i-1]+70;
    ara[12]=1202;
    for(i=13;i<16;i++)
        ara[i]=ara[i-1]+70;
    cin>>t;
    while(t--)
    {
        cnt=0;
        string s;
        cin>>s>>x;
        int tm=(s[0]-'0')*600+(s[1]-'0')*60+(s[3]-'0')*10+(s[4]-'0');
        int temp=tm;
        while(true)
        {
            int low=0;
            int high=15;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(ara[mid]==temp)
                {
                    cnt++;
                    break;
                }
                else if(ara[mid]<temp)
                    low=mid+1;
                else
                    high=mid-1;
            }
            if((temp+x)%1440==tm)
                break;
            temp=(temp+x)%1440;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
