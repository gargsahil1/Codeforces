#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

    ll n;
    cin >> n;

    ll ans = 0;

    ll value = 0;

    for(ll i= 0; i<n; i++)
    {
      value = i^(i+1);
      ans += __builtin_popcountll(value);
    }



	}

  return 0;
}
