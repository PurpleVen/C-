//53_IT_Vendra
//Write a C++ program to demonstrate multilevel inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
		private:
			char n[20];
			int a;
			
		public:
			void getdata()
			{
				cout << "Enter Your Name : ";
				cin >> n;
				cout << "Enter Your Age : ";
				cin >> a;
			}
			void putdata()
			{
				cout << "\nThe employee name is: " << n;
				cout << "\nThe employee age is: " << a;
			}
};

class Employee : public Person
{
    	protected:
    		char Designation;
    		float basic, da, da1, hra, hra1,cca, gross_salary, net_salary;
    		char designation[50];
    		
    	public:
		    void getdata2()
			{
				cout << "\n\n----Employee Details----";
				cout << "\n\nEnter Employee Designation : ";
				cin >> designation;
				
				cout<<"\nBasic Salary: ";
	            cin>>basic;
	            
	            cout << "\nDA = ";
	            cin >> da1;
	            
	            cout << "\nEnter HRA = ";
	            cin >> hra1;
	            
	            cout << "\nEnter CCA = ";
	            cin >> cca;
			}	
			
			void putdata2()
			{
				
			    da = (da1 * basic) / 100;
				hra = (hra1 * basic) / 100;
   			}
};

class Salary : public Employee
{
           	   private:
           	   	float salary;
           	   	public:
           	   		void Total_salary()
           	   		{
           	   			salary = basic + da + hra + cca; 
					}
					
					void display()
					{
						cout << "\n\nThe Total Salary Of The Employee Is : "<<salary;
					}
};
		   
int main()
{
		    Salary s;
		    s.getdata();
		    s.putdata();
		    s.getdata2();
		    s.putdata2();
		    s.Total_salary();
		    s.display();
		    
		    getch();
}	


