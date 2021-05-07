#include<iostream>
#include<fstream>
#include<istream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<ctime>
#include<windows.h>
using namespace std;

class NAMECHECKER
{
	public:
    char Name_of_customer[100];

public:
    int POINT,MONEY;
    NAMECHECKER()
    {
        POINT=0;
        MONEY=0;
    }
    char owner[10],HA[100],pn[6],MN[11];
    int p,m;
    int DT;
    getname()
    {
        cout<<"\n\n";
        cin.ignore();
        cout<<setw(125)<<"Enter Your Full Name (Surname Your_Name Father_Name):-> ";
        cin.getline(Name_of_customer,100);
        cout<<endl<<endl;
        cout<<setw(97)<<"Enter Your Home Address:->  ";
        gets(HA);
        RE:
        cout<<"\n\n";
        cout<<setw(113)<<"Enter your Area 6 digits Pin Code Number:-> ";
        gets(pn);
        int p=strlen(pn);
        if(p!=6)
        {
        	cout<<endl;
        	cout<<"-----------------------------"<<endl;
        	cout<<setw(20)<<"OOPS!!!!!";
        	cout<<"\n-----------------------------"<<endl;
        	cout<<"||You Entered a wrong PIN CODE:||"<<endl;
        	cout<<"||Plz Enter the PIN CODE of 6 Digits Only :||"<<endl;
        	cout<<"----------------------------------------\n"<<endl;
        	goto RE;
		}
		m:
			cout<<"\n\n";
		cout<<setw(97)<<"Enter your Mobile Number:-> ";
        cin>>MN;
        int m=strlen(MN);
        if(m!=10)
        {

        				cout<<endl;
        				cout<<"-----------------------------"<<endl;
        				cout<<setw(20)<<"OOPS!!!!!";
        				cout<<"\n-----------------------------"<<endl;
        				cout<<"||You Entered a wrong MOBILE NUMBER:||"<<endl;
        				cout<<"||Plz Enter the MOBILE NUMBER of 10 Digits:||"<<endl;
        				cout<<"----------------------------------------\n"<<endl;
        				goto m;
        		}




		system("CLS");

	}
	T()
	{
        time_t tt;
        struct tm*DT;
        time(&tt);
        DT=localtime(&tt);
        Sleep(300);
        cout<<"\n"<<setw(39)<<asctime(DT);
	}


   char OWNER_NAME_GIVER()
    {

        int i,j=0,size_of_string,help=0;

        size_of_string=strlen(Name_of_customer);
        for(i=0;i<size_of_string;i++)
        {
            if(Name_of_customer[i]==' '||help==1)
            {

                help=1;
                owner[j++]=Name_of_customer[i+1];

                if(Name_of_customer[i+2]==' ')
                    break;

            }
        }
       owner[j]='\0';

    }

};

class MERCHANT: public NAMECHECKER
{
	protected:
	int Quantity1,Quantity2,Quantity3,Quantity4,Quantity5,Quantity6,Quantity7,Total;
	char FOOD_KEY;
	int CALORIE,flag,PAKEING;
	float SIZE_OF_food;
	MERCHANT()
	{
		Quantity1=0,Quantity2=0,Quantity3=0,Quantity4=0,Quantity5=0,Quantity6=0,Quantity7=0,Total=0;
	}

public:
GET_DETAIL()
{
	here:
      cout<<"\n\n";
    cout<<"Please press the given code for Food Which You Want to Order:-> \n\n"
    <<"------------------------------------------------------------------------\n"
    <<"||                            OUR MENU                                || \n"
    <<"------------------------------------------------------------------------\n"
	<<"||  Press 1 For HotDog   ||  Prize of One HotDog is   ---50 Ruppes--- || \n"
	<<"||  Press 2 For Burger   ||  Prize of One Burger is   ---49 Ruppes--- || \n"
	<<"||  Press 3 For Dabeli   ||  Prize of One Dabeli is   ---15 Ruppes--- || \n"
	<<"||  Press 4 For Vadapav  ||  Prize of One Vadapav is  ---15 Ruppes--- || \n"
	<<"||  Press 5 For puff     ||  Prize of One Puff is     ---10 Ruppes--- || \n"
	<<"||  Press 6 For Frankie  ||  Prize of One Frankie is  ---40 Ruppes--- || \n"
	<<"||  Press 7 For Sandwich ||  Prize of One Sandwich is ---30 Ruppes--- || \n"
	<<"------------------------------------------------------------------------\n\n";
	cout<<"Enter Your choice : ";
	cin>>FOOD_KEY;
	if((int)FOOD_KEY>55)
	{
		cout<<endl;
        	cout<<"-----------------------------"<<endl;
        	cout<<setw(20)<<"OOPS!!!!!";
        	cout<<"\n-----------------------------"<<endl;
        	cout<<"||You Entered a wrong Code:||"<<endl;
        	cout<<"||Plz Enter the Right Code for given food Which you Wan't to Order:||"<<endl;
        	cout<<"----------------------------------------\n"<<endl;
        	goto here;
	}

   cout<<endl;
     	if((int)FOOD_KEY==49)
     	{
     		cin.ignore();
     		cout<<"Enter the Quantity : ";
			cin>>Quantity1;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order HotDog: ||\n\n";

     	}

    	 else if((int)FOOD_KEY==50)
     	{
			cin.ignore();
			cout<<"\nEnter the Quantity : ";
			cin>>Quantity2;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Burger: ||\n\n";

     	}

     	else if((int)FOOD_KEY==51)
     	{
     		cin.ignore();
     		cout<<"\nEnter the Quantity : ";
			cin>>Quantity3;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Dabeli: ||\n\n";

     	}

     	else if((int)FOOD_KEY==52)
     	{
     		cin.ignore();
     		cout<<"\nEnter the Quantity : ";
			cin>>Quantity4;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Vadapav: ||\n\n";

    	 }
     	else if((int)FOOD_KEY==53)
     	{
     		cin.ignore();
     		cout<<"\nEnter the Quantity : ";
			cin>>Quantity5;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Puff: ||\n\n";

     	}

     	else if((int)FOOD_KEY==54)
     	{
     		cin.ignore();
     		cout<<"\nEnter the Quantity : ";
			cin>>Quantity6;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Frankie: ||\n\n";

     	}

     	else if((int)FOOD_KEY==55)
     	{
     		cin.ignore();
     		cout<<"\nEnter the Quantity : ";
			cin>>Quantity7;
			cout<<"\n";
     		cout<<setw(40)<<"|| You Are order Sandwich: ||\n\n";

     	}
	 }

};
class BILL : public MERCHANT
{
	public:
		int r;

	void bill()
	{
		if(Quantity1>0)
	{
		Sleep(300);
		cout<<"HotDog........... ";
		cout<<Quantity1;
		cout<<"  X  50  = ";
		cout<<Quantity1*50;
	}
	if(Quantity2>0)
	{
		Sleep(300);
		cout<<"\n\nBurger........... ";
		cout<<Quantity2;
		cout<<"  X  49  = ";
		cout<<Quantity2*49;
	}
	if(Quantity3>0)
	{
		Sleep(300);
		cout<<"\n\nDabeli........... ";
		cout<<Quantity3;
		cout<<"  X  15  = ";
		cout<<Quantity3*15;
	}
	if(Quantity4>0)
	{
		Sleep(300);
		cout<<"\n\nVadapav.......... ";
		cout<<Quantity4;
		cout<<"  X  15  = ";
		cout<<Quantity4*15;
	}
	if(Quantity5>0)
	{
		Sleep(300);
		cout<<"\n\nPuff............. ";
		cout<<Quantity5;
		cout<<"  X  10  = ";
		cout<<Quantity5*10;
	}
	if(Quantity6>0)
	{
		Sleep(300);
		cout<<"\n\nFrankie.......... ";
		cout<<Quantity6;
		cout<<"  X  40  = ";
		cout<<Quantity6*40;
	}
	if(Quantity7>0)
	{
		Sleep(300);
		cout<<"\n\nSandwich......... ";
		cout<<Quantity7;
		cout<<"  X  30  = ";
		cout<<Quantity7*30;
	}
	}
	total()
	{
		Sleep(300);

		Total+=(Quantity1*50)+(Quantity2*49)+(Quantity3*15)+(Quantity4*15)+(Quantity5*10)+(Quantity6*40)+(Quantity7*30);
		cout<<"\n"<<setw(13)<<Total<<" Ruppes only.... With GST  :)  ";
	}
	site()
	{
     	int i1;
		cout<<setw(62);
	    for(i1=0;i1<83;i1++)
	     cout<<"*";
	     cout<<"\n";
	    for(i1=0;i1<2;i1++)
	     cout<<setw(62)<<"*"<<setw(83)<<"*\n";
	     cout<<setw(62)<<"*"<<setw(50)<<" WELCOME TO SUNRISE HOTEL "<<setw(33)<<"*\n";
	    for(i1=0;i1<3;i1++)
	     cout<<setw(62)<<"*"<<setw(83)<<"*\n";
	     cout<<setw(62);
	    for(i1=0;i1<83;i1++)
	     cout<<"*";
	     cout<<"\n\n\n\n\n\n";

	}
	void userdata()
	{

       ofstream pf;
       pf.open("Order.txt",ios::app);
       pf<<"\n"<<setw(9);
       pf<<"\n"<<setw(35)<<" | *** Sunrise Hotel *** |\n";
       pf<<setw(9);
       pf<<"\n";

		time_t tt;
        struct tm*DT;
        time(&tt);
        DT=localtime(&tt);
        pf<<"\nTime:  "<<asctime(DT);
        pf<<"\n";

       pf<<"Name of the Customer is : "<<Name_of_customer;
       pf<<"\n\n";
       pf<<"Address of the Customer is: "<<HA;
       pf<<"\n\n";
       pf<<"Customer's MOBILE NUMBER is : "<<MN;
       pf<<"\n\n";
       pf<<"Order Given By Customer is : \n\n";

       	if(Quantity1>0)
		{
			pf<<"HotDog........... ";
			pf<<Quantity1;
			pf<<"  X  50  = ";
			pf<<Quantity1*50;
    	}
    	if(Quantity2>0)
		{
			pf<<"\n\nBurger........... ";
			pf<<Quantity2;
			pf<<"  X  49  = ";
			pf<<Quantity2*49;
		}
		if(Quantity3>0)
		{

			pf<<"\n\nDabeli........... ";
			pf<<Quantity3;
			pf<<"  X  15  = ";
			pf<<Quantity3*15;
		}
		if(Quantity4>0)
		{

			pf<<"\n\nVadapav.......... ";
			pf<<Quantity4;
			pf<<"  X  15  = ";
			pf<<Quantity4*15;
		}
		if(Quantity5>0)
		{
			pf<<"\n\nPuff............. ";
			pf<<Quantity5;
			pf<<"  X  10  = ";
			pf<<Quantity5*10;
		}
		if(Quantity6>0)
		{

			pf<<"\n\nFrankie.......... ";
			pf<<Quantity6;
			pf<<"  X  40  = ";
			pf<<Quantity6*40;
		}
		if(Quantity7>0)
		{

			pf<<"\n\nSandwich......... ";
			pf<<Quantity7;
			pf<<"  X  30  = ";
			pf<<Quantity7*30;
		}
		pf<<"\n\nTotal Money are : "<<Total<<" Rupees only :)\n\n\n";

   		 pf.close();
   		 CheckUSER();
	}

	void CheckUSER(){
		
	static int q1,q2,q3,q4,q5,q6,q7;

	 ofstream of,tf;
	 ifstream ttf;
	   ttf.open("Total Orders.txt");
       of.open("Total Items Sold.csv");

       if(!ttf){
        q1=0;
        q2=0;
        q3=0;
        q4=0;
        q5=0;
        q6=0;
        q7=0;
       }else{
       ttf>>q1;
       ttf>>q2;
       ttf>>q3;
       ttf>>q4;
       ttf>>q5;
       ttf>>q6;
       ttf>>q7;

       }
       	ttf.close();
    	tf.open("Total Orders.txt");

       tf<<q1+Quantity1<<endl;
       tf<<q2+Quantity2<<endl;
       tf<<q3+Quantity3<<endl;
       tf<<q4+Quantity4<<endl;
       tf<<q5+Quantity5<<endl;
       tf<<q6+Quantity6<<endl;
       tf<<q7+Quantity7<<endl;

			of<<"HotDog,";
			of<<q1+Quantity1<<"\n";

			of<<"Burger,";
			of<<q2+Quantity2<<"\n";

			of<<"Dabeli,";
			of<<q3+Quantity3<<"\n";

			of<<"Vadapav,";
			of<<q4+Quantity4<<"\n";

			of<<"Puff,";
			of<<q5+Quantity5<<"\n";

			of<<"Frankie,";
			of<<q6+Quantity6<<"\n";

			of<<"Sandwich,";
			of<<q7+Quantity7<<"\n";


   		 of.close();
   		 tf.close();
	}

};





int LOGIN_USER( MERCHANT CHECKER[100],int DATE,char NAME[20],int BREAKER)
{
    int i,j=0;
    for(i=0;i<BREAKER;i++)
        {
            j=0;
           if(strcmp(CHECKER[i].owner,NAME)==0)
            j++;
           if(DATE==CHECKER[i].DT)
            j++;
           if(j==2)
            return i;

        }
        return -1;

}

bool loginuser()
{

	char username[100],un[100],password[100],pw[100],st[100];
	cout<<"\n\n";
	cout<<setw(108)<<"Enter the Username : ";
	cin>>username;
	cout<<"\n\n";
	cout<<setw(108)<<"Enter the password : ";
	cin>>password;
	cout<<"\n\n";
     strcpy(st,username);
        strcat(st,"DB.txt");

	ifstream read(st);

	if(!read)
   return false;

	read>>un;
	read>>pw;

	bool c1,c2;

	c1=strcmp(pw,password);
	c2=strcmp(un,username);

	if((!c1)&&(!c2))
	{

		return true;
	 }
	 else
	 {
	 	return false;
	 }
}



int main()
{
	system("color 7c");
	int i1,ncount=0;
	char choice;

	cout<<setw(62);
    for(i1=0;i1<83;i1++)
     cout<<"*";
     cout<<"\n";
    for(i1=0;i1<2;i1++)
     cout<<setw(62)<<"*"<<setw(83)<<"*\n";
     cout<<setw(62)<<"*"<<setw(50)<<" WELCOME TO LOGIN PAGE "<<setw(33)<<"*\n";
    for(i1=0;i1<3;i1++)
     cout<<setw(62)<<"*"<<setw(83)<<"*\n";
     cout<<setw(62);
    for(i1=0;i1<83;i1++)
     cout<<"*";
     cout<<"\n\n\n\n";
     c:
     cout<<setw(88);
     for(i1=0;i1<21;i1++)
     cout<<"@";
     cout<<"\n";

     cout<<setw(109)<<"@ press 1: New User @\n";
     cout<<setw(88)<<"@"<<setw(21)<<"@\n";
	 cout<<setw(109)<<"@ press 2: Login    @\n";
	 cout<<setw(88);
     for(i1=0;i1<21;i1++)
     cout<<"@";
     cout<<"\n\n\n\n";

	 cout<<setw(107)<<"Enter your choice : ";
     cin>>choice;

    if((int)choice!=49 && (int)choice!=50)
		 {
			cout<<"\n\n";
		 	cout<<setw(118)<<" OOPS !!! you entered a wrong choice : ";
		    cout<<"\n\n\n";
		    goto c;
		}

     if((int)choice==49)
     {
     	string password;
     	char username[100],st[100];
     	cout<<"\n\n";
		cout<<setw(104)<<"Enter username : ";
     	cin>>username;
     	cout<<"\n";
     	cout<<setw(104)<<"Enter password : ";
     	cin>>password;
        strcpy(st,username);
        strcat(st,"DB.txt");
     	ofstream file(st);

     	file<<username<<endl;
     	file<<password;

     	file.close();
     	system("CLS");


	 }
	 else if((int)choice==50)
	 {
	 	bool status=loginuser();

	 	if(!status)
	 	{
	 		cout<<setw(84);
     		for(i1=0;i1<32;i1++)
    		cout<<"!";
     		cout<<"\n";
     		cout<<setw(84)<<"|"<<setw(31)<<"|";
     		cout<<"\n";
	 		cout<<setw(115)<<"|  Incorrect Login Details !!  |";
	 		cout<<"\n";
	 		cout<<setw(84)<<"|"<<setw(31)<<"|";
     		cout<<"\n";
	 		cout<<setw(84);
     		for(i1=0;i1<32;i1++)
    		cout<<"!";
     		cout<<"\n\n";

	 		goto c;
		 }
		 else
		 {
		 	cout<<setw(110)<<"Succesfully Logged in !! ";
		 	cout<<"\n\n\n";
		 	system("CLS");

		 }

	 }



	system("color f9");
   	cout<<setw(62);
    for(i1=0;i1<83;i1++)
     cout<<"*";
     cout<<"\n";
    for(i1=0;i1<2;i1++)
     cout<<setw(62)<<"*"<<setw(83)<<"*\n";
     cout<<setw(62)<<"*"<<setw(50)<<" WELCOME TO SUNRISE HOTEL "<<setw(33)<<"*\n";

    for(i1=0;i1<3;i1++)
    cout<<setw(62)<<"*"<<setw(83)<<"*\n";
     cout<<setw(62);
    for(i1=0;i1<83;i1++)
     cout<<"*";
    cout<<"\n\n\n";
     int flag=0,i=0,column,POWER=0,FLAG_HIS=0,Flag_for_SO=0,breaker=1,BACKOUT=0;

     BILL j;

    cout<<endl;

    j.getname();
    j.site();
    j.OWNER_NAME_GIVER();



             cout<<setw(77);
         	 for(i1=0;i1<48;i1++)
             cout<<"-";
             cout<<"\n\n\n";
             cout<<setw(100)<<"Hello "<<j.owner<<endl;



        cout<<"\n\n";
          cout<<setw(77);
          for(i1=0;i1<48;i1++)
            cout<<"-";
            cout<<"\n\n";


Back:
    j.GET_DETAIL();

	ro:
       cout<<setw(20);
          for(i1=0;i1<52;i1++)
            cout<<"-";
            cout<<"\n";

        cout<<setw(20)<<"|"<<setw(49)<<"Do You Want to Pack your food then press:-> 1 "<<setw(3)<<"|\n";
        cout<<setw(20)<<"|"<<setw(21)<<"or"<<setw(31)<<"|\n";
        cout<<setw(20)<<"|"<<setw(26)<<"      Order something else then press 0:->"<<setw(10)<<"|\n";
        cout<<setw(20);
          for(i1=0;i1<52;i1++)
            cout<<"-";
            cout<<"\n";
            cout<<"\n"<<setw(25)<<"-->";
      cin>>Flag_for_SO;
      if(Flag_for_SO!=0&&Flag_for_SO!=1)
      {
      		cout<<endl;
        	cout<<"-----------------------------"<<endl;
        	cout<<setw(20)<<"OOPS!!!!!";
        	cout<<"\n-----------------------------"<<endl;
        	cout<<"||You Entered a wrong Code:||"<<endl;
        	cout<<"||Plz Enter the Right Code:||"<<endl;
        	cout<<"-----------------------------\n"<<endl;
        	goto ro;

	  }
         if(!Flag_for_SO)
            goto Back;

       cout<<"\n\n";
          cout<<setw(20);


    if(Flag_for_SO)
    {
    	system("CLS");
    	system("color f4");
    	j.site();
    	Sleep(300);
    	cout<<setw(40)<<"\nYour bill is printing..........\n\n\n\n";
    	Sleep(300);
    	for(i=0;i<50;i++)
    	cout<<"=";
    	Sleep(300);
    	cout<<"\n"<<setw(35)<<"***** MY FOOD *****"<<"\n";
    	Sleep(300);
    	for(i=0;i<50;i++)
    	cout<<"=";
    	cout<<"\n";
    	Sleep(300);

    	j.T();
    	cout<<"\n";
    	Sleep(300);

    	for(i=0;i<50;i++)
    	cout<<"=";
    	cout<<"\n\n";
    	Sleep(150);

    	j.bill();
    	cout<<"\n\n\n";
		Sleep(300);

    	cout<<setw(30)<<"GRAND TOTAL";
    	cout<<"\n";
    	Sleep(300);
    	for(i=0;i<50;i++)
    	cout<<"-";

    	j.total();
    	cout<<"\n";
    	Sleep(300);

    	for(i=0;i<50;i++)
    	cout<<"-";
    	cout<<"\n";
    	cout<<"\n";
    	Sleep(300);

    	for(i=0;i<50;i++)
    	cout<<"=";
    	cout<<"\n\n";
    	Sleep(300);
    	cout<<setw(48)<<"Your Order are Delivered within HALF HOUR\n\n";
    	Sleep(300);
    	cout<<setw(43)<<"Eat Healthy And Live Healthy :) \n\n";
    	Sleep(300);
    	for(i=0;i<50;i++)
    	cout<<"=";
    	cout<<"\n\n\n\n";
    	j.userdata();
	}
	getch();
	system("CLS");
	main();
}


