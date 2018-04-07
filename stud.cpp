#include  <iostream>
#include <string.h>
using namespace std;

class bio_data
{
	string name, sem, branch, Class;
	int roll_no;

public:

	bio_data()
	{
		name = "mot mentioned";
		Class = "not mentioned";
		branch = "not mentioned";
		roll_no = 0;
	}


	void Details_in()
	{
		cout << "\n ENTER THE STUDENT DETAILS AS :";
		cout << "\n Student's Name :";
		cin >> name;
		cout << "\n Student's Semester :";
		cin >> sem;
		cout << "\n Student's Branch :";
		cin >> branch;
		cout << "\n Student's Roll_No :";
		cin >> roll_no;
	}

	void Details_out() {
		cout << "\n THE STUDENT DETAILS Are AS :";
		cout << "\n Student's Name :";
		cout << name;
		cout << "\n Student's Semester :";
		cout << sem;
		cout << "\n Student's Branch :";
		cout << branch;
		cout << "\n Student's Roll_No :";
		cout << roll_no;

	}
};

class Sessional1
{
public:
	float sub1, sub2, sub3, sub4, sub5, sub6;
	Sessional1() {
		sub1 = sub2 = sub3 = sub4 = sub5 = sub6 = 0.0;
	}

	void getmarks1()
	{
		cout << "\n ENTER THE MARKS IN SESSIONAL 1 OUT OF 100:";
		cout << "\n Enter the marks in subject 1 :";
		cin >> sub1;
		cout << "\n Enter the marks in subject 2:";
		cin >> sub2;
		cout << "\n Enter the marks in subject 3:";
		cin >> sub3;
		cout << "\n Enter the marks in subject 4:";
		cin >> sub4;
		cout << "\n Enter the marks in subject 5:";
		cin >> sub5;
		cout << "\n Enter the marks in subject 6:";
		cin >> sub6;
	}

};

class Sessional2
{
public:
	float Sub1, Sub2, Sub3, Sub4, Sub5, Sub6;
	Sessional2() {
		Sub1 = Sub2 = Sub3 = Sub4 = Sub5 = Sub6 = 0.0;
	}

	void getmarks2()
	{
		cout << "\n ENTER THE MARKS IN SESSIONAL 2 OUT OF 100:";
		cout << "\n Enter the marks in subject 1 :";
		cin >> Sub1;
		cout << "\n Enter the marks in subject 2:";
		cin >> Sub2;
		cout << "\n Enter the marks in subject 3:";
		cin >> Sub3;
		cout << "\n Enter the marks in subject 4:";
		cin >> Sub4;
		cout << "\n Enter the marks in subject 5:";
		cin >> Sub5;
		cout << "\n Enter the marks in subject 6:";
		cin >> Sub6;
	}

};


class final_result : public Sessional1, public Sessional2, public bio_data
{
public:
	float avg_Ses1, avg_Ses2, per1, per2;
	final_result() {
		avg_Ses2 = avg_Ses1 = per1 = per2 = 0.0;

	}

	void result()
	{

		avg_Ses1 = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6;

		avg_Ses2 = (Sub1 + Sub2 + Sub3 + Sub4 + Sub5 + Sub6) / 6;

		per1 = avg_Ses1 ;

		per2 = avg_Ses2 ;

		cout << "\n Percentage marks in Sessional 1 are : " << per1;

		cout << "\n Percentage marks in Sessional 2 are : " << per2;

	}


};

int main()
{
	final_result stud;

	stud.Details_in();

	stud.Details_out();

	stud.getmarks1();

	stud.getmarks2();
	stud.result();
	return 0;
}