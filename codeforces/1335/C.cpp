#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m,count,u;
    static int ara[200002];
    cin>>t;
    while(t--)
    {
        m=0;
        count=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(i==0)
                u=1;
            else if(ara[i]!=ara[i-1])
                u++;
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                m=1;
                count=1;
            }
            else if(ara[i]==ara[i-1])
            {
                count++;
                m=max(count,m);
            }
            else
            {
                count=1;
            }
        }
        /*for(i=1;i<=200000;i++)
        {
            if(i==1)
                max=vect[i];
            else if(vect[i]>max)
                max=vect[i];
        }*/
        //cout<<u<<" "<<m<<endl;
        if(u==m)
            cout<<m-1<<endl;
        else if(u>m)
            cout<<m<<endl;
        else
            cout<<u<<endl;
    }
    return 0;
}
