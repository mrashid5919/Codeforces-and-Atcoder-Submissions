#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x, long long y, long long p)
{
	unsigned long long res = 1; // Initialize result

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

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, long long p)
{
	return power(n, p - 2, p);
}
unsigned long long mul(unsigned long long x,
					unsigned long long y, long long p)
{
	return x * 1ull * y % p;
}
unsigned long long divide(unsigned long long x,
						unsigned long long y, long long p)
{
	return mul(x, modInverse(y, p), p);
}
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
								long long r, long long p)
{
	// If n<r, then nCr should return 0
	if (n < r)
		return 0;
	// Base case
	if (r == 0)
		return 1;
	// if n-r is less calculate nCn-r
	if (n - r < r)
		return nCrModPFermat(n, n - r, p);

	// Fill factorial array so that we
	// can find all factorial of r, n
	// and n-r
	unsigned long long res = 1;
	// keep multiplying numerator terms and dividing denominator terms in res
	for (long long i = r; i >= 1; i--)
		res = divide(mul(res, n - i + 1, p), i, p);
	return res;
}

int main()
{
	fastio;
    long long t,n,i,cnt,M=998244353;
    unsigned long long ans,cur;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        cnt=0;
        ans=1;
        cur=1;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1]){
                cur++;
                if(i==n-1)
                {
                    if(cur>1)
                    {
                        cnt+=cur-1;
                        ans=mul(ans,nCrModPFermat(cur,cur-1,M),M);
                    }
                    cur=1;
                }
            }
            else
            {
                if(cur>1)
                {
                    cnt+=cur-1;
                    ans=mul(ans,nCrModPFermat(cur,cur-1,M),M);
                }
                cur=1;
            }
        }
        for(i=2;i<=cnt;i++)
            ans=(ans*i+M)%M;
        cout<<cnt<<" "<<ans<<"\n";
    }
	return 0;
}
