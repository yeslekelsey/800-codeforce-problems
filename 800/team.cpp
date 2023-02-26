// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, v, t;
    int problems = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if(p==1 && v==1) {
            problems++;
        } else if(p==1 && t==1) {
            problems++;
        } else if(v==1 && t==1) {
            problems++;
        } else {
        }
    }
    cout << problems;
}
