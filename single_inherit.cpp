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

class car : public vehicle
{
	
};

int main()
{
	car obj;
}