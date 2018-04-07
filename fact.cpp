#include <iostream>
using namespace std;

class fact
{	int Num, ans;
public:
	void Fact()
	{
		ans = 1;
		cout << "\n Enter The Number whose factorial is to be calculated :";
		cin >> Num;
		for (int i = 1; i <= Num; ++i)
		{
			ans = ans * i; 
		}
	}

	void Output(){
		cout << " the factorail of the " << Num << " is :- " << ans;
	}
};

int main()
{
	fact f1;
	f1.Fact();
	f1.Output();
}