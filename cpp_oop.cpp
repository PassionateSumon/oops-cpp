#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Demo {
public:
	int a,b;
	Demo(int a, int b) {
		this->a = a;
		this->b = b;
	}
	Demo operator +(const Demo& d) {
		return Demo(this->a+d.a, this->b+d.b);
	}
	void print() {
		cout << this->a << "+" << this->b << "i";
	}
};

// real img 
// 3+2i + 4+5i

void solve() {
	Demo d1(5,2);
	Demo d2(2,3);
	Demo d3 = d1 + d2; // d1+(d2)
	d3.print();
}

signed main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	// int t=1; cin>>t;
	// while(t--)
	solve();

	return 0;
}
