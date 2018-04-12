#include <iostream>
using namespace std;

class NUM
{
	int n;
public:
	NUM() {
		n = 0;
	}

	NUM(int a) {
		n = a;
	}

	NUM operator+(NUM &obj) {
		NUM res;
		res.n = this->n + obj.n;

		return res;
	}

	void disp() {
		cout << "the sum is :" << n;
	}

};

int main() {
	NUM n1(10);
	NUM n2(40);

	NUM ans = n1 + n2;
	ans.disp();
}