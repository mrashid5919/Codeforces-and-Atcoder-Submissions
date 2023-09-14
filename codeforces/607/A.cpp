#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],b[100005],dest[100005];

int main()
{
    fastio;
    long long n,i,low,mid,high,mn;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i]>>b[i];
    vector<pair<long long,long long> >vect;
    for(i=0;i<n;i++)
        vect.push_back({ara[i],b[i]});
    sort(vect.begin(),vect.end());
    dest[0]=0;
    for(i=1;i<n;i++)
    {
        if(vect[0].first>=vect[i].first-vect[i].second)
            dest[i]=i;
        else
        {
            low=0;
            high=i-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(vect[mid].first<vect[i].first-vect[i].second && vect[mid+1].first>=vect[i].first-vect[i].second)
                {
                    dest[i]=i-mid-1+dest[mid];
                    break;
                }
                else if(vect[mid].first<vect[i].first-vect[i].second)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
    }
    /*cout<<"\n";
    for(i=0;i<n;i++)
        cout<<ara[i]<<" "<<dest[i]<<"\n";*/
    mn=dest[n-1];
    for(i=n-1;i>0;i--)
    {
        mn=min(mn,n-i+dest[i-1]);
    }
    cout<<mn<<"\n";
    return 0;
}