#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,x,i,mn,z,tmp,j;
    string s;
    cin>>t;
    while(t--)
    {
        z=0;
        cin>>n;
        cin>>s;
        if(n==2)
        {
            if(s[0]=='0')
                cout<<s[1]<<"\n";
            else
                cout<<s<<"\n";
        }
        else if(n==3)
        {
            if(s[0]=='0' || s[2]=='0')
                cout<<0<<"\n";
            else
            {
                int ara[10];
                for(i=0;i<3;i++)
                    ara[i]=s[i]-'0';
                cout<<min(ara[0]+ara[1]*10+ara[2],min(ara[0]*(ara[1]*10+ara[2]),min((ara[0]*10)+ara[1]+ara[2],(ara[0]*10+ara[1])*ara[2])))<<"\n";
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                    z++;
            }
            if(z>0)
            {
                cout<<0<<"\n";
                continue;
            }
            for(i=0;i<n-1;i++)
            {
                long long y=(s[i]-'0')*10+(s[i+1]-'0'),tmp=0;
                for(j=0;j<n;j++)
                {
                    if(j==i)
                    {
                        if(i>0)
                        {
                            if(tmp*y<tmp+y)
                                tmp*=y;
                            else
                                tmp+=y;
                        }
                        else
                            tmp+=y;
                        j++;
                        continue;
                    }
                    if(j==0)
                    {

                        if(s[j]=='1')
                        {
                            if(i==1)
                            {
                                tmp=y;
                                j+=2;
                            }
                            else
                            {
                                tmp+=s[1]-'0';
                                j++;
                            }
                        }
                        else
                            tmp+=s[j]-'0';
                    }
                    else if(s[j]!='1')
                        tmp+=s[j]-'0';
                }
                if(i==0)
                    mn=tmp;
                else
                    mn=min(mn,tmp);
            }
            cout<<mn<<"\n";
        }
    }
    return 0;
}