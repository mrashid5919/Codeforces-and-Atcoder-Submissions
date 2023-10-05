//Seen editorial
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x, long long y, long long p)
{
	long long res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0) {

		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

int main()
{
    fastio;
    long long n,M=1000000007,ans;
    cin>>n;
    ans=(power(10,n,M)%M-power(9,n,M)%M)%M;
    ans=(ans-power(9,n,M)%M)%M;
    ans=(ans+power(8,n,M)%M)%M;
    cout<<(ans+M)%M<<"\n";
    return 0;
}