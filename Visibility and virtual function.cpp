//53_IT_Vendra
/*
   Write a program  in C++ to understand visibility data members of base calss in derived class 
   in public, protected and private inheritance.
   Write a pure virtual function to convert litres to millilitres and kilograms to grams.
  
*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Visibility
{
private:
virtual void getdata() = 0;
virtual void printdata() = 0;

};
class Kilogram:public Visibility
{
  public:
  float gm,kgm;
  void getdata()
  {
      cout<<"\nEnter kilograms to convert : ";
      cin>>kgm;
  }
  void printdata()
  {
     cout<<"\nConverted To gms = "<<kgm*1000<<" gm\n";
  }
};

class Litre:public Visibility
{
   public:
   float ml,ltr;
   void getdata()
   {
       cout<<"\nEnter liter to convert : ";
       cin>>ltr;
   }
   void printdata()
   {
       cout<<"\nConverted to ml = "<<ltr*1000<<" ml\n";
   }
};
int main()
{
int ch;
Kilogram k;
Litre l;
do
{
   cout<<"\nEnter your choice:\n";
   cout<<"1.Convert kgm to km\n2.Convert Ltr to ml\n3.Exit\n\n";
   cin>>ch;
   switch(ch)
   {
     case 1: 
         k.getdata();
         k.printdata();
         break;
                     
                     
     case 2: 
          l.getdata();
		  l.printdata();
		  break;
                      
     default:  
	      cout<<"Enter valid choice";
          break;
      case 3:
      	  return 0;                
     }
}while(ch!=3);
getch();
}
