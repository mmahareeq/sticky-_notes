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
  // declaring variable
  int number;
	string firstName ,  lastName , fileName, outdata, note;
	ofstream userFile; 
        ifstream userfile;
	time_t tt; 
	struct tm * ti;
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
		               cout << " Welcome aboard new user! "  <<  endl  <<  " Please let me know your first name : ";
			       cin >> firstName;
				cout << " Great " << firstName << " , now please enter your last name : ";
				cin >> lastName; 
				cout << " Done! "  <<  endl;
				cout << " Nice to meet you " << firstName << " " << lastName << endl << endl;
				cout << " <Click Enter to return to main menu> " << endl;
				fileName = firstName + " " + lastName +  ".txt" ; //crate file name
				userFile.open ( fileName ); //open file using user name 
		        break;

	         case 2:

                                   cout << " Let’s add a new note ... " << endl;
					cout << " Please enter your full name first : ";
					cin.get();
                                        getline(cin,fileName);
					fileName = fileName + ".txt" ;
					userFile.open(fileName , ios::app);
					if (!userFile.fail())
					   {
						cout << " Your record is found, I’m now opening your file …. " << endl;
						cout << " Ready! " << endl;
						cout << " Please enter your note: " << endl;
						// Read a line from standard input in str 
					     
						 cin.get(); 
						
						getline(cin, note);

						// Applying time() 
						time(&tt);

						// Using localtime() 
						ti = localtime(&tt);

						/*cout << "Current Day, Date and Time is = "
							<< asctime(ti);*/
						userFile <<asctime(ti)<< note << endl ;
						userFile.close();


					   }
					else
					   {

						cout << " Oh! Sorry the user name was not found, please check the name again and if this is your first time here, please go ahead and create a new user from the main menu ... " << endl;
						

					   }

				    

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

