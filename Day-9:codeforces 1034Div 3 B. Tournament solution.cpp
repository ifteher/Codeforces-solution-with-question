#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n, j, k; cin >> n >> j >> k;
		vector<int> a(n);
		for(auto &x : a) cin >> x;

		if(k == 1
			&& a[j-1] != *max_element(a.begin(), a.end())) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}

	return 0;
}
