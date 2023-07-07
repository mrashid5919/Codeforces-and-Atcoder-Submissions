#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,j;
    char ara[5][5];
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>ara[i][j];
        }
        if(ara[0][0]==ara[0][1] && ara[0][1]==ara[0][2])
        {
            if(ara[0][0]!='.')
            {
                cout<<ara[0][0]<<"\n";
                continue;
            }
        }
        if(ara[1][0]==ara[1][1] && ara[1][1]==ara[1][2])
        {
            if(ara[1][0]!='.')
            {
                cout<<ara[1][0]<<"\n";
                continue;
            }
        }
        if(ara[2][0]==ara[2][1] && ara[2][1]==ara[2][2])
        {
            if(ara[2][0]!='.')
            {
                cout<<ara[2][0]<<"\n";
                continue;
            }
        }
        if(ara[0][0]==ara[1][0] && ara[1][0]==ara[2][0])
        {
            if(ara[0][0]!='.')
            {
                cout<<ara[0][0]<<"\n";
                continue;
            }
        }
        if(ara[0][1]==ara[1][1] && ara[1][1]==ara[2][1])
        {
            if(ara[0][1]!='.')
            {
                cout<<ara[0][1]<<"\n";
                continue;
            }
        }
        if(ara[0][2]==ara[1][2] && ara[1][2]==ara[2][2])
        {
            if(ara[0][2]!='.')
            {
                cout<<ara[0][2]<<"\n";
                continue;
            }
        }
        if(ara[0][0]==ara[1][1] && ara[1][1]==ara[2][2])
        {
            if(ara[0][0]!='.')
            {
                cout<<ara[0][0]<<"\n";
                continue;
            }
        }
        if(ara[0][2]==ara[1][1] && ara[1][1]==ara[2][0])
        {
            if(ara[0][2]!='.')
            {
                cout<<ara[0][2]<<"\n";
                continue;
            }
        }
        cout<<"DRAW\n";
    }
    return 0;
}