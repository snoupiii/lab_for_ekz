#pragma once
class Elevator
{
private:
	int _floor = 1;
	bool _isUp = false;
	bool _isDown = false;
	bool _isStop = false;
	bool _isWork = true;

public:
	Elevator() { _floor = 1; _isStop = true; _isUp = false; _isDown = false; }
	void repair();
	void broke();
	void Up(int floor);
	void Down(int floor);
};

