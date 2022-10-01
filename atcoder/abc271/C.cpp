//From editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005],exist[300005];

int main()
{
    fastio;
    long long n,i,cnt=0,l,r,sold=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>=n+2)
            sold++;
        else if(exist[ara[i]])
            sold++;
        else
            exist[ara[i]]=1;
    }
    l=1;
    r=n+1;
    while(true){
		while(exist[l])l++;
		while(r!=0 && !exist[r])r--;
		if(sold>=2){
			sold-=2;
			exist[l] = 1;
		}
		else{
			if(l>=r)break;
			exist[r] = 0;
			sold++;
		}
	}

	cout<<l-1<<"\n";
    return 0;
}
