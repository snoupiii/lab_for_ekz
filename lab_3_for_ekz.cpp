#include <iostream>
#include "windows.h"
#include "Elevator.h"
using namespace std;

int max_floor = 6, min_floor = 1;




int main()
{
	Elevator* lp = new Elevator();

	int choose, floor, fl;
f:
	cout << "On what floor you are?"; cin >> fl;
	if (fl > max_floor)
	{
		cout << "You can't be higher than the top floor" << endl;
		goto f;
	}
	system("cls");

	do
	{	
		cout << "You are on the " << fl << endl;
		cout << "Select one number" << endl;
		cout << "1. Button up" << endl;
		cout << "2. Button down" << endl;
		cout << "3. Calling the elevator master" << endl;
		

		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Choose the floor you need"; cin >> fl;
			if (fl > max_floor)
			{
				cout << "You can't go above the top floor";
				break;
			}
			lp->Up(fl);
			break;
		case 2:
			cout << "Choose the floor you need"; cin >> fl;
			if (fl < min_floor)
			{
				cout << "You can't go below the botton floor";
				break;
			}
			lp->Down(fl);
			break;
		case 3:
			lp->repair();
			break;
			
		}
	} while (choose != 6);


}