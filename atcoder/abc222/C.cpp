#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,m,i,j,k;
    char ara[200][200];
    cin>>n>>m;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>ara[i][j];
    }
    vector<pair <int,int> > vect;
    for(i=0;i<2*n;i++)
        vect.push_back( make_pair(0,i+1));
    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((ara[vect[2*j].second][i]=='G' && ara[vect[2*j+1].second][i]=='C') || (ara[vect[2*j].second][i]=='C' && ara[vect[2*j+1].second][i]=='P') || (ara[vect[2*j].second][i]=='P' && ara[vect[2*j+1].second][i]=='G'))
                vect[2*j].first++;
            else if((ara[vect[2*j+1].second][i]=='G' && ara[vect[2*j].second][i]=='C') || (ara[vect[2*j+1].second][i]=='C' && ara[vect[2*j].second][i]=='P') || (ara[vect[2*j+1].second][i]=='P' && ara[vect[2*j].second][i]=='G'))
                vect[2*j+1].first++;
        }

        for(k=0;k<2*n;k++)
        {
            for(j=k+1;j<2*n;j++)
            {
                if(vect[k].first<vect[j].first)
                {
                    int temp=vect[k].second;
                    vect[k].second=vect[j].second;
                    vect[j].second=temp;

                    temp=vect[k].first;
                    vect[k].first=vect[j].first;
                    vect[j].first=temp;
                }
            }
        }
        //sort(vect.begin(),vect.end());
        for(k=0; k<2*n; k++)
        {
            for(j=k+1; j<2*n; j++)
            {
                if((vect[k].first==vect[j].first) && (vect[j].second<vect[k].second))
                {
                    int temp=vect[k].second;
                    vect[k].second=vect[j].second;
                    vect[j].second=temp;
                }
            }
        }
    }

    for(i=0;i<2*n;i++)
        cout<<vect[i].second<<"\n";
    return 0;
}
