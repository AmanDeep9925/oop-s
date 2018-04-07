
#include <iostream>
#include <math.h>
using namespace std;

class Cube
{  
public:
	inline  int cube(int num){
		return pow(num,3);
	} 	
};

int main()
{	int num;
	cout<<"Enter the number :-";
	cin>>num;
	Cube c1;
	cout<<"The cube od the number " << num << " is "<<  c1.cube(num);
}