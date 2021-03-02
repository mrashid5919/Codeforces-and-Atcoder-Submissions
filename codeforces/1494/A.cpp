#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,l,r,p;
    char a[100],b[100];
    char x='0';
    string abc;
    cin>>t;
    while(t--)
    {
        l=0;
        r=0;
        p=0;
        x='0';
        cin>>abc;
        n=abc.size();
        for(i=0;i<n;i++)
            a[i]='0';
        if(abc[0]==abc[n-1])
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(abc[i]==abc[0])
            {
                a[i]='(';
                //b[i]='(';
                l++;
            }
            if(abc[i]==abc[n-1])
            {
                a[i]=')';
                //b[i]=')';
                r++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(abc[i]!=abc[0] && abc[i]!=abc[n-1])
            {
                if(x=='0')
                {
                    if(l==r)
                    {
                        p=1;
                        break;
                    }
                    if(l<r)
                    {
                        x='(';
                    }
                    else
                    {
                        x=')';
                    }
                    //a[i]=x;
                }
                a[i]=x;
            }
        }
        /*for(int j=0;j<n;j++)
            cout<<a[j];
        cout<<"\n";*/
        l=0;
        r=0;
        for(i=0;i<n;i++)
        {
            if(r>l)
            {
                p=1;
                break;
            }
            if(a[i]=='(')
                l++;
            else
                r++;
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else if(l!=r)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
