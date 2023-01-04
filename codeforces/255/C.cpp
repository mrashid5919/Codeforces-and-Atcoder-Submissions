#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,j,ara[4005],mx=0,f;
    //vector<vector<int> > pos;
    vector<int> pos[1000005];
    vector<int> nz;
    map<pair<int,int>,int> mp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        pos[ara[i]].push_back(i);
        if(pos[ara[i]].size()==1)
            nz.push_back(ara[i]);
    }
    sort(nz.begin(),nz.end());
    for(i=0; i<nz.size(); i++)
    {
        for(j=0; j<nz.size(); j++)
        {
            if(i==j)
            {
                int p=pos[nz[i]].size();
                mx=max(mx,p);
            }
            else
            {
                vector<int>::iterator it;
                it=upper_bound(pos[nz[j]].begin(),pos[nz[j]].end(),pos[nz[i]][0]);
                if(it==pos[nz[j]].end())
                    continue;
                else
                {
                    int x=0;
                    int y=it-pos[nz[j]].begin();
                    int f=0;
                    int cnt=2;
                    while(true)
                    {

                        while(true)
                        {
                            if(x+1==pos[nz[i]].size())
                            {
                                f=1;
                                break;
                            }

                            if(pos[nz[i]][x+1]>pos[nz[j]][y])
                            {
                                cnt++;
                                x++;
                                break;
                            }
                            x++;
                        }
                        if(f==1)
                            break;
                        while(true)
                        {
                            if(y+1==pos[nz[j]].size())
                            {
                                f=1;
                                break;
                            }
                            if(pos[nz[j]][y+1]>pos[nz[i]][x])
                            {
                                cnt++;
                                y++;
                                break;
                            }
                            y++;
                        }
                        if(f==1)
                            break;
                        //if(y+1==pos[ara[j]].size())
                        //break;
                    }
                    //if(cnt>mx)
                    //cout<<i<<" "<<j<<"\n";
                    mx=max(mx,cnt);
                }
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        int p=pos[ara[i]].size();
        mx=max(mx,p);
        for(j=i+1;j<n;j++)
        {
            f=0;
            if(ara[i]==ara[j])
                continue;
            if(mp[make_pair(ara[i],ara[j])])
                continue;
            mp[make_pair(ara[i],ara[j])]++;
            int x,y,low,high,mid;
            low=0;
            high=pos[ara[i]].size()-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(pos[ara[i]][mid]==i)
                {
                    x=mid;
                    break;
                }
                else if(pos[ara[i]][mid]<i)
                    low=mid+1;
                else
                    high=mid-1;
            }

            low=0;
            high=pos[ara[j]].size()-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(pos[ara[j]][mid]==j)
                {
                    y=mid;
                    break;
                }
                else if(pos[ara[j]][mid]<j)
                    low=mid+1;
                else
                    high=mid-1;
            }

            int cnt=2;
            while(true)
            {

                while(true)
                {
                    if(x+1==pos[ara[i]].size()){
                        f=1;
                        break;
                    }

                    if(pos[ara[i]][x+1]>pos[ara[j]][y])
                    {
                        cnt++;
                        x++;
                        break;
                    }
                    x++;
                }
                if(f==1)
                    break;
                while(true)
                {
                    if(y+1==pos[ara[j]].size()){
                        f=1;
                        break;
                    }
                    if(pos[ara[j]][y+1]>pos[ara[i]][x])
                    {
                        cnt++;
                        y++;
                        break;
                    }
                    y++;
                }
                if(f==1)
                    break;
                //if(y+1==pos[ara[j]].size())
                    //break;
            }
            //if(cnt>mx)
                //cout<<i<<" "<<j<<"\n";
            mx=max(mx,cnt);
        }
    }*/
    cout<<mx<<"\n";
    return 0;
}
