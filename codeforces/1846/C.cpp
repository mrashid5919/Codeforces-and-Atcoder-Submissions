#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

struct mystruct{
    long long points;
    long long penalty;
    long long id;
    mystruct(long long points,long long penalty,long long id)
    {
        this->id=id;
        this->penalty=penalty;
        this->points=points;
    }
};

bool comparator(const mystruct& lhs, const mystruct& rhs) {
    if(lhs.points==rhs.points && lhs.penalty==rhs.penalty)
        return lhs.id<rhs.id;
    if(lhs.points==rhs.points)
        return lhs.penalty<rhs.penalty;
    return lhs.points>rhs.points;
}

int main()
{
    fastio;
    long long t,n,m,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>h;
        vector<mystruct> vect;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>ara[j];
            sort(ara,ara+m);
            long long points=0,penalty=0,tm=0;
            for(j=0;j<m;j++)
            {
                if(tm+ara[j]>h)
                    break;
                tm+=ara[j];
                penalty+=tm;
                points++;
            }
            vect.push_back(mystruct(points,penalty,i));
        }
        sort(vect.begin(),vect.end(),comparator);
        for(i=0;i<n;i++)
        {
            if(vect[i].id==0)
            {
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}