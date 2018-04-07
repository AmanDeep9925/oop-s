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

class Bus: public vehicle
{
public:
	
};

class car: public vehicle
{
public:
	
};

int main()
{
	car obj1;
	Bus obj2;
	return 0;
}