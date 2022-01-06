//53_IT_Vendra
/*Create the class employee with salary as private member. 
  The class should have two public methods namely, getsalary and printsalary. 
  getsalary for taking salary input from user and printsalary for printing the salary. 
  Create the object of the class and access both the methods and display salary.*/
#include<iostream>
using namespace std;
class Employee{
	private:
		char name[20], id[2];
		double salary;
	public:
	void getsalary(){
		cout << "-----Please Give The Employee Details-----";
		cout << "\n\nEnter Employee Name: ";
		cin >> name;
		cout << "Enter Employee ID: ";
		cin >> id;
		cout << "Enter Employee Salary: ";
		cin >> salary;
	}	
	void printsalary(){
		cout << "\n-----Employee Details-----";
		cout << "\n\nEmployee Name: " << name;
		cout << "\nEmployee ID: " << id;
		cout << "\nEmployee Salary: " << salary;
	}
};
int main(){
	Employee Emp;
	Emp.getsalary();
	Emp.printsalary();
	return 0;
}
