#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool isPrime(int n)
{
    bool check=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            check=false;
            break;
        }
    }
    return check;
}

int main()
{
    fastio;
    int t,n,i,j,ara[105],b[105][105],sum,mx,ans[105];
    cin>>t;
    while(t--)
    {
        //mx=-1;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(!(isPrime(sum)))
        {
            cout<<n<<"\n";
            for(i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(!(isPrime(sum-ara[i])))
            {
                mx=i;
                break;
            }
        }
        cout<<n-1<<"\n";
        for(i=0;i<n;i++)
        {
            if(i==mx)
                continue;
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
