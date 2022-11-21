#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,x;
    cin>>t;
    while(t--)
    {
        vector<int> vect;
        for(i=0;i<3;i++)
        {
            cin>>x;
            vect.push_back(x);
        }
        sort(vect.begin(),vect.end());
        cout<<vect[1]<<"\n";
    }
    return 0;
}
