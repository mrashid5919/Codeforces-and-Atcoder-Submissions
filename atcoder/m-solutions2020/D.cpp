#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ara[85],d[85],sum=1000,c=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sum=1000;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            d[count]=ara[i];
            count++;
        }
        else if(ara[i]!=ara[i-1])
        {
            d[count]=ara[i];
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        if(i==0)
        {
            if(d[i]<d[i+1])
            {
                c=c+sum/d[i];
                sum=sum%d[i];
            }
        }
        else if(i==count-1)
        {
            if(c>0)
            {
                sum=sum+c*d[i];
                c=0;
            }
        }
        else
        {
            if(d[i]<d[i-1] && d[i]<d[i+1])
            {
                c=c+sum/d[i];
                sum=sum%d[i];
            }
            else if(d[i]>d[i-1] && d[i]>d[i+1])
            {
                if(c>0)
                {
                    sum=sum+c*d[i];
                    c=0;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
