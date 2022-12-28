#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mn,mx;
    char x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"! "<<1<<" "<<1<<endl;
            continue;
        }
        for(i=1;i<=n/2;i++)
        {
            cout<<"? "<<2*i-1<<" "<<2*i<<endl;
            cin>>x;
            if(x=='=')
            {
                if(i==1)
                {
                    mn=1;
                    mx=1;
                }
                else
                {
                    cout<<"? "<<mn<<" "<<2*i<<endl;
                    cin>>x;
                    if(x=='>')
                        mn=2*i;
                    cout<<"? "<<mx<<" "<<2*i<<endl;
                    cin>>x;
                    if(x=='<')
                        mx=2*i;
                }
            }
            else if(x=='>')
            {
                if(i==1)
                {
                    mn=2;
                    mx=1;
                }
                else
                {
                    cout<<"? "<<mx<<" "<<2*i-1<<endl;
                    cin>>x;
                    if(x=='<')
                        mx=2*i-1;
                    cout<<"? "<<mn<<" "<<2*i<<endl;
                    cin>>x;
                    if(x=='>')
                        mn=2*i;
                }
            }
            else
            {
                if(i==1)
                {
                    mn=1;
                    mx=2;
                }
                else
                {
                    cout<<"? "<<mn<<" "<<2*i-1<<endl;
                    cin>>x;
                    if(x=='>')
                        mn=2*i-1;
                    cout<<"? "<<mx<<" "<<2*i<<endl;
                    cin>>x;
                    if(x=='<')
                        mx=2*i;
                }
            }
        }
        if(n%2==1)
        {
            cout<<"? "<<mn<<" "<<n<<endl;
            cin>>x;
            if(x=='>')
                mn=n;
            cout<<"? "<<mx<<" "<<n<<endl;
            cin>>x;
            if(x=='<')
                mx=n;
        }
        cout<<"! "<<mn<<" "<<mx<<endl;
    }
    return 0;
}
