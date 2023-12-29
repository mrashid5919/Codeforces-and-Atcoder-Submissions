#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int cst[60];

int main()
{
    fastio;
    int n,i,j,mn,p=0;
    string ara[60][60],pos[60];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i][0];
    pos[0]=ara[0][0];
    string tmp=pos[0];
    tmp.append(pos[0]);
    for(i=0;i<pos[0].size()-1;i++)
    {
        pos[i+1]=tmp.substr(i+1,pos[0].size());
    }
    for(i=0;i<n;i++)
    {
        string tmp=ara[i][0];
        int s=tmp.size();
        tmp.append(ara[i][0]);
        for(j=1;j<s;j++)
            ara[i][j]=tmp.substr(j,s);
    }
    for(i=0;i<pos[0].size();i++)
    {
        for(j=0;j<n;j++)
        {
            int f=0;
            for(int k=0;k<ara[j][0].size();k++)
            {
                if(ara[j][k]==pos[i])
                {
                    cst[i]+=k;
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            break;
    }
    if(p==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=0;i<pos[0].size();i++)
        {
            if(i==0)
                mn=cst[i];
            else
                mn=min(mn,cst[i]);
        }
        cout<<mn<<"\n";
    }
    return 0;
}