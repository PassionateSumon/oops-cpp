#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

// This is runtime-polymorphism / Dynamic binding / Lazy binding
// It has to achieve using "virtual funtion" and "pointer/reference"


class Base {
public:
	// void print(int x) {cout << "Sumon-base" << nl;}
	virtual void print(int x) {cout << "Sumon-base" << nl;}
};

class Derived : public Base {
public:
	void print(int x) override {cout << "Sumon-derived" << nl;}
};


void solve() {
	// By pointer -->
	// Base *b = new Derived();
	// b->print(1);

	// By reference -->
	Derived d;
	Base &b = d;
	b.print(3);
}

signed main() {
	solve();
	return 0;
}
