#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Demo {
	int x;
public: 
	Demo() {}
	Demo(int val) : x{val} {}
	// friend void setX(Demo&, int);
	// friend int get(Demo&);
	friend class FriendDemo;
};

class FriendDemo {
public:
	void setX(Demo& obj, int x) {obj.x = x;}
	int get(Demo& obj) {return obj.x;}
};

// void setX(Demo& obj, int x) {obj.x = x;}
// int get(Demo& obj) {return obj.x;}


void solve() {
	Demo d(3);

	FriendDemo f;
	cout << f.get(d) << nl;
	f.setX(d, 7);
	cout << f.get(d) << nl;

	// cout << get(d) << nl;
	// setX(d, 7);
	// cout << get(d);
}

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	solve();

	return 0;
}
