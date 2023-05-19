#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,gr1,gr2,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ara[i];
            if(n>2)
            {
                if(ara[i]==n)
                    gr1=i;
                if(ara[i]==n-1)
                    gr2=i;
            }
        }
        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        if(n==2)
        {
            for(i=1;i>=0;i--)
                cout<<ara[i]<<" ";
            cout<<"\n";
            continue;
        }
        if(gr1!=0)
        {
            if(gr1==n-1)
            {
                r=n-2;
                cout<<n<<" ";
                while(r>=0)
                {
                    if(ara[r]>ara[0])
                    {
                        cout<<ara[r]<<" ";
                        r--;
                    }
                    else
                    {
                        for(i=0;i<=r;i++)
                            cout<<ara[i]<<" ";
                        cout<<"\n";
                        break;
                    }
                }
            }
            else
            {
                for(i=gr1;i<n;i++)
                    cout<<ara[i]<<" ";
                cout<<ara[gr1-1]<<" ";
                r=gr1-2;
                if(r<0)
                    cout<<"\n";
                while(r>=0)
                {
                    if(ara[r]>ara[0])
                    {
                        cout<<ara[r]<<" ";
                        r--;
                    }
                    else
                    {
                        for(i=0;i<=r;i++)
                            cout<<ara[i]<<" ";
                        cout<<"\n";
                        break;
                    }
                }
            }
        }
        else
        {
            if(gr2==n-1)
            {
                long long r=n-2;
                cout<<n-1<<" ";
                while(r>=0)
                {
                    if(ara[r]>ara[0])
                    {
                        cout<<ara[r]<<" ";
                        r--;
                    }
                    else
                    {
                        for(i=0;i<=r;i++)
                            cout<<ara[i]<<" ";
                        cout<<"\n";
                        break;
                    }
                }
            }
            else
            {
                for(i=gr2;i<n;i++)
                    cout<<ara[i]<<" ";
                cout<<ara[gr2-1]<<" ";
                r=gr2-2;
                if(r<0)
                    cout<<"\n";
                while(r>=0)
                {
                    if(ara[r]>ara[0])
                    {
                        cout<<ara[r]<<" ";
                        r--;
                    }
                    else
                    {
                        for(i=0;i<=r;i++)
                            cout<<ara[i]<<" ";
                        cout<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
