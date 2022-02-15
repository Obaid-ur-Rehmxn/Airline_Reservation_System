#include<iostream>
#include<windows.h>
using namespace std;
	static int i=0 , j=0;
	string f_name[20] , l_name[20] , cnic[20] , d_ofFlight[20] , time[20] , flight[20];
	string f_name1[20] , l_name1[20] , cnic1[20] , d_ofFlight1[20] , time1[20] , flight1[20];
void design()
 
	{
		system("Color 74");
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t***********************************************************************************\n";
		cout << "\t\t\t\t\t** _____________________________________________________________________________ **\n";
		cout << "\t\t\t\t\t**|                               		                                |**\n";
		cout << "\t\t\t\t\t**|                               		                                |**\n";
		cout << "\t\t\t\t\t**|                              WELCOME TO                                     |**\n";
		cout << "\t\t\t\t\t**|                                                                             |**\n";
		cout << "\t\t\t\t\t**|                     AIRLINE RESERVATION SYSTEM                              |**\n";
		cout << "\t\t\t\t\t**|                                                                             |**\n";
		cout << "\t\t\t\t\t**|_____________________________________________________________________________|**\n";
		cout << "\t\t\t\t\t***********************************************************************************\n\n\n\n\t\t\t\t\t";
		
	
	}
	
	//Domestic Booking
void domestic(){
		
	
	string passport[20];
	string email[20];
	string	ph_num[20];
	int age[20];
	char gender[20];
	
		i++;
		cout<<"\n\n\t\t\t\t!!**INFORMATION**!!\n";
		Again1:
		cout << "\n\t\t\tFirst Name : ";
		cin >> f_name[i];				
			for(int d=0; f_name[i][d] != '\0'; d++){
				if (!((f_name[i][d] >= 'A'&& f_name[i][d] <= 'Z') || (f_name[i][d] >= 'a'&& f_name[i][d] <= 'z'))){
					cout << "\t\t\t\t!!Choose Alphabets Only!!";
					goto Again1;
				}			
			}
		Again2:
		cout << "\t\t\tLast Name : ";
		cin >> l_name[i];
		for(int d=0; l_name[i][d] != '\0'; d++){
				if (!((l_name[i][d] >= 'A'&& l_name[i][d] <= 'Z') || (l_name[i][d] >= 'a'&& l_name[i][d] <= 'z'))){
					cout << "\t\t\t\t!!Choose Alphabets Only!!\n";
					goto Again2;
				}			
			}
		cout << "\t\t\tPassport No(AA1234567) : ";
		cin >> passport[i];
		cout << "\t\t\tCNIC(xxxxx-xxxxxxx-x): ";
		cin >> cnic[i];
		cout << "\t\t\tEmail : ";
		cin >> email[i];
		cout << "\t\t\tPhone Num(0333-1234567):  ";
		cin >> ph_num[i];
		cout << "\t\t\tAge :  ";
		cin >> age[i];
		Again3:
		cout << "\t\t\tGender(M/F):  ";
		cin >> gender[i];
			if(!(gender[i] =='M' || gender[i] =='m' || gender[i] =='F' || gender[i] =='f' )){
			
			cout<<"\t\t\t\t!!Choose Valid Input!!"<<endl;
			goto Again3;			
		}
		cout << "\t\t\tDate Of Flight(DD-MM-YYYY): ";
		cin >> d_ofFlight[i];
}
			
		void flightDetails()
		{
		int dept,dest;
		cout<<"\n\n\t\t\t\t!!**FLIGHT DETAILS**!!\n";
		cout << "\n\t\t\t\t\t\t***Departure***"<<endl;
		cout << "\t\t1. Karachi		 2. Islamabad		3. Lahore		4. Quetta "<<endl;
		cout << "\t\tEnter Departure : ";
		cin >> dept;
		cout << "\n\t\t\t\t\t\t***Destination***"<<endl;
		cout << "\t\t1. Karachi		 2. Islamabad		3. Lahore		4. Quetta "<<endl;
		cout << "\t\tEnter Destination : ";
		cin >> dest;
		
	
		int a;
		if((dept==1 && dest==2) || (dept==2 && dest==1)) //condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t08:00\t\t12:00\t\tRs.10000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t14:00\t\t18:00\t\tRs.10000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t20:00\t\t23:00\t\tRs.13000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="08:00 - 12:00";
			flight[i]="PIA"; 
			}
			else if(a==2)
			{
			time[i]="14:00 - 18:00";
			flight[i]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time[i]="20:00 - 23:00";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}
			
			else if((dept==1 && dest==3) || (dept==3 && dest==1))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t07:00\t\t10:00\t\tRs.9000\t\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t13:00\t\t16:00\t\tRs.9000\t\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t21:00\t\t23:30\t\tRs.11000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="07:00 - 10:00"; 
			flight[i]="PIA";
			}
			else if(a==2)
			{
			time[i]="13:00 - 16:00";
			flight[i]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time[i]="21:00 - 23:30";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}
			
			else if((dept==1 && dest==4) || (dept==4 && dest==1))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t07:30\t\t09:00\t\tRs.7000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t14:30\t\t16:00\t\tRs.7000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t21:30\t\t22:30\t\tRs.8000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="07:30 - 09:00"; 
			flight[i]="PIA";
			}
			else if(a==2)
			{
			time[i]="14:30 - 16:00";
			flight[i]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time[i]="21:30 - 22:30";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}
			
			else if((dept==2 && dest==3) || (dept==3 && dest==2))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t06:30\t\t07:30\t\tRs.5000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t13:50\t\t14:50\t\tRs.5000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t19:10\t\t19:40\t\tRs.6000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="06:30 - 07:30"; 
			flight[i]="PIA";
			}
			else if(a==2)
			{
			time[i]="13:50 - 14:50";
			flight[i]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time[i]="19:10 - 19:40";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}
			
			else if((dept==2 && dest==4) || (dept==4 && dest==2))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t06:00\t\t10:00\t\tRs.11000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t12:30\t\t16:30\t\tRs.11000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t19:10\t\t22:30\t\tRs.13500\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="06:00 - 10:00"; 
			flight[i]="PIA";
			}
			else if(a==2)
			{
			time[i]="12:30 - 16:30";
			flight[i]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time[i]="19:10 - 22:30";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}
			else if((dept==3 && dest==4) || (dept==4 && dest==3))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t06:30\t\t09:30\t\tRs.9500\t\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t12:30\t\t15:30\t\tRs.9500\t\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t21:30\t\t23:30\t\tRs.11000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time[i]="06:30 - 09:30"; 
			flight[i]="PIA";
			}
			else if(a==2)
			{
			time[i]="12:30 - 15:30";
			flight[i]="Shaheen Airline";
			}
			else if(a==3)
			{
			time[i]="21:30 - 23:30";
			flight[i]="Air Blue";
			}
			else
			return flightDetails();
			}

        else if(dept==dest)//condition
        {
			if(dept<=4 && dest<=4){
			cout << "\n\t\tDeparture and destination can't be same.\n\t\t\t***Try again***\n\n\n" << endl;
    		flightDetails();     
	        }
	    	else if(dept>4 && dest>4){
			cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails();
	
			}

		}
			else if(dept>4 || dest>4){
			cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails();
			}
		else if(dept>4 && dest>4)
        {
            cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails();
        }
	
		}
void pay_detail()
{     	
		int choice1,cvv;
		long int card;
		string date,bank,user_id,password;
		cout<<"\n\n\t\t\t\t!!**PAYMENT METHOD**!!\n";
		cout << "\n\n\n\t\t\tHow would you like to pay?:\n";
        cout << "\n\t\t\t1. Credit Card \n\t\t\t2. Net Banking";
        cout << "\n\n\t\t\tEnter your choice: ";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\n\t\t\tEnter card no.: ";
            cin >> card;
            cout << "\n\t\t\tEnter expiry date (DD-MM-YYYY): ";
            cin >> date;
            cout << "\n\t\t\tEnter CVV no.: ";
            cin >> cvv;
            cout << "\n\t\t\t\t\t***Transaction Successful***\n";
            break;
            case 2://condition
            cout << "\t\t\t\t!!Banks Available!!\n\t\t\t 1. HBL		 2. UBL	 	3. National Bank 	4. MCB		 5. Meezan Bank";
            cout << "\n\t\t\tSelect your bank: ";
            cin >> bank;
            cout << "\n\t\t\tYou have selected: " << bank;
            cout << "\n\t\t\tEnter user id: ";
            cin >> user_id;
            cout << "\n\t\t\tEnter password: ";
            cin >> password;
            cout << "\n\t\t\t\t\t***Transaction Successful***\n";
            break;
        default://condition
            cout << "\n\t\t\tWrong input entered.\n\t\t\t\t***Try again***\n\n";
            return pay_detail();
        }
    }
void print_ticket()
	{
		static int pnr;
		pnr=i;
		cout<<"\n\n\n\t\t\t\t***Ticket Details***"<<endl;
		cout<<"\t\t\t   PNR no: "<<pnr<<endl;
		cout<<"\t\t\t   "<<f_name[i]<<" "<<l_name[i]<<endl;
		cout<<"\t\t\t   CNIC: "<<cnic[i]<<endl;
		cout<<"\t\t\t   Flight "<<flight[i]<<endl<<"\t\t\t   "<<d_ofFlight[i]<<"\t\t"<<time[i]<<endl;
		
	}
	
	
	
	//International Booking
	
	void international(){
		
	
	string passport1[20];
	string email1[20];
	string ph_num1[20];
	int age1[20];
	char gender1[20];
	
		j++;
		cout<<"\n\n\t\t\t\t!!**INFORMATION**!!\n";
		Again4:
		cout << "\n\t\t\tFirst Name : ";
		cin >> f_name1[j];
		for(int d=0; f_name1[j][d] != '\0'; d++){
				if (!((f_name1[j][d] >= 'A'&& f_name1[j][d] <= 'Z') || (f_name1[j][d] >= 'a'&& f_name1[j][d] <= 'z'))){
					cout << "\t\t\t\t!!Choose Alphabets Only!!";
					goto Again4;
				}			
			}
		Again5:
		cout << "\t\t\tLast Name : ";
		cin >> l_name1[j];
		for(int d=0; l_name1[j][d] != '\0'; d++){
				if (!((l_name1[j][d] >= 'A'&& l_name1[j][d] <= 'Z') || (l_name1[j][d] >= 'a'&& l_name1[j][d] <= 'z'))){
					cout << "\t\t\t\t!!Choose Alphabets Only!!\n";
					goto Again5;
				}			
			}
		cout << "\t\t\tPassport No(AA1234567) : ";
		cin >> passport1[j];
		cout << "\t\t\tCNIC(xxxxx-xxxxxxx-x): ";
		cin >> cnic1[j];
		cout << "\t\t\tEmail : ";
		cin >> email1[j];
		cout << "\t\t\tPhone Num(0333-1234567):  ";
		cin >> ph_num1[j];
		cout << "\t\t\tAge :  ";
		cin >> age1[j];
		Again6:
		cout << "\t\t\tGender(M/F):  ";
		cin >> gender1[j];
		if(!(gender1[j] =='M' || gender1[j] =='m' || gender1[j] =='F' || gender1[j] =='f' )){
			
			cout<<"\t\t\t\t!!Choose Valid Input!!"<<endl;
			goto Again6;			
		}
		cout << "\t\t\tDate Of Flight(DD-MM-YYYY): ";
		cin >> d_ofFlight1[j];
}
			
		void flightDetails1()
		{
		int dept,dest;
		cout<<"\n\n\t\t\t\t!!**FLIGHT DETAILS**!!\n";
		cout << "\n\t\t\t\t\t\t***Departure***"<<endl;
		cout << "\t\t1. Islamabad		 2. London		3. Dubai		4. Beijing "<<endl;
		cout << "\t\tEnter Departure : ";
		cin >> dept;
		cout << "\n\t\t\t\t\t\t***Destination***"<<endl;
		cout << "\t\t1. Islamabad		 2. London		3. Dubai		4. Beijing "<<endl;
		cout << "\t\tEnter Destination : ";
		cin >> dest;
		
	
		int a;
		if((dept==1 && dest==2) || (dept==2 && dest==1)) //condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t06:00\t\t12:00\t\tRs.50000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t08:00\t\t14:00\t\tRs.50000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t19:00\t\t01:00\t\tRs.60000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time1[j]="06:00 - 12:00";
			flight1[j]="PIA"; 
			}
			else if(a==2)
			{
			time1[j]="08:00 - 14:00";
			flight1[j]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time1[j]="19:00 - 01:00";
			flight1[j]="Air Blue";
			}
			else
			return flightDetails1();
			}
			
			else if((dept==1 && dest==3) || (dept==3 && dest==1))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t07:00\t\t10:00\t\tRs.30000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t11:00\t\t14:00\t\tRs.30000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t20:00\t\t23:00\t\tRs.32000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time1[j]="07:00 - 10:00"; 
			flight1[j]="PIA";
			}
			else if(a==2)
			{
			time1[j]="11:00 - 14:00";
			flight1[j]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time1[j]="20:00 - 23:00";
			flight1[j]="Air Blue";
			}
			else
			return flightDetails1();
			}
			
			else if((dept==1 && dest==4) || (dept==4 && dest==1))//condition
			{
			cout << "\n\t \t \t**Flights Found**" << endl << endl;
			cout << "\t\tAirline:\t\t\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
			cout << "\t\t1. PIA\t\t\t\t07:00\t\t12:00\t\tRs.40000\t\tRefundable\n";
			cout << "\t\t2. Shaheen Airline\t\t14:00\t\t19:00\t\tRs.40000\t\tRefundable\n";
			cout << "\t\t3. Air Blue\t\t\t18:00\t\t23:00\t\tRs.45000\t\tRefundable\n";
			cout << "\t\tEnter your choice : ";
			cin  >> a;
			
			if(a==1)
			{
			time1[j]="07:00 - 12:00"; 
			flight1[j]="PIA";
			}
			else if(a==2)
			{
			time1[j]="14:00 - 19:00";
			flight1[j]="Shaheen Airlines";
			}
			else if(a==3)
			{
			time1[j]="18:00 - 23:00";
			flight1[j]="Air Blue";
			}
			else
			return flightDetails1();
			}
			
			else if((dept==2 && dest==3) || (dept==3 && dest==2) || (dept==2 && dest==4) || (dept==4 && dest==2) || (dept==3 && dest==4) || (dept==4 && dest==3))//condition
			{
				cout<<"\n\t\t\t\t**!!Service Not Available!!**\n\n";
				return flightDetails1();
			}
			
			else if(dept==dest)//condition
        {
			if(dept<=4 && dest<=4){
			cout << "\n\t\tDeparture and destination can't be same.\n\t\t\t***Try again***\n\n\n" << endl;
    		flightDetails1();     
	        }
	    	else if(dept>4 && dest>4){
			cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails1();
	
			}

		}
			else if(dept>4 || dest>4){
			cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails1();
			}
		else if(dept>4 && dest>4)
        {
            cout <<"\n\t\t\tWrong input entered\n\t\t\t\t***Try again***\n\n\n" << endl;
            flightDetails1();
        }
	
		}
void pay_detail1()
{     	
		int choice1,cvv;
		long int card;
		string date,bank,user_id,password;
		cout<<"\n\n\t\t\t\t!!**PAYMENT METHOD**!!\n";
		cout << "\n\n\n\t\t\tHow would you like to pay?:\n";
        cout << "\n\t\t\t1. Credit Card \n\t\t\t2. Net Banking";
        cout << "\n\n\t\t\tEnter your choice: ";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\n\t\t\tEnter card no.: ";
            cin >> card;
            cout << "\n\t\t\tEnter expiry date (DD-MM-YYYY): ";
            cin >> date;
            cout << "\n\t\t\tEnter CVV no.: ";
            cin >> cvv;
            cout << "\n\t\t\t\t\t***Transaction Successful***\n";
            break;
            case 2://condition
            cout << "\t\t\t\t!!Banks Available!!\n\t\t\t 1. HBL		 2. UBL	 	3. National Bank 	4. MCB		 5. Meezan Bank";
            cout << "\n\t\t\tSelect your bank: ";
            cin >> bank;
            cout << "\n\t\t\tYou have selected: " << bank;
            cout << "\n\t\t\tEnter user id: ";
            cin >> user_id;
            cout << "\n\t\t\tEnter password: ";
            cin >> password;
            cout << "\n\t\t\t\t\t***Transaction Successful***\n";
            break;
        default://condition
            cout << "\n\t\t\tWrong input entered.\n\t\t\t\t***Try again***\n\n";
            return pay_detail1();
        }
    }
void print_ticket1()
	{
		static int pnr1;
		pnr1=j;
		cout<<"\n\n\n\t\t\t\t***Ticket Details***"<<endl;
		cout<<"\t\t\t   PNR no: "<<pnr1<<endl;
		cout<<"\t\t\t   "<<f_name1[j]<<" "<<l_name1[j]<<endl;
		cout<<"\t\t\t   CNIC: "<<cnic1[j]<<endl;
		cout<<"\t\t\t   Flight "<<flight1[j]<<endl<<"\t\t\t   "<<d_ofFlight1[j]<<"\t\t"<<time1[j]<<endl;
		
	}
	
void cancel_ticket()
	{
		int x;
		cout<<"\t\t\tEnter your PNR number: ";
		cin>>x;
		if(x==i){
		
		if(i!=0)
		{
			if(f_name[x]==" ")
		    cout<<"\n\t\t\t***Record not found***";
			else
			{
			cout<<"\t\t\t   "<<f_name[x]<<" "<<l_name[x]<<endl;
		    cout<<"\t\t\t   "<<cnic[x]<<endl;
		    cout<<"\t\t\t   "<<flight[x]<<endl<<"\t\t\t   "<<d_ofFlight[x]<<"\t\t"<<time[x]<<endl;
			cout<<"\n\t\tYour ticket has been cancelled and amount has been refunded ";
		    f_name[x]=" ", l_name[x]=" ", cnic[x]="\t\t\t***Record not found***", flight[x]=" ",d_ofFlight[x]=" ", time[x]=" ";
	
		}
	    }
	    else
	    {
	      	cout<<"\n\t\t\t***Record not found***";					
		}
	}
	    else
	    {
	      	cout<<"\n\t\t\t***Record not found***";					
		}
	}
	
void cancel_ticket1()
	{
		int x;
		cout<<"\t\t\tEnter your PNR number: ";
		cin>>x;
		if(x==j){	
		if(j!=0)
		{
		    if(f_name1[x]==" ")
		    cout<<"\n\t\t\t***Record not found***";
			else
			{
			
			cout<<"\t\t\t   "<<f_name1[x]<<" "<<l_name1[x]<<endl;
		    cout<<"\t\t\t   "<<cnic1[x]<<endl;
		    cout<<"\t\t\t   "<<flight1[x]<<endl<<"\t\t\t   "<<d_ofFlight1[x]<<"\t\t"<<time1[x]<<endl;
			cout<<"\n\t\tYour ticket has been cancelled and amount has been refunded ";
		    f_name1[x]=" ", l_name1[x]=" ", cnic1[x]="\t\t\t***Record not found***", flight1[x]=" ",d_ofFlight1[x]=" ", time1[x]=" ";	
		}
	    }
	    else
	    {
	    	cout<<"\n\t\t\t***Record not found***";			  		
		}
	}
	else
	    {
	    	cout<<"\n\t\t\t***Record not found***";			  		
		}
	}

void check_ticket()
{
		int x;
		cout<<"\t\t\tEnter your PNR number: ";
		cin>>x;
	if(x==i){
		if(i==0)	
		{
			cout<<"\n\t\t\t***Record not found***";
	    }
	    else
	    {
			cout<<"\t\t\t   "<<f_name[x]<<" "<<l_name[x]<<endl;
			cout<<"\t\t\t   "<<cnic[x]<<endl;
			cout<<"\t\t\t   "<<flight[x]<<endl<<"\t\t\t   "<<d_ofFlight[x]<<"\t\t"<<time[x]<<endl;
		}
	}
	else
	cout<<"\n\t\t\t***Record not found***";
}
	
void check_ticket1()
{
		int x;
		cout<<"\t\t\tEnter your PNR number: ";
		cin>>x;
	if(x==j){
		if(j==0)	
		{
			cout<<"\n\t\t\t***Record not found***";
	    }
	    else
	    {
			cout<<"\t\t\t   "<<f_name1[x]<<" "<<l_name1[x]<<endl;
			cout<<"\t\t\t   "<<cnic1[x]<<endl;
			cout<<"\t\t\t   "<<flight1[x]<<endl<<"\t\t\t   "<<d_ofFlight1[x]<<"\t\t"<<time1[x]<<endl;
		}
	}
	else
	cout<<"\n\t\t\t***Record not found***";
}

	
	
int main()
	{
		int ch1 , ch ;
		char input;
		do{
		design();
	cout << "\n\n\t\t\t1. BOOK FLIGHT \n\t\t\t2. CANCEL FLIGHT \n\t\t\t3. CHECK TICKET \n\t\t\t4. Exit" << endl;
    cout << "\n\t\t Please enter your choice: ";
    cin >> ch1;
    switch(ch1)
    {
			case 1:
    		
    			cout << "\n\n\t\t\t1. DOMESTIC FLIGHTS \n\t\t\t2. INTERNATIONAL FLIGHTS" << endl;
              	cout << "\n\t\tPlease enter your option: ";
              	cin >> ch;
              	system("cls");
    			switch(ch){
    				case 1:
    						domestic();
    						system("cls");
							flightDetails();
							system("cls");
							pay_detail();
							system("cls");
							print_ticket();
						break;
						case 2:
							international();
							system("cls");
							flightDetails1();
							system("cls");
							pay_detail1();
							system("cls");
							print_ticket1();
							
							break;
							default:
								cout << "Wrong input entered\nTry again\n\n\n" << endl;
                			    return main();
                			    
				}break;
				
			case 2:
				cout << "\n\n\t\t\t1. DOMESTIC FLIGHTS \n\t\t\t2. INTERNATIONAL FLIGHTS" << endl;
              	cout << "\n\t\tPlease enter your option: ";
              	cin >> ch;
    			system("cls");
				switch(ch){
    				case 1:
    						cancel_ticket();
								break;
						case 2:
							cancel_ticket1();
							break;
							default:
								cout << "Wrong input entered\nTry again\n\n\n" << endl;
                			    return main();
					}
					
				break;
			case 3:
				cout << "\n\n\t\t\t1. DOMESTIC FLIGHTS \n\t\t\t2. INTERNATIONAL FLIGHTS" << endl;
              	cout << "\n\t\tPlease enter your option: ";
              	cin >> ch;
              	system("cls");
    			switch(ch){
    				case 1:
    						check_ticket();
								break;
						case 2:
							check_ticket1();
							break;
							default:
								cout << "Wrong input entered\nTry again\n\n\n" << endl;
                			    return main();
					}
					
				break;
			
			case 4:
				cout<<"\n\n\t\t\t\t**!!PROJECT BY GROUP-2!!**";
				return 0;	
					
			
						
	}
	
	cout<<"\n\n\n\t\t\tDo you wish to continue(y/Y): ";
    cin >> input;
    system("cls");

	
		}while(input=='y' || input=='Y');
	cout<<"\n\n\t\t\t\t**!!PROJECT BY GROUP-2!!**";
	}

