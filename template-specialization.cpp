#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

// Template specialization -->

// Normal template behaviour -->
template<typename T>
T addElements(const vector<T>& nums) {
	T ans = 0;
	for(auto& v: nums) {
		ans += v;
	}
	return ans;
}

// This is for the special template behaviour --> 
template<>
string addElements(const vector<string>& nums) {
	int ans = 0;
	for(const string& s: nums) {
		for(const char& ch: s) {
			ans += ch;
		}
	}

	// ostringstream ostr;
	// ostr << ans;
	// string res = ostr.str();
	// return res;

	return to_string(ans);
}


void solve() {
	vector<int> a = {1,2,3,4,5};
	cout << addElements(a) << nl;
	vector<double> d = {1.1,2.2,3.3,4.4,5.5};
	cout << addElements(d) << nl;
	vector<string> s = {"ab"}; // 97+98 should be the ans
	cout << addElements(s) << nl;
}

signed main() {
	solve();
	return 0;
}
