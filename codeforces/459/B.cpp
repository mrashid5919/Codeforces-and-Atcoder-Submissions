#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,min,max,a=1,b=1,ans;
    static long long ara[200003];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    min=ara[0];
    max=ara[n-1];
    if(min==max)
        ans=n*(n-1)/2;
    else
    {
        for(i=1;;i++)
        {
            if(ara[0+i]==min)
                a++;
            else
                break;
        }
        for(i=n-2;;i--)
        {
            if(ara[i]==max)
                b++;
            else
                break;
        }
        ans=a*b;
    }
    cout<<max-min<<" "<<ans<<endl;
    return 0;
}
