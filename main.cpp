#include <bits/stdc++.h>
#define fathurwithyou ios::sync_with_stdio(false); cin.tie(0); 

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll fact(ll n){
	ll f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

void solve() {
	map<char, ll> str;
    string s; cin >> s;
    ll len = s.size();
    ll res = fact(len);
    for (int i = 0; i < len; i++){
    	str[s[i]]++;
	}
	for (auto x : str){
		cout << x.first << ": " << x.second << "\n";
		res /= fact(x.second);
	}
	cout << res;
    return;
}

int main() {
	fathurwithyou
    solve();
    return 0;
}
