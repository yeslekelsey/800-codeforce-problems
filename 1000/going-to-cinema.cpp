#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tt; cin >> tt;
	while(tt--) {
		int n; cin >> n;
		vector<int> people(n);
		for(int i = 0; i < n; i++) {
			cin >> people[i];
			
		}
		sort(people.begin(), people.end());
		int answer = 0;
		for (int k = 0; k <= n; k++) { 
			if(k == 0 || people[k - 1] < k) { //check whether first k elements are all smaller than k
				if(k == n || people[k] > k) {
					answer += 1;
				}
			}
		}
		cout << answer << endl;
	}
}
