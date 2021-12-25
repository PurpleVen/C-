//53_IT_Vendra
//Write a C++ program to demonstrae hybrid inheritance.
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Person
{
	protected:
		char n[20];
		int c;
		
	public:
		void getdata()
		{
			cout << "Enter Your Name: : ";
			cin >> n;
			cout << "Enter CodeNo: ";
			cin >> c;
		}
		void putdata()
		{
			cout << "\nThe Name Is: " << n;
			cout << "\nThe Code Number Is: " << c;
		}
};
class Account : public Person
{
	protected:
		char Mode[15];
		float Pay;
	public:
	    void getdata1()
		{
			cout << "\n\nEnter The Mode Of Payment: ";
			cin >> Mode;
			cout << "Enter The Amount To Pay: ";
			cin >> Pay;
		}	
		void putdata1()
		{
			cout << "\nThe Mode Of Payment Is: " << Mode;
			cout << "\nThe Amount To Pay Is: " << Pay;
		}
};
class Admin
{
	protected:
		char experience[30];
	public:
	    void getdata2()
		{
			cout << "\n\nEnter Year(s) Of Experience: ";
			cin >> experience;
		}	
		void putdata2()
		{
			cout << "The Year(s) Of Experience Is/Are: " << experience;
		}
};

class master : public Account, public Admin
{
	int total;
	public:
		void display()
		{
			cout << "\n\n=======The Details Are========";
			cout << "\nThe Name Of The Person Is: " << n;
			cout << "\nThe Code Is: " << c;
			cout << "\nThe Mode Of Payment Is: " << Mode;
			cout << "\nThe Amount To Pay Is: " << Pay;
			cout << "\nThe Year(s) Of Experience Is/Are: " << experience;
		}
};
int main()
{
	master m;
	m.getdata();
	m.putdata();
	m.getdata1();
	m.putdata1();
	m.getdata2();
	m.putdata2();
	m.display();
	getch();
}

