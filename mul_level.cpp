#include <iostream>
using namespace std;

class vehicle
{
public:
	vehicle()
	{
		cout << "This is a Vehicle" << endl;
	}

};

class FourWheeler : public vehicle
{
public:
	FourWheeler() {
		cout << "Object with 4 wheels are vehicle" << endl;
	}
};

class car : public FourWheeler
{
public:
	car()
	{
		cout << "Car has 4 wheels";
	}

};

int main()
{
	car obj;
}