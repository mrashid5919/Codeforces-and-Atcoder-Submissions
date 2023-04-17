// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[120][120];

int main()
{
    fastio;
    long long n,k,i,j,x;
    cin>>n>>k;
    if(k>n*n)
        cout<<-1<<"\n";
    else
    {
        i=0;
        j=0;
        while(k!=0)
        {
            if(i==j)
            {
                ara[i][j]=1;
                k--;
                if(k==1)
                {
                    ara[i+1][j+1]=1;
                    k--;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                if(k==1)
                {
                    ara[i+1][i+1]=1;
                    k--;
                }
                else
                {
                    ara[i][j]=1;
                    ara[j][i]=1;
                    k-=2;
                    if(j==n-1)
                    {
                        j=i+1;
                        i++;
                    }
                    else
                        j++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<ara[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
