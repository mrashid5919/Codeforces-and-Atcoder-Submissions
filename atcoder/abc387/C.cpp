#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

int main()
{
    fastio;
    long long l,r,i,j,sum=0,sum2=0,digr,digl,x1,x2;
    cin>>l>>r;
    vector<long long> vect;
    long long n=r;
    while(n>0)
    {
        vect.push_back(n%10);
        n/=10;
    }
    //reverse(vect.begin(),vect.end());
    digr=vect.size();
    //cout<<digr<<"\n";
    for(i=1;i<digr-1;i++)
    {
        for(j=1;j<=9;j++)
        {
            sum+=power(j,i);
        }
    }
    //cout<<sum<<"\n";
    x1=vect[digr-1];
    //cout<<x1<<"\n";
    for(i=digr-1;i>=0;i--)
    {
        if(i==digr-1)
        {
            for(j=1;j<x1;j++)
            {
                sum+=power(j,i);
            }
        }
        else if(i==0)
        {
            sum+=min(vect[i]+1,x1);
        }
        else if(vect[i]!=0)
        {
            sum+=power(x1,i)*min(x1,vect[i]);
            if(x1<=vect[i])
            {
                break;
            }
        }
    }
    if(l<=10)
    {
        cout<<sum<<"\n";
        return 0;
    }
    vect.clear();
    n=l-1;
    while(n>0)
    {
        vect.push_back(n%10);
        n/=10;
    }
    //reverse(vect.begin(),vect.end());
    digl=vect.size();
    //cout<<digl<<"\n";
    for(i=1;i<digl-1;i++)
    {
        for(j=1;j<=9;j++)
        {
            sum2+=power(j,i);
        }
    }
    //cout<<sum2<<"\n";
    x2=vect[digl-1];
    //cout<<x2<<"\n";
    for(i=digl-1;i>=0;i--)
    {
        if(i==digl-1)
        {
            for(j=1;j<x2;j++)
            {
                sum2+=power(j,i);
            }
        }
        else if(i==0)
        {
            sum2+=min(vect[i]+1,x2);
        }
        else if(vect[i]!=0)
        {
            sum2+=power(x2,i)*min(x2,vect[i]);
            if(x2<=vect[i])
            {
                break;
            }
        }
        //cout<<sum2<<"\n";
    }
    //cout<<sum<<" "<<sum2<<"\n";
    cout<<sum-sum2<<"\n";
    return 0;
}