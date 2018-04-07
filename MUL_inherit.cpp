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

class FourWheeler
{
public:
	FourWheeler() {
		cout << "This is a Four Wheeler" << endl;
	}
};

class car : public vehicle, public FourWheeler
{

};

int main()
{
	car obj;
}