#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

int main()
{
    fastio;
    long long q,op,x,head=0,tail=0;
    vector<long long> vect;
    cin>>q;
    while(q--)
    {
        cin>>op;
        if(op==1)
        {
            cin>>x;
            vect.push_back(tail);
            tail+=x;
        }
        else if(op==2)
            head++;
        else if(op==3)
        {
            cin>>x;
            cout<<vect[head+x-1]-vect[head]<<"\n";
        }
    }
    return 0;
}