#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main()
{
	string yes_no; // Yes/No - If this == "Y" then start the game.
	string action; // What you want to do whilst playing.
	string gulagaction; // What action you decide to take in the gulag.
	int money = 5; // Amount of bread.
	int mined = 0; // Amount mined.
	int gulagmined = 0; // Amount mined in the gulag.
	const int founded = 1922; // Year the soviet union was founded.
	int answer; // Compare this to founded.

	system("Color C"); // Color Light Red
	cout << "Welcome to Soviet Russia simulator!\n";
	cout << "Version 1.0 | Comrade Evgeniy\n\n";
	cout << "Begin? (y/n): ";
	cin >> yes_no; // If this == Y then start.
	if (yes_no == "y")
	{
		cout << "Welcome to Moscow, Russia.\n\n";
		cout << "Mandatory Question: (When was the soviet union founded?): ";
		cin >> answer;
		if (answer == founded)
		{
			cout << "Good, you may begin working.\n\n";
		}
		else
		{
			cout << "You have been sentenced to the gulag!\n\n";
			cout << "You must mine 50 ore to be released.\n\n";
			do {
				cout << "Mine or Sleep (mine/sleep): ";
				cin >> gulagaction;
				if (gulagaction == "mine")
				{
					cout << "You begin mining...\n\n";
					Sleep(1000);
					gulagmined = gulagmined + 1;
					cout << "You have mined 1 iron ore, you now have " << gulagmined << " ore.\n\n";
				}
				if (gulagaction == "sleep")
				{
					cout << "You are not permitted to sleep!\n\n";
				}
				if (gulagaction == "asdf")
				{
					gulagmined = 50;
				}
			} while (gulagmined < 50);
			cout << "You have been released from the gulag...\n\n";
			Sleep(1000);
		}
		do {
			cout << "Balance: " << money << " bread" << " | " << mined << " mined\n\n";
			cout << "What would you like to do (farm/mine/eat/sleep/exit): ";
			cin >> action;
			if (action == "farm")
			{
				cout << "You begin farming...\n\n";
				Sleep(1000);
				money = money + 1;
				cout << "You have earned 1 piece of bread!\n\n";
			}
			else if (action == "eat")
			{
				cout << "You begin eating...\n\n";
				Sleep(1000);
				money = money - 1;
				cout << "You have consumed 1 piece of bread.\n";
			}
			else if (action == "mine")
			{
				cout << "You begin mining...\n\n";
				Sleep(1000);
				mined = mined + 1;
				cout << "You have mined 1 iron ore, you have contributed to the state!\n\n";
			}
			else if (action == "sleep")
			{
				cout << "You get some rest...\n\n";
				Sleep(3000);
				money = 5;
				cout << "You wake up, feeling energized!\n\n";
			}
			if (money < 1)
			{
				cout << "You have died...\n";
				break;
			}
		} while (action == "farm" || action == "mine" || action == "eat" || action == "sleep");
	}
	else
	{
		cout << "You have failed us, comrade!\n\n";
	}

	cout << "Do svidaniya...\n\n";
	system("pause");
	return 0;
}
