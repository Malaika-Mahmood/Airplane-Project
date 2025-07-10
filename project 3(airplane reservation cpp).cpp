#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void MainMenu();
    
	
class Management
{
	public:
		Management()
		{
			MainMenu();
		}
};
class Details
{
	public:
    static int customerId;
    static string name;
	static string gender;
	static int age;
	static string phoneNo;

	
	public:
	void getInfo()
	{
	cout<<"Enter Customer Id : "<<endl;
	cin>>customerId;
	cout<<"Enter your Name : "<<endl;
	cin>>name;
	cout<<"Enter Your Age : "<<endl;
	cin>>age;
	cout<<"Enter your Gender : "<<endl;
	cin>>gender;
	cout<<"Enter Your Phone Number : "<<endl;
	cin>>phoneNo;
	cout<<endl;
	cout<<"WE SAVED YOUR INFO"<<endl;

}
};
int Details::customerId;
int Details::age;
string Details::name;
string Details::gender;
string Details::phoneNo;

class Registration
{
    public:
    static int choice;
    int option;
    static int charges;
    public:
    void showFlights()
    {
    cout<<"___Register Your Ticket____"<<endl;
    string Array[]={"London","Dubai","Turkey","Japan","Iraq"};
    for(int i=0;i<5;i++)
    {
    cout<<(i+1)<<".flight to "<<Array[i]<<endl;    
    }
    cout<<endl;
    cout<<"WELCOME TO AIRBLUE AIRLINES"<<endl;
    cout<<'\n';
    cout<<"Choose the Number To Flight Towards : "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"_____WELCOME TO LONDON AIRLINES____"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"YoUr ComForTs Are oUr piRiORITy.Enjoy Your Journey!"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"These Are The Flights"<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"1.LON-408"<<endl;
        cout<<"Departure 6:30 PM, Arrival 6:00 AM (next day), Duration 7h 30m, Price 50000Rs"<<endl;
        cout<<"2.LON-558"<<endl;
        cout<<"Departure 2:00 AM, Arrival 6:10 AM, Duration 7h 10m, Price 75000Rs"<<endl;
        cout<<"3.LON 601"<<endl;
        cout<<"Departure 9:00 AM, Arrival 9:45 AM, Duration 1h 45m, Price 12450Rs"<<endl;
        cout<<"___________________________________________________________________________"<<endl;
        cout<<"Select The Suitable Option For Yourself"<<endl;
        cin>>option;
        if(option==1)
        {
        	charges=50000;
            cout<<"You Have Successfully Booked A Flight LON 408"<<endl;
        }
        else if(option==2)
        {
        	charges=75000;
             cout<<"You Have Successfully Booked A Flight LON 558"<<endl;

        }
       else if(option==3)
       {
       	charges=12450;
         cout<<"You Have Successfully Booked A Flight LON 601"<<endl;
       }
       break;
       
      case 2:
      cout<<"_____WELCOME TO DUBAI AIRLINES____"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"YoUr ComForTs Are oUr piRiORITy.Enjoy Your Journey!"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"These Are The Flights"<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"1.DUB-213"<<endl;
        cout<<"Departure 6:30 PM, Arrival 6:00 AM (next day), Duration 7h 30m, Price 45000Rs"<<endl;
        cout<<"2.DUB-789"<<endl;
        cout<<"Departure 2:00 AM, Arrival 6:10 AM, Duration 7h 10m, Price 48000Rs"<<endl;
        cout<<"3.DUB 456"<<endl;
        cout<<"Departure 9:00 AM, Arrival 9:45 AM, Duration 1h 45m, Price 12000Rs"<<endl;
        cout<<"___________________________________________________________________________"<<endl;
        cout<<"Select The Suitable Option For Yourself"<<endl;
        cin>>option;
        if(option==1)
        {
        	charges=45000;
            cout<<"You Have Successfully Booked A Flight  DUB-213"<<endl;
        }
        else if(option==2)
        {
        	charges=48000;
             cout<<"You Have Successfully Booked A Flight DUB-789"<<endl;

        }
       else if(option==3)
       {
       	charges=12000;
         cout<<"You Have Successfully Booked A Flight DUB 456"<<endl;
       }
        break;
       
       case 3:
       cout<<"_____WELCOME TO  TURKEY AIRLINES____"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"YoUr ComForTs Are oUr piRiORITy.Enjoy Your Journey!"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"These Are The Flights"<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"1.TUR-333"<<endl;
        cout<<"Departure 6:30 PM, Arrival 6:00 AM (next day), Duration 7h 30m, Price 70,550Rs"<<endl;
        cout<<"2.TUR-222"<<endl;
        cout<<"Departure 2:00 AM, Arrival 6:10 AM, Duration 7h 10m, Price 91,300Rs"<<endl;
        cout<<"3.TUR 111"<<endl;
        cout<<"Departure 9:00 AM, Arrival 9:45 AM, Duration 1h 45m, Price 12,450Rs"<<endl;
        cout<<"___________________________________________________________________________"<<endl;
        cout<<"Select The Suitable Option For Yourself"<<endl;
        cin>>option;
        if(option==1)
        {
        	charges=70550;
            cout<<"You Have Successfully Booked A Flight  TUR 333"<<endl;
        }
        else if(option==2)
        {
        	charges=91300;
             cout<<"You Have Successfully Booked A Flight TUR 222"<<endl;

        }
       else if(option==3)
       {
       	charges=12450;
         cout<<"You Have Successfully Booked A Flight TUR 111"<<endl;
       }
        break;
       
       case 4:
       
       
       cout<<"_____WELCOME TO JAPAN  AIRLINES____"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"YoUr ComForTs Are oUr piRiORITy.Enjoy Your Journey!"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"These Are The Flights"<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"1.JAP 000"<<endl;
        cout<<"Departure 6:30 PM, Arrival 6:00 AM (next day), Duration 7h 30m, Price 49000"<<endl;
        cout<<"2.JAP 090"<<endl;
        cout<<"Departure 2:00 AM, Arrival 6:10 AM, Duration 7h 10m, Price 28000"<<endl;
        cout<<"3.JAP 080"<<endl;
        cout<<"Departure 9:00 AM, Arrival 9:45 AM, Duration 1h 45m, Price 14000"<<endl;
        cout<<"___________________________________________________________________________"<<endl;
        cout<<"Select The Suitable Option For Yourself"<<endl;
        cin>>option;
        if(option==1)
        {
        	charges=49000;
            cout<<"You Have Successfully Booked A Flight  JAP 000"<<endl;
        }
        else if(option==2)
        {
        	charges=28000;
             cout<<"You Have Successfully Booked A Flight JAP 090"<<endl;

        }
       else if(option==3)
       {
       	charges=14000;
         cout<<"You Have Successfully Booked A Flight JAP 080"<<endl;
       }
        break;
       
   case 5:
   
   
   cout<<"_____WELCOME TO IRAQ AIRLINES____"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"YoUr ComForTs Are oUr piRiORITy.Enjoy Your Journey!"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"These Are The Flights"<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"1.IRQ 311"<<endl;
        cout<<"Departure 6:30 PM, Arrival 6:00 AM (next day), Duration 7h 30m, Price 14000"<<endl;
        cout<<"2.IRQ 211"<<endl;
        cout<<"Departure 2:00 AM, Arrival 6:10 AM, Duration 7h 10m, Price 30000Rs"<<endl;
        cout<<"3.IRQ 411"<<endl;
        cout<<"Departure 9:00 AM, Arrival 9:45 AM, Duration 1h 45m, Price 22000Rs"<<endl;
        cout<<"___________________________________________________________________________"<<endl;
        cout<<"Select The Suitable Option For Yourself"<<endl;
        cin>>option;
        if(option==1)
        {
        	charges=14000;
            cout<<"You Have Successfully Booked A Flight  IRQ 311"<<endl;
        }
        else if(option==2)
        {
        	charges=30000;
             cout<<"You Have Successfully Booked A Flight IRQ 211"<<endl;

        }
       else if(option==3)
       {
       	charges=22000;
         cout<<"You Have Successfully Booked A Flight IRQ 411"<<endl;
       }
        break;
       
    }
    }
    
    
}; 
int Registration::charges;
int Registration::choice;

class Ticket:public Details,public Registration
{
    public:
    
    
      string destination=" ";
      char arr[100];
    void writeFile() {
        ofstream F1("Reservations.txt");
        if (!F1) {
            cerr << "ERROR: Unable to open file for writing." << endl;
            return;
        }

        F1 << "CUSTOMER ID: " << customerId << endl;
        F1 << "NAME: " << name << endl;
        F1<<  "AGE : "<<age<<endl;
        F1 << "GENDER: " << gender << endl;
        F1 << "PHONE NUMBER: " << phoneNo << endl;
       if(Registration::choice==1)
        {
            destination="LONDON";
        }
        else if(Registration::choice==2)
        {
            destination="DUBAE";
        }
         else if(Registration::choice==3)
        {
            destination="TURKEY";
        }
         else if(Registration::choice==4)
        {
            destination="JAPAN";
        }
         else if(Registration::choice==5)
        {
            destination="IRAQ";
        }
        F1<<"Destination  : "<<destination<<endl;
        F1<<"Charges      : "<<Registration::charges<<endl;
        

        F1.close(); 
    }
    void DisplayBill() {
    	cout<<"________________TICKET________________"<<endl;
        ifstream file("Reservations.txt");
        if (!file) {
            cerr << "ERROR! Permission denied or file not found." << endl;
            return;
        }
        while(!file.eof())
        {
        	file.getline(arr,100);
        	cout<<arr<<endl;
		}
        file.close();
    }
    
};
void MainMenu()
{   
	cout<<"____________AIR BLUE AIRLINES_____________"<<endl;
	cout<<endl<<endl;
	cout<<"--------------MAIN MENU-------------------"<<endl;
	cout<<endl;cout<<endl;
	cout<<"____________________________________________________________"<<endl;
	cout<<"|press 1 for CUSTOMER DETAILS                              |"<<endl;
    cout<<"|press 2 for FLIGHT REGISTRATIONS                          |"<<endl;
    cout<<"|press 3 for TICKET AND CHARGES                            |"<<endl;
    cout<<"____________________________________________________________"<<endl;	
	int backChoice;
	int choice;
	cout<<"Enter Your Choice : "<<endl;
	cin>>choice;
	Details detail;
	Registration registration;
	Ticket ticket;
	switch(choice)
	{
		case 1:
			detail.getInfo();
			cout<<"Press 1 To Go To MeNu : "<<endl;
			cin>>backChoice;
			if(backChoice==1)
			{
				MainMenu();
			}
			break;
			
		case 2:
		   registration.showFlights();
		   cout<<"Press 1 To Go To MeNu : "<<endl;
			cin>>backChoice;
			if(backChoice==1)
			{
				MainMenu();
			}
		   break;
			
	     case 3:
	     
		    ticket.writeFile();	
			ticket.DisplayBill();
			cout<<"Press 1 To Go To MeNu : "<<endl;
			cin>>backChoice;
			if(backChoice==1)
			{
				MainMenu();
			}	
		}	
	
}


int main()
{
	Management M;
}

