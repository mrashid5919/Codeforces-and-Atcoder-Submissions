#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x, long long y)
{
    long long d=1,i;
    for(i=0;i<y;i++)
        d=d*x;
    return d;
}

long long arr[100005] = {0};

int main()
{
    long long n,i,j,count=0;
    cin>>n;
    for (i = 2; i*i<=n; i++)
    {
        if(arr[i-1]==0)
        {
            for (j = i * i; j<=n; j*=i)
            {
                if(j<=100000)
                    arr[j - 1] = 1;
                count++;
            }
        }
    }
    cout<<n-count<<"\n";
    return 0;
}
