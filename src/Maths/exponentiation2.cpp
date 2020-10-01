#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define pb push_back
#define FR first
#define SC second
#define MOD 1000000007
#define LLMN LONG_LONG_MIN
#define LLMX LONG_LONG_MAX
#define LDMX LDBL_MAX
#define LDMN LDBL_MIN
#define MAX 1000010
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

ll fastPow(ll a, ll n, ll m)
{
	ll res = 1;
	while(n > 0)
	{
		if(n % 2)
			res = (res * a) % m;
		n /= 2;
		a = (a * a) % m;
	}
	return res;
}
void solve()
{
	ll a, b, c;
	cin>>a>>b>>c;
	ll y = fastPow(b, c, MOD - 1);
	cout<<fastPow(a, y, MOD)<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
