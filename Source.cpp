/**********************************************
Project Title: Sticky Notes
This project is an application where multiple users can store their notes on the computer, then retrieve them.
Done by : Rahmeh Tartouri && Mariam Mahariq
17/07/2019
***********************************************/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int number;
	string firstName ,  lastName , fileName;
	ofstream UserFile;

	cout << " Welcome to the brand new �Sticky Notes�!\n Here is the list of operation this program offers:\n1- Add new user\n2- Add new note\n3- View notes for a specific user\n4- Exit "  <<  endl;

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
					fileName = firstName + "-" + lastName +  ".txt" ; //crate file name
					UserFile.open ( fileName ); //open file using user name 
				    break;

	         case 2:

		            break;

	         case  3:

		            break;

	         case 4:
		            return 1;
		            break;

	         default:
		            ;





	     }







	system("pause");
	return 0;

}