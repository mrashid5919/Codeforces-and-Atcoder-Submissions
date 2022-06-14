#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,j,k,c[30],p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0; i<10; i++)
            c[i]=0;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            c[ara[i]%10]++;
        }
        for(i=0; i<10; i++)
        {
            if(p==1)
                break;
            for(j=0; j<10; j++)
            {
                if(p==1)
                    break;
                for(k=0; k<10; k++)
                {
                    long long tempa=c[i];
                    long long tempb=c[j];
                    long long tempc=c[k];
                    if(c[i]>0)
                        c[i]--;
                    else
                    {
                        c[i]=tempa;
                        c[j]=tempb;
                        c[k]=tempc;
                        continue;
                    }
                    if(c[j]>0)
                        c[j]--;
                    else
                    {
                        c[i]=tempa;
                        c[j]=tempb;
                        c[k]=tempc;
                        continue;
                    }
                    if(c[k]<=0)
                    {
                        c[i]=tempa;
                        c[j]=tempb;
                        c[k]=tempc;
                        continue;
                    }
                    if((i+j+k)%10==3)
                    {
                        p=1;
                        break;
                    }
                    c[i]=tempa;
                    c[j]=tempb;
                    c[k]=tempc;
                    //cout<<c[i]<<" "<<c[j]<<" "<<c[k]<<"\n";
                }
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
