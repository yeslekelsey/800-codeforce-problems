// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string s; cin >> s;
		int l = 0, r = n - 1, ans = n;
		while(s[l] != s[r] && ans > 0) {
			l++;
			r--;
			ans -= 2;
		}
		cout << ans << endl;
	}
	return 0;
}
