#include <iostream>
using namespace std;

class Prime_or_Comp
{	int num;
	bool count = false;
public:
	void CheckPrime() {
		cout << "Enter number to check whether Prime or Not :-";
		cin >> num;

		for (int i = 2; i < num; ++i)
		{
			if (num % i == 0) {
				count = true ;
				break;
			}
		}

		if (count == false )
		{
			cout << "Entered number is prime ";
		}

		else
		{
			cout << " Entered number is not prime ";
		}
	}

	bool CheckComposite() {
		cout << "Enter number to check whether Composite or Not :-";
		cin >> num;

		if (num <= 1 || num <= 3)
			return false ;

		if (num % 2 == 0 || num % 3 == 0)
			return true ;
		for (int i = 5; i * i < num; i += 6)
			if (num % 5 == 0 || num % (i + 2 ) == 0)
				return true;

		return false;
	}

};

int main()
{
	Prime_or_Comp Check;
	// Check.CheckPrime();
	cout << boolalpha << Check.CheckComposite();

}
