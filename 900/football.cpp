#include <bits/stdc++.h>
using namespace std;

int main() {
	string team; cin >> team;
	string zeroes = "0000000";
	string ones = "1111111";

	if (team.find(zeroes) != string::npos || team.find(ones) != string::npos) {
    	cout << "YES";
	} else {
		cout << "NO";
	}
}
