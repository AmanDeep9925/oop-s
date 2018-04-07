#include <iostream>
using namespace std;

// base class

class vehicle
{
public:
	vehicle()
	{
		cout << "This is a Vehicle" << endl;
	}
	
};

//base class

class fare
{int fa = 50;
public:
	fare(){
		cout<<"Fare of Vehicle: "<<fa;
	}
	
};

class car : public vehicle
{
public:
	
};

class Bus : public vehicle,public fare
{
public:
		
};

int main()
{
	Bus obj1;
}