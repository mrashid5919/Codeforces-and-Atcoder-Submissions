#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,ara[30],sum=0,count=0,p=0,s[30][30],dif;
    cin>>n;
    while(n>0)
    {
        count++;
        ara[count]=n%10;
        sum=sum+n%10;
        n=n/10;
    }
    dif=count;
    if(sum%3==0)
    {
        p=1;
        cout<<0;
    }
    else
    {
        for(i=0;i<=count;i++)
        {
            for(j=0;j<=count;j++)
                s[i][j]=0;
        }
        for(i=1;i<=count;i++)
            s[i][i]=ara[i];
        for(i=1;i<=count;i++)
        {
            for(j=i;j<=count;j++)
            {
                if(i==1 && j==count)
                    continue;
                if(s[i][j]==0)
                {
                    if(s[i][j-1]==0)
                        s[i][j]=s[i-1][j]-ara[i-1];
                    else if(s[i-1][j]==0)
                        s[i][j]=s[i][j-1]+ara[j];
                }
                if((sum-s[i][j])%3==0)
                {
                    p=1;
                    dif=min(dif,j-i+1);
                }
            }
        }
        if(p==0)
            cout<<"-1";
        else
            cout<<dif;
    }
    return 0;
}
