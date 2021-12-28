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
virtual void accept2()=0;
virtual void convert1()=0;

};
class weight:public Visibility
{
  public:
  float gm,kgm;
  void accept2()
  {
      cout<<"Enter kilograms to convert : ";
      cin>>kgm;
  }
  void convert1()
  {
     cout<<"After conversion gm = "<<kgm*1000<<" gm\n";
  }
};

class volume:public Visibility
{
   public:
   float ml,ltr;
   void accept2()
   {
       cout<<"\n Enter liter to convert : ";
       cin>>ltr;
   }
   void convert1()
   {
       cout<<"After conversion ml = "<<ltr*1000<<" ml\n";
   }
};
int main()
{
int ch;
weight w;
volume v;
do
{
   cout<<"\nEnter your choice\n";
   cout<<"1.weight\t2.volume\t3.exit\n";
   cin>>ch;
   switch(ch)
   {
     case 1: 
                                w.accept2();
                                w.convert1();
                                break;
                     
                     
     case 2: 
                    
                                  v.accept2();
                                  v.convert1();
                                  break;
                      
     default:  cout<<"Enter valid choice";
                       break;
      case 3:
      	return 0;
	                break;                 
     }
}while(ch!=3);

getch();
}
