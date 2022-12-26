#include "Elevator.h"
#include <iostream>
#include "windows.h"
using namespace std;
int diff;


void Elevator::broke()

{
	int buf;
	srand(time(NULL));
	buf = rand() % 100 + 1;
	if (buf >10)
	{
		_isWork = false;
	}
}

void Elevator::repair()
{
	if (_isWork == true)
	{
		cout << "Everything is good. Nothing to worry about" << endl;
	}
	else
	{
		cout << "The master repairs the elevator. Please wait" << endl;

		for (int i = 1; i != 10; i++)
		{
			Sleep(1500);
			cout << "Repairing... " << i * 10 << "%" << endl;
		}
		cout << "Everything is done. Good day!" << endl;
	}
}

void Elevator::Up(int floor)
{
	if (_isWork)
	{
		if (_isDown) {
			cout << "Wait, the elevator is going down" << endl;
		}
		else {
			if (floor > _floor)
			{
				diff = floor - _floor;
			}
			else if (floor < _floor)
			{
				diff = _floor - floor;
			}

			if (diff != 0)
			{
				for (diff; diff != 0; diff--)
				{
					Sleep(1000);
					cout << "." << endl;
				}
				_floor = floor;
				broke();
			}
		}
	}
	else
		cout << "Elevator is not working." << endl;

}
void Elevator::Down(int floor)
{
	if (_isWork)
	{
		if (_isDown) {
			cout << "Wait, the elevator is going down" << endl;
		}
		else {
			if (floor > _floor)
			{
				diff = floor - _floor;
			}
			else if (floor < _floor)
			{
				diff = _floor - floor;
			}

			if (diff != 0)
			{
				for (diff; diff != 0; diff--)
				{
					Sleep(1000);
					cout << "." << endl;
				}
				_floor = floor;
				broke();
			}
		}
	}
	else
		cout << "Elevator is not working." << endl;
}