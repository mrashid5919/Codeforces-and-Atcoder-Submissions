#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,cnt,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        vector<int> vect;
        for(i=0;i<n;i++)
        {
            cin>>x;
            vect.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            if(i==0 && vect[n-1]==vect[1])
            {
                cnt++;
            }
            else if(i==n-1 && vect[n-2]==vect[0])
            {
                cnt++;
            }
            else if(vect[i-1]==vect[i+1])
                cnt++;
        }
        if(cnt==n)
            cout<<n/2+1<<"\n";
        else
            cout<<n<<"\n";
    }
    return 0;
}
