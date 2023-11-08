#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long a[200005],b[200005],com[400005];

int main()
{
    fastio;
    long long t,n,m,i,idx,des;
    cin>>t;
    while(t--)
    {
        des=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        sort(b,b+m);
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                des=1;
                break;
            }
        }
        if(des==0)
        {
            for(i=0;i<n;i++)
                com[i]=a[i];
            for(i=n;i<n+m;i++)
                com[i]=b[i-n];
            sort(com,com+n+m,greater<long long>());
            for(i=0;i<n+m;i++)
                cout<<com[i]<<" ";
            cout<<"\n";
            continue;
        }
        idx=-1;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>=b[0])
            {
                idx=i;
                break;
            }
        }
        vector<long long> ans;
        for(i=n-1;i>idx;i--)
            ans.push_back(a[i]);
        // for(i=0;i<ans.size();i++)
        //     cout<<ans[i]<<" ";
        // cout<<"\n";
        // for(i=0;i<m;i++)
        //     cout<<b[i]<<" ";
        // cout<<"\n";
        for(i=0;i<m;i++)
        {
            //if(i==1)
                //cout<<i<<" "<<b[i]<<" "<<a[idx]<<"\n";
            if(idx==-1)
            {
                ans.push_back(b[i]);
                //continue;
            }
            else if(b[i]<=a[idx])
                ans.push_back(b[i]);
            else
            {
                while(idx>=0 && b[i]>a[idx])
                {
                    ans.push_back(a[idx]);
                    idx--;
                }
                ans.push_back(b[i]);
            }
            // for(long long j=0;j<ans.size();j++)
            //     cout<<ans[j]<<" ";
            // cout<<"\n";
        }
        if(idx!=-1)
        {
            for(i=idx;i>=0;i--)
                ans.push_back(a[i]);
        }
        reverse(ans.begin(),ans.end());
        for(i=0;i<n+m;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}