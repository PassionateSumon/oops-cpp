#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

// make a class non-inhertable without using "final" keyword
// By doing 3 steps we can do it-->
/*
	1. Make another class and make its constructor private
	2. then make base class and inherit the another class as virtual
	3. make derived class and inherit base class 
*/
/*
	so rather than,
	Derived --> Base --> FinalClass
	it will be,
	Derived --> Base
	Derived --> FinalClass
	[as FinalClass is inherited virtually]**
*/


class FinalClass {
private:
	FinalClass() {}
	friend class Base; 
};

class Base : public virtual FinalClass {
public:
	Base() {}
};

class Derived : public Base  {
public:
	Derived() {}
};

void solve() {

}

signed main() {
	solve();
	return 0;
}
