#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,a[1000],b[1000],dif[1000],sum1,sum2,m,j;
    cin>>t;
    while(t--)
    {
        int checked[1000]= {0};
        sum1=0;
        sum2=0;
        m=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        if(sum1!=sum2)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0; i<n; i++)
        {
            dif[i]=a[i]-b[i];
            if(dif[i]>0)
                m+=dif[i];
        }
        cout<<m<<"\n";
        /*for(i=0; i<n; i++)
            cout<<checked[i]<<" ";*/
        for(i=0; i<n; i++)
        {
            if(dif[i]<=0 || checked[i]==1)
                continue;
            for(j=0; j<n; j++)
            {
                if(dif[j]>=0 || checked[j]==1)
                    continue;
                while(dif[j]<0 && dif[i]>0)
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                    dif[j]++;
                    dif[i]--;
                }
                if(dif[j]==0)
                    checked[j]=1;
                if(dif[i]==0)
                {
                    checked[i]=1;
                    break;
                }
            }

        }
    }
    return 0;
}
