// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

int main() {
	int n;
	cin >> n;
	string words;
	for(int i = 0; i < n; i++) {
	    cin >> words;
	    int inner_number = words.length() -2;
	    if (words.length() > 10) {
	       words.replace(1, words.length() -2,to_string(inner_number));
	    }
	    cout << words << endl;
	}
	
}
