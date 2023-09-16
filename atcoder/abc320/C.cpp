#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long m,i,j,k,l,mn=300,p=0;
    string ara[10];
    vector<long long> vect1[15],vect2[15],vect3[15];
    cin>>m;
    for(i=0;i<3;i++)
        cin>>ara[i];
    for(i=0;i<3;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0)
                vect1[ara[i][j]-'0'].push_back(j);
            else if(i==1)
                vect2[ara[i][j]-'0'].push_back(j);
            else
                vect3[ara[i][j]-'0'].push_back(j);
        }
    }
    for(i=0;i<9;i++)
    {
        if(vect1[i].size()!=0 && vect2[i].size()!=0 && vect3[i].size()!=0)
        {
            p=1;
            for(j=0;j<vect1[i].size();j++)
            {
                for(k=0;k<vect2[i].size();k++)
                {
                    for(l=0;l<vect3[i].size();l++)
                    {
                        if(vect1[i][j]==vect2[i][k] && vect2[i][k]==vect3[i][l])
                            mn=min(mn,2*m+vect1[i][j]);
                        else if(vect1[i][j]==vect2[i][k] || vect1[i][j]==vect3[i][l])
                            mn=min(mn,m+vect1[i][j]);
                        else if(vect2[i][k]==vect3[i][l])
                            mn=min(mn,m+vect2[i][k]);
                        else
                            mn=min(mn,max(vect1[i][j],max(vect2[i][k],vect3[i][l])));
                    }
                }
            }
        }
    }
    if(p==0)
        cout<<-1<<"\n";
    else
        cout<<mn<<"\n";
    return 0;
}