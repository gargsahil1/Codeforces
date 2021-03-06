#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, q;
  cin >> n >> q;

  // vector<ll> dq(n);
	deque <ll> dq;

  ll maxpos = 0, maxele = INT_MIN;

	ll temp;

  for(ll i = 0; i<n; i++)
  {
    cin >> temp;
		dq.push_back(temp);

    if(temp > maxele)
    {
			maxele = temp;
			maxpos = i;
		}
  }

	unordered_map<ll , pair<ll,ll> > mp;

	ll a, b;

  for(ll i = 0; i<n; i++)
  {
    a = dq.front();
    dq.pop_front();
    b = dq.front();
    dq.pop_front();

    mp[i] = {a,b};

    dq.push_back(min(a,b));
    dq.push_front(max(a,b));
  }

	vector<ll> pattern;

	ll maxo = dq.front();
	dq.pop_front();

	while(!dq.empty())
	{
		temp = dq.front();
		pattern.push_back(temp);
		dq.pop_front();
	}

	ll patternsize = pattern.size();

	while(q--)
	{
		if(q<=n)
			cout << mp[q].first << " " << mp[q].second << "\n";

		else
			cout << maxo << " " << pattern[q%patternsize] << "\n";
	}

  return 0;

}
