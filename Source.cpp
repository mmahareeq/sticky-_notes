
		/***********************************************
Project Title: Sticky Notes
This project is an application where multiple users can store their notes on the computer, then retrieve them.
Done by : Rahmeh Tartouri && Mariam Mahariq
17/07/2019
************************************************/

#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
	int number;
	string firstName ,  lastName , fileName , outdata ;
	
	ifstream userfile;
	
	bool rest = true ;
	while(rest)
	{	
		cout << " Welcome to the brand new “Sticky Notes”!\n Here is the list of operation this program offers:\n1- Add new user\n2- Add new note\n3- View notes for a specific user\n4- Exit "  <<  endl;

		cout << " Enter the number : ";
		cin >> number;
		// choose a number from the main menu
		switch (number)
			 {
				 case 1: 
					
					break;
				case 2:
					  

					break;

				 case  3:
				 
					 cout << "Retrieve your notes? Absolutely!"  << endl << "Please let know your  full name first: ";
					 cin.get();
                                          getline(cin,fileName);
					 fileName =  fileName + ".txt" ;
					 userfile.open(fileName.c_str());  // open file                   
					 if (userfile.fail()) // Check if file exists

						 {
							cout <<" Umm, can’t find any saved notes for you. "<< endl;
						 }
					 else
						{
						 cout << "Found it!"<<endl;
						 cout << " Here are your stored notes: " << endl << " ------------------------ " << endl;
						 while(!userfile.eof())
						 { 

						 getline( userfile , outdata);
						 cout <<  endl <<outdata << endl;
						 }
						 cout <<" ------------------------  "<< endl;
						 cout << " Happy to serve you :) " << endl;


						 }		

					 break;

				 case 4:
					 return 1;

					 break;
					
				 default:
						;





			 }


	}




	system("pause");
	return 0;

}
