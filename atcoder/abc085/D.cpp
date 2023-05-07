// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long a[100005],b[100005];

int main() {
    long long n,h,i,sum=0,cnt=0;
    cin>>n>>h;
    vector<pair<long long,long long> > vect;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        vect.push_back(make_pair(a[i],2LL));
        vect.push_back(make_pair(b[i],1LL));
    }
    sort(vect.begin(),vect.end());
    for(i=vect.size()-1;i>=0;i--)
    {
        if(vect[i].second==1)
        {
            sum+=vect[i].first;
            cnt++;
            if(sum>=h)
                break;
        }
        else
        {
            if((h-sum)%vect[i].first==0)
            {
                cnt+=(h-sum)/vect[i].first;
            }
            else
                cnt+=1+(h-sum)/vect[i].first;
            break;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}