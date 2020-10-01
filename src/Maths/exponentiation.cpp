#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define pb push_back
#define FR first
#define SC second
#define MOD 1000000007
#define LLMN LLONG_MIN
#define LLMX LLONG_MAX
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

ll power(ll a, ll n)
{
	ll res = 1;
	while(n)
	{
		if(n % 2)
			res = (res * a) % MOD;
		n /= 2;
		a = (a * a) % MOD;
	}
	return res;
}
void solve()
{
	ll n, m, k;
	cin>>n>>m;
	cout<<power(n, m)<<"\n";
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
