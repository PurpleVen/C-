//53_IT_Vendra
//Write a C++ program to demonstrate single inheritance.
#include<conio.h>
#define LEN 20
#include<string.h>
#include<iostream>
using namespace std;

class Train
{
	protected:
		int train_no;
		int seats_first;
		int seats_second;
		int seats_third;
		
	public:
	    Train(int tr, int f, int s, int t)  //parameterised constructor
		{
			train_no = tr;
			seats_first = f;
			seats_second = s;
			seats_third = t;
		}	
		
		void total_seats(){
			cout << "\n\nTotal seats : ";
			cout << "\n\nTrain No      First Class      Second Class        Third Class";
			cout << "\n" << train_no << "\t\t" <<seats_first << "\t\t" << seats_second << "\t\t" << seats_third;
		}
};

class reservation : public Train
{
    protected:
        int booked_first;
        int booked_second;
        int booked_third;
        
    public:
    	reservation(int bf, int bs, int bt, int a , int b, int c, int d) : Train(a,b,c,d)
        {
        	booked_first = bf;
        	booked_second = bs;
        	booked_third = bt;
		}
		
		void booked();
		void cancel(int x, int y);
		void disp_status();

	    	
};

void reservation :: disp_status()   
{
	cout << "\nTrain No : " << train_no;
	cout << "\nBooked in first class: " <<booked_first;
	cout << "\nBooked in second class: " <<booked_second;
	cout << "\nBooked in third class: " <<booked_third;
}


int main()
{
	int tr_no, f,s,t,bf,bs,bt,cl,a,b,c,seats;
	float d;
	cout << "\nEnter train no: ";
	cin >> tr_no;
	cout << "\nEnter total seats in first class: ";
	cin >> f;
	cout << "\nEnter total seats in second class: ";
	cin >> s;
	cout << "\nEnter total seats in third class: ";
	cin >> t;
	Train t1(tr_no,f,s,t);
	t1.total_seats();
	//Now to book seats
	do{
		cout << "\n\nIn which class you want to book seats?(1-3): \n\n";
		cin >> cl;
		if(cl>3 || cl<1)
		  cout << "\nEnter no between 1 and 3";
	}while(cl>3 || cl<1);
	cout << "\nHow many seats to book: ";
	cin >> seats;
	switch(cl)
	{
		case 1:
			bf=seats;
			bs=bt=0;
			break;
		
		case 2:
		    bs=seats;
			bf=bs=0;
			break;
			
		case 3:
		    bt=seats;
			bf=bs=0;		
	}
	reservation r(bf,bs,bt,tr_no,f,s,t);
	r.disp_status();
	return 0;
	
}
