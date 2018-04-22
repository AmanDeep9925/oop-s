#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string line;
	ifstream file;
	file.open("example.txt");
	if (file.is_open())
	{
		while(getline(file,line))
			{
				cout << line <<  "\n";		
			}
	file.close();
	}
	// file << " Writing this to a file.";
else
	cout<<"\n Unable to open file";
	return 0;
}