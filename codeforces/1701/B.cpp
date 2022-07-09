#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200005];

int main()
{
    fastio;
    int t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(i=0;i<=n;i++)
            ara[i]=0;
        vector<int> temp;
        for(i=1;i<=n;i++)
        {
            if(ara[i]==0)
            {
                for(int j=i;j<=n;j*=2)
                {
                    ara[j]=1;
                    temp.push_back(j);
                }
            }
        }
        for(i=1;i<n;i++)
        {
            if(temp[i]==2*temp[i-1]){
                cnt++;
                if(i==1 || (i!=1 && temp[i-1]!=2*temp[i-2]))
                    cnt++;
            }
        }
        cout<<2<<"\n";
        for(i=0;i<n;i++)
            cout<<temp[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
