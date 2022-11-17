#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n,i,j,flag=0;
    char ara[200][200];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ara[i][j]=='.')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ara[i][j]=='.')
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ara[j][i]=='.')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==0)
        cout<<-1<<"\n";
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ara[j][i]=='.')
                {
                    cout<<j+1<<" "<<i+1<<"\n";
                    break;
                }
            }
        }
    }
    }
    return 0;
}