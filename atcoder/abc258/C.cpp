#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x,a,b,c=0;
    string s;
    cin>>n>>x;
    cin>>s;
    //n=s.size();
    while(x--)
    {
        cin>>a>>b;
        if(a==1)
        {
            c+=b;
        }
        else
        {
            if((b-1-c)%n<0)
                cout<<s[n+(b-1-c)%n]<<"\n";
            else
                cout<<s[(b-1-c)%n]<<"\n";
        }
            //cout<<c<<" "<<c%n<<"\n";
            //cout<<s[b-1-abs(c%n)]<<"\n";
    }
    return 0;
}
