#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

// Multipath-inheritance
// If i will not use "virtual" keyword then the error will occur for ambiguity.

class Human {
public:
	void chant() {cout << "Radhe Radhe" << nl; }
};
class Developer : public virtual Human {};
class Spiritual : public virtual Human {};
class Sumon : public Developer, public Spiritual {};


void solve() {
	Sumon s;
	s.chant();
}

signed main() {
	solve();

	return 0;
}
