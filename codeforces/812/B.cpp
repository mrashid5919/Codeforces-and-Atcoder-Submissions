#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,j,l[30]={0},r[30]={0},mask,mn=INT_MAX,cst,lst=-1;
    char ara[30][150];
    cin>>n>>m;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<m+2;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m+2;j++)
        {
            if(ara[i][j]=='1')
            {
                lst=i;
                l[i]=j;
                break;
            }
        }
    }
    if(lst==-1)
    {
        cout<<0<<"\n";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=m+1;j>=0;j--)
        {
            if(ara[i][j]=='1')
            {
                r[i]=j;
                break;
            }
        }
    }
    for(mask=0;mask<(1<<(n-1));mask++)
    {
        cst=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                cst+=r[i];
                if(i!=lst)
                {
                    if(r[i]==0)
                    {
                        if(mask&1)
                            cst+=m+1;
                    }
                    else
                    {
                        if(mask&1)
                            cst+=m+1-r[i];
                        else
                            cst+=r[i];
                    }
                    cst++;
                }
                else
                    break;
            }
            else
            {
                if(mask&(1<<(i-1)))
                {
                    if(l[i]!=0)
                        cst+=m+1-l[i];
                    if(i!=lst)
                    {
                        if(mask&(1<<i))
                        {
                            if(l[i]!=0)
                                cst+=m+1-l[i];
                        }
                        else
                        {
                            if(l[i]!=0)
                                cst+=l[i];
                            else
                                cst+=m+1;
                        }
                        cst++;
                    }
                    else
                        break;
                }
                else
                {
                    if(r[i]!=0)
                        cst+=r[i];
                    if(i!=lst)
                    {
                        if(mask&(1<<i))
                        {
                            if(r[i]!=0)
                                cst+=m+1-r[i];
                            else
                                cst+=m+1;
                        }
                        else
                            cst+=r[i];
                        cst++;
                    }
                    else
                        break;
                }
            }
        }
        mn=min(mn,cst);
    }
    cout<<mn<<"\n";
    return 0;
}
