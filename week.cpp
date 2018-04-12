#include <iostream>
#include <string.h>
using namespace std;

class week
{
	int Day_no;
	string Week[8] = {" error ",
	                  "It's Monday!!! ", "It's Tuesday!!! ",
	                  "It's Wednesday!!! ", "It's Thursday!!! ",
	                  "It's Friday!!! ", "It's Saturday!!! ",
	                  "Yeah It's Sunday!!! "
	                 };

public:
	week(int d) {

		Day_no = d;
	}

	void print_day() {
		for (int i = 1 ; i <= 7; ++i) {
			if ( i == Day_no) {
				cout << Week[i];
			}	
		}
	}

};

int main() {
	int day_no;

	cout << "\n Enter The Day Number : ";
	cin >> day_no;

	week w(day_no);

	w.print_day();
} 