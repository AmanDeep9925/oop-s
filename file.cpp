#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream file; // opening file for writing mode
	file.open("example.txt");//Creating new file.
	file << " Writing this to a file.";
	file.close();

	return 0;
}