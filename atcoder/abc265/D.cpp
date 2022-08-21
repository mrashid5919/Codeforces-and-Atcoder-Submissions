#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,i,j,p,q,r,flag=0,sum=0,left,right;
    cin>>n>>p>>q>>r;
    for(i=0;i<n;i++)
        cin>>ara[i];
    left=0;
    right=0;
    vector<pair<long long,long long> > vect;
    while(right<n)
    {
        sum+=ara[right];
        if(sum>p+q+r)
        {
            while(sum>p+q+r && left<right)
            {
                sum-=ara[left];
                left++;
            }
        }
        if(sum==p+q+r)
        {
            flag=1;
            vect.push_back(make_pair(left,right));
            sum-=ara[left];
            left++;
        }
        right++;
    }
    if(flag==0)
    {
        cout<<"No";
        return 0;
    }
    //cout<<"Hi\n";
    for(i=0;i<vect.size();i++)
    {
        //cout<<vect[i].first<<" "<<vect[i].second<<"\n";
        sum=0;
        flag=1;
        for(j=vect[i].first;j<=vect[i].second;j++)
        {
            sum+=ara[j];
            //cout<<sum<<"\n";
            if(flag==1)
            {
                if(sum==p)
                    flag=2;
                if(sum>p)
                    break;
            }
            else if(flag==2)
            {
                if(sum==p+q)
                    flag=3;
                if(sum>p+q)
                    break;
            }
            else if(flag==3)
            {
                if(sum==p+q+r)
                    flag=4;
            }
        }
        if(flag==4)
            break;
    }
    if(flag==4)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}