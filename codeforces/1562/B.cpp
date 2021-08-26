//Incomplete
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,r0,r1,r2,p,s;
    string num;
    cin>>t;
    while(t--)
    {
        r0=0;
        r1=0;
        r2=0;
        s=0;
        p=0;
        cin>>n;
        cin>>num;
        for(i=0;i<n;i++)
        {
            if(num[i]=='1' || num[i]=='4' || num[i]=='6' || num[i]=='8' || num[i]=='9')
            {
                p=1;
                cout<<1<<"\n";
                cout<<num[i]<<"\n";
                break;
            }
        }
        if(p==1)
            continue;
        for(i=1;i<n;i++)
        {
            if(num[i]=='2' || num[i]=='5')
            {
                p=1;
                cout<<2<<"\n";
                cout<<num[0]<<num[i]<<"\n";
                break;
            }
        }
        if(p==1)
            continue;
        for(i=0;i<n;i++)
        {
            int x=(num[i]-'0')%3;
            if(x==0)
                r0++;
            else if(x==1)
                r1++;
            else
                r2++;
        }
        if(r1>=1 && r2>=1)
        {
            cout<<2<<"\n";
            for(i=0;i<n;i++)
            {
                if(p==1)
                    break;
                if((num[i]-'0')%3==2)
                {
                    cout<<num[i];
                    for(int j=i+1;j<n;j++)
                    {
                        if((num[j]-'0')%3==1)
                        {
                            cout<<num[j]<<"\n";
                            p=1;
                            break;
                        }
                    }
                }
                else if((num[i]-'0')%3==1)
                {
                    cout<<num[i];
                    for(int j=i+1;j<n;j++)
                    {
                        if((num[j]-'0')%3==2)
                        {
                            cout<<num[j]<<"\n";
                            p=1;
                            break;
                        }
                    }
                }
            }
        }
        if(p==1)
            continue;
        if(r0>=2)
        {
            cout<<2<<"\n";
            cout<<33<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(num[i]=='7')
                s++;
        }
        if(s>=2)
        {
            cout<<2<<"\n";
            cout<<77<<"\n";
            continue;
        }
    }
    return 0;
}
