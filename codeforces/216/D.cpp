#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<int> vect[1005];

int main()
{
    fastio;
    int n,k,i,j,cnt=0,x,y;
    vector<int>::iterator it1,it2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0;j<k;j++)
        {
            cin>>x;
            vect[i].push_back(x);
        }
        sort(vect[i].begin(),vect[i].end());
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j+1<vect[i].size();j++)
        {
            if(i>0)
            {
                it1=lower_bound(vect[i-1].begin(),vect[i-1].end(),vect[i][j]);
                if(it1==vect[i-1].end())
                    x=0;
                else
                {
                    it2=upper_bound(vect[i-1].begin(),vect[i-1].end(),vect[i][j+1]);
                    if(it2==vect[i-1].end())
                        x=vect[i-1].size()-(it1-vect[i-1].begin());
                    else
                        x=(it2-vect[i-1].begin())-(it1-vect[i-1].begin());
                }
            }
            else
            {
                it1=lower_bound(vect[n-1].begin(),vect[n-1].end(),vect[i][j]);
                if(it1==vect[n-1].end())
                    x=0;
                else
                {
                    it2=upper_bound(vect[n-1].begin(),vect[n-1].end(),vect[i][j+1]);
                    if(it2==vect[n-1].end())
                        x=vect[n-1].size()-(it1-vect[n-1].begin());
                    else
                        x=(it2-vect[n-1].begin())-(it1-vect[n-1].begin());
                }
            }
            
            if(i<n-1)
            {
                it1=lower_bound(vect[i+1].begin(),vect[i+1].end(),vect[i][j]);
                if(it1==vect[i+1].end())
                    y=0;
                else
                {
                    it2=upper_bound(vect[i+1].begin(),vect[i+1].end(),vect[i][j+1]);
                    if(it2==vect[i+1].end())
                        y=vect[i+1].size()-(it1-vect[i+1].begin());
                    else
                        y=(it2-vect[i+1].begin())-(it1-vect[i+1].begin());
                }
            }
            else
            {
                it1=lower_bound(vect[0].begin(),vect[0].end(),vect[i][j]);
                if(it1==vect[0].end())
                    y=0;
                else
                {
                    it2=upper_bound(vect[0].begin(),vect[0].end(),vect[i][j+1]);
                    if(it2==vect[0].end())
                        y=vect[0].size()-(it1-vect[0].begin());
                    else
                        y=(it2-vect[0].begin())-(it1-vect[0].begin());
                }
            }
            if(x!=y)
                cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}