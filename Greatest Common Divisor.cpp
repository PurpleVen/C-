//53_IT_Vendra 
//WAP to find GCD of 2 nos.
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class GCD
{
 public:
 	int n1,n2,i,gcd;
 public:
 	void getdata()
 	{
 	   cout<<"Please Enter Two Integer Values:\n";
	   cin>>n1>>n2;	
	}
	void calculation()
	{
		for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		gcd=i;
	}
	}
};
  int display(GCD obj)
	{
		cout<<"\nGCD Of These Two Integers is : "<<obj.gcd;
	}
int main()
{
	GCD obj;
	obj.getdata();
	obj.calculation();
	display(obj);
}
