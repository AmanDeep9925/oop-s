#include <iostream>

using namespace std;

class bank
{
	long long AccNumber;
	string AccType, AccHolder;
	float balance;

public:
	bank() {
		AccHolder = "not intitalized";
		AccType   = "not intitalized";
		balance = 0;
		AccNumber = 0;
	}

	void Details() {
		cout << "\n ****** Account Holder Details ****** " << "\n " ;
		cout << "\n Account Holder : " << AccHolder ;
		cout << "\n Account Number : " << AccNumber;
		cout << "\n Account Type : " << AccType;
		cout << "\n Balance : " << balance;
		cout << "\n";
	}

	void NewAccount() {
		string name, type;

		cout << "Enter Name :" ; cin >> name;
		cout << "Enter Type : " ; cin >> type;


		AccNumber = 12345678910111;
		AccType = type;
		AccHolder = name;
		balance = 1000;

	}

	void Deposit(float amount) {
		balance += amount;

		cout << "\n Amount Credited in Account is : " << amount;
		cout << "\n Current Balance is: " << balance;
		cout << "\n";
	}

	void Withdraw(float Amount) {
		balance -= Amount;

		cout << "\n Amount Debited from Account is : " << Amount;
		cout << "\n Current Balance is: " << balance;
		cout << "\n";
	}


};



int main()
{

	bank B1;

	B1.NewAccount();
	B1.Details();

	B1.Deposit(1000);
	B1.Details();

	B1.Withdraw(1000);
	B1.Details();


}