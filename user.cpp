#include <iostream>
#include <string>
using namespace std;
void main()
{
	char menu;
	string pass,user,pass2,user2;

	do
	{
		cout << "//////////////////Menu/////////////////\n";
		cout << " 1. Register\n";
		cout << " 2. Login\n";
		cout << " Q. Exit Program\n";
		cout << "_______________________________________\n";

		cout << " Enter Menu: ";
		cin >> menu;
		switch(menu)
		{

		case '1':
			cout << "**********Register**********\n";
			cout << " Input Username :";
			cin >> user;
			cout << " Input Password :";
			cin >> pass;
			break;
		case '2':
			cout << "***********Login***********\n";
			cout << " Input Username :";
			cin >> user2;
			cout << " Input Password :";
			cin >> pass2;
			if(user == user2 && pass == pass2)
			{
				cout << " Username or Password correct ^___^\n";
			}
			else{
				do{
				cout << " !!!!Username or Password incorrect Please try again!!!!\n";
				cout << " Input Username :";
				cin >> user2;
				cout << " Input Password :";
				cin >> pass2;
				}while(user != user2 || pass != pass2);
				cout << " Username or Password correct ^___^\n";
				}
			
			break;
		}
	}while(menu!='Q');
		cout << " Exit Program \n";

		system("pause");
}