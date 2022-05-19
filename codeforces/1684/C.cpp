#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,j,p,mis,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mis=0;
        vector<long long> ara[200005];
        vector<long long> pos;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>p;
                ara[i].push_back(p);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(ara[i][j]<ara[i][j-1])
                {
                    mis=1;
                    break;
                }
            }
            if(mis==1)
            {
                vector<long long> vect;
                for(j=0; j<m; j++)
                {
                    vect.push_back(ara[i][j]);
                }
                sort(vect.begin(),vect.end());
                for(j=0; j<m; j++)
                {
                    if(vect[j]!=ara[i][j])
                    {
                        pos.push_back(j);
                    }
                }
                break;
            }
        }
        if(mis==0)
        {
            cout<<1<<" "<<1<<"\n";
            continue;
        }
        if(pos.size()>2)
        {
            cout<<-1<<"\n";
            continue;
        }
        p=0;
        for(i=0;i<n;i++)
        {
            swap(ara[i][pos[0]],ara[i][pos[1]]);
            if(ara[i][pos[0]]>ara[i][pos[0]+1] || (pos[0]>0 && ara[i][pos[0]]<ara[i][pos[0]-1]))
            {
                cout<<-1<<"\n";
                p=1;
                break;
            }
            if(ara[i][pos[1]]<ara[i][pos[1]-1] || (pos[1]<m-1 && ara[i][pos[1]]>ara[i][pos[1]+1]))
            {
                cout<<-1<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<pos[0]+1<<" "<<pos[1]+1<<"\n";
        }
    }
    return 0;
}
