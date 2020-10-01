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
#define MAX 1000000
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vl >
#define vb vector<bool>
#define vbb vector< vb >
#define vpl vector<pll>
#define vpll vector< vpl >

void dijikstra(ll src, vpll &adj, vl &dist)
{
	priority_queue< pll, vpl, greater<pll> > pq;
	dist[src] = 0;
	pq.push({dist[src], src});

	while(pq.size())
	{
		pll x = pq.top();
		pq.pop();
		if(x.FR > dist[x.SC])
			continue;

		for(auto it : adj[x.SC])
		{
			ll u = x.SC;
			ll v = it.FR;
			ll wt = it.SC;

			if(dist[u] + wt < dist[v])
			{
				dist[v] = dist[u] + wt;
				pq.push({dist[v], v});
			}
		}
	}

}
void solve()
{
	ll n, m ,k;
	cin>>n>>m;
	vpll adj(n), adjrev(n);
	for(ll i = 0; i < m; i++)
	{
		ll u, v, w;
		cin>>u>>v>>w;
		u--;v--;
		adj[u].pb({v, w});
		adjrev[v].pb({u, w});
	}

	vl dist(n, LLMX);
	vl dist2(n, LLMX);
	
	dijikstra(0, adj, dist);
	dijikstra(n - 1, adjrev, dist2);

	ll res = LLMX;
	for(ll u = 0; u < n; u++)
	{
		for(auto it : adj[u])
		{
			ll wt = it.SC;
			ll v = it.FR;

			if(dist[u] != LLMX && dist2[v] != LLMX)
				res = min(res, (dist[u] + dist2[v] + wt / 2));
		}
	}
	cout<<res;
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t = 1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
