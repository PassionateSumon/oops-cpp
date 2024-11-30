#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Test {
private:
	int *x;
public:
	Test(int val = 0) : x{new int(val)} {}
	void setX(int val) {*x = val;}
	void print() {cout << "o/p: " << *x << nl;}
	~Test() {delete x;}

	// here need self-assignment opr. overloading for referencing issue
	Test& operator = (const Test& t) {
		if(this != &t) *x = *t.x;
		return *this;
	}
};

void solve() {
	Test t1(10);
	Test t2;
	t2 = t1;
	t1.setX(20);
	t1.print();
	t2.print();
}

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	solve();

	return 0;
}