#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

// vector<int> primes;

// int ara[2000005]={0};

// void sieve()
// {
    
//     for(int i=2;i*i<=2000000;i++)
//     {
//         if(ara[i]==0)
//         {
//             for(int j=i*i;j<=2000000;j+=i)
//             {
//                 ara[j]=1;
//             }
//         }
        
//     }
//     for(int i=2;i<=2000000;i++)
//     {
//         if(ara[i]==0)
//             primes.push_back(i);
//     }
// }

int main()
{
    fastio;
    long long n,p,i,cng=0,mn=INT_MAX;
    string s;
    cin>>n>>p;
    cin>>s;
    long long lftmn=n+1,lftmx=0,rtmn=n+1,rtmx=0;
    for(i=0;i<(n/2+n%2);i++)
    {
        if(s[i]!=s[n-1-i])
        {
            char x=max(s[i],s[n-1-i]);
            char y=min(s[i],s[n-1-i]);
            cng+=min(x-y,'z'-x+y-'a'+1);
            lftmn=min(lftmn,i+1);
            lftmx=max(lftmx,i+1);
            rtmn=min(rtmn,n-i);
            rtmx=max(rtmx,n-i);
        }
    }
    if(lftmn==n+1)
    {
        mn=0;
    }
    else if(n%2==1 && p==n/2+n%2)
    {
        mn=min(mn,rtmx-p+cng);
    }
        
    else
    {
        if(p<=n/2)
        {
            long long a,b;
            a=2*max(0LL,lftmx-p)+max(0LL,p-lftmn);
            b=max(0LL,lftmx-p)+2*max(0LL,p-lftmn);
            mn=min(mn,min(a+cng,b+cng));
        }
        else
        {
            long long a,b;
            a=2*max(0LL,rtmx-p)+max(0LL,p-rtmn);
            b=max(0LL,rtmx-p)+2*max(0LL,p-rtmn);
            mn=min(mn,min(a+cng,b+cng));
        }
    }
    cout<<mn<<"\n";
    return 0;
}