#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long q[200005],ara[200005],cnt[200005];

vector<long long> findSubarrayWithSum(long long n,long long target) {
    map<long long, long long> sumMap;
    long long currentSum = 0;

    for (long long i =1; i < n; ++i) {
        currentSum += q[i];

        if (currentSum == target) {
            // Subarray from the beginning to the current index has the target sum
            return {1, i};
        }

        // Check if the difference (currentSum - target) exists in the map
        if (sumMap.find(currentSum - target) != sumMap.end()) {
            // Subarray found between indices sumMap[currentSum - target] + 1 and i
            return {sumMap[currentSum - target] + 1, i};
        }

        // Store the current cumulative sum and its index in the map
        sumMap[currentSum] = i;
    }

    // If no subarray is found, return an empty vector
    return {};
}


int main()
{
    fastio;
    long long n,i,p=0,flag=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>q[i];
    }
    vector<long long> res=findSubarrayWithSum(n,n-1);
    //cout<<res[0]<<" "<<res[1]<<"\n";
    if(res.size()>0)
    {
        ara[res[0]-1]=1;
        ara[res[1]]=n;
        for(i=res[0]-2;i>=0;i--)
        {
            ara[i]=ara[i+1]-q[i+1];
        }
        for(i=res[0];i<n;i++)
            ara[i]=ara[i-1]+q[i];
    }
    else
    {
        vector<long long> res=findSubarrayWithSum(n,1-n);
        if(res.size()>0)
        {
            ara[res[0]-1]=n;
            ara[res[1]]=1;
            for(i=res[0]-2;i>=0;i--)
            {
                ara[i]=ara[i+1]-q[i+1];
            }
            for(i=res[0];i<n;i++)
                ara[i]=ara[i-1]+q[i];
        }
        else
        {
            cout<<-1<<"\n";
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]>=1 && ara[i]<=n)
            cnt[ara[i]]++;
    }        
    for(i=1;i<=n;i++)
    {
        if(cnt[i]!=1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<-1<<"\n";
    else
    {
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}