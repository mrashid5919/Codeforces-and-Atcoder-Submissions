#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,k;
    string s,temp,fin;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        k=1;
        fin=s;
        for(i=2;i<=n;i++)
        {
            temp=s.substr(i-1,n-1);
            string x=s.substr(0,i-1);
            if((n-i+1)%2==0)
                temp.append(x);
            else
            {
                reverse(x.begin(),x.end());
                temp.append(x);
            }
            //cout<<temp<<"\n";
            if(temp.compare(fin)<0)
            {
                k=i;
                fin=temp;
            }
        }
        cout<<fin<<"\n";
        cout<<k<<"\n";
    }
    return 0;
}
