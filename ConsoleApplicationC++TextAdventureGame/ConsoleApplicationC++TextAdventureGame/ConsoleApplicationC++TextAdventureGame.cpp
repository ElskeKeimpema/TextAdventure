// ConsoleApplicationC++TextAdventureGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

enum Places {
	Basement = 0,
	GreenField = 1,
	Village = 2,
	Church = 3,
	Farm = 4,
	Exit = 5
};


void ShowWelcomeScene(string playerName, string stringFromwelcomeToLevel1playerinput, const string stringFromwelcomeToLevel1, Places places);
void ShowLevel1(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers);
void ShowLevel2(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers);
void ShowLevel3(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers);
void ShowLevel4(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers);
void AfterPlayingMenu(Places places, int choicePlayer, bool& isAlive);
void Destination(Places places);

string levels[] = {"Level 1", "Level 2", "Level 3","Level 4"};
int levelNumbers = 0;
	
bool isAlive = true;
string playerName;
Places places;
int choicePlayer = 0;
string stringFromwelcomeToLevel1playerinput = "Please type 'start' to start the game!";
const string stringFromwelcomeToLevel1 = "start";
int age;


int main()
{
//  StartScene
	cout << "Hello, could you enter your name, please?\n";
	cin >> playerName;
//  Go to WelcomeScene
	places = Basement;
	Destination(places);
    return 0;

}

void ShowWelcomeScene(string playerName, string stringFromwelcomeToLevel1playerinput, const string stringFromwelcomeToLevel1, Places places) {
//  Welcome text
	cout << endl << "Welcome " << playerName << ",\n\n";
	cout << "You are walking in to your brothers 'lab'. Or better said the basement." << endl << "You are accidentally trapped in his time machine.\n";
	cout << "Someone turned it on and you could be in a totally other time now.\n\n";
//  Player input to start the game
	cout << stringFromwelcomeToLevel1playerinput << endl;
	cin >> stringFromwelcomeToLevel1playerinput;
	cout << endl;

	if (stringFromwelcomeToLevel1 == stringFromwelcomeToLevel1playerinput) {
		places = GreenField;
		Destination(places);
	}
}
 
void ShowLevel1(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers) {
	cout << age;
//	Level 1 text
	cout << levels[levelNumbers] << endl << endl;
//  Story	
	cout << "You open the door and you are in the middle of a green field.\n" << "On your left side there is a church and behind that there is a whole village.\n";
	cout << "On your right side there is a forest.\n" << "It is beginning to get darker and darker.\n";
//	Choice menu	
	cout << "Do you go left or do you go right?\n\n";
	cout << "1. Left in to the village\n" << "2. Right in to the forest\n\n";
	cin >> choicePlayer;
	cout << endl;
//  Choice 1
	if (choicePlayer == 1) {
		places = Village;
		Destination(places);
	}
// Choice 2
	else if (choicePlayer == 2) {
		cout << "When you enter the forest, it doesn't take more than a few minutes before you are surrounded by wolves.\n" << "Or better said, your wolvefood.\n" << "You died!\n ";
		isAlive = false;
		AfterPlayingMenu(places, choicePlayer, isAlive);
	}
}

void ShowLevel2(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers) {
//  Level 2 text
	levelNumbers ++;
	cout << levels[levelNumbers] << endl << endl;
//  Story
	cout << "You are now in the village, it is getting late.\n" << "You need to talk to someone.\n\n";
	cout << "The lights in the church are turned on and you can see a silhouette of a man through the window\n" << "You also see a tavern.\n";
//  Choice menu
	cout << "Are you going to talk to the person in the church or are you going to look for someone in the tavern?\n\n";
	cout << "1. I'll look for someone to talk to in the tavern\n" << "2. I'm going to talk to the person in the church\n\n";
	cin >> choicePlayer;
	cout << endl;
//	Choice 2
	if (choicePlayer == 2) {
		places = Church;
	Destination(places);
	}
// Choice 1
	else if (choicePlayer == 1) {
		cout << "You take your first step in to the tavern and your first step in a gun fight.\n" << "One of the shooting men missed his enemy, but totally hit you.\n\n" << "You died!\n\n";
		isAlive = false;
		AfterPlayingMenu(places, choicePlayer, isAlive);
	}
}

void ShowLevel3(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers) {
//	Level 3 text
	levelNumbers ++;
	cout << levels[levelNumbers] << endl << endl;
//	Story
	cout << "You walk to the church and talk to the person.\n" << "It seems a nice person.\n";
	cout <<"You can stay over at his farmhouse.\n\n";
	cout << "The next day you start at work.\n"<<"There are a few things to get used to but it is going pretty well.\n" << "In the afternoon, when the sun stands low, there come a few man with revolvers in their hands.\n\n";
//	Choice menu	
	cout << "What do you do stay where you are?\n" << "Or are you fighting back?\n\n"; 
	cout << "1. I'll stay where I am\n" << "2. I'll fight back\n\n"; 
	cin >> choicePlayer;
	cout << endl;
//	Choice 2
	if (choicePlayer == 2) {
		places = Farm;
		Destination(places);
		
	}
//  Choice 1
	else if (choicePlayer == 1) {
		cout << "Well, standing where you were wasn't the best option. They hit you with a bullit as soon as they saw you. \n" << "The thieves left with all the animals. The farmer has nothing left.\n" << "You died!\n\n";
		isAlive = false;
		AfterPlayingMenu(places, choicePlayer, isAlive);
	}
}

void ShowLevel4(int choicePlayer, bool& isAlive, Places places, string levels[], int& levelNumbers) {
//	Level 4 text
	levelNumbers ++;
	cout << levels[levelNumbers] << endl << endl;
//	Story
	cout << "Because you fought back, you've saved the livestock.\n" << "The farmer offers you to take the rest of the day off.\n\n";
	cout << "You look around the farm and at the green field where you decided to enter the village.\n" << "You see something glimmering in the light of the sun.\n" << "You pick it up.";
	cout << "It seems to be the missing handle of the door of the time machine.\n" << "You only need to add that and get it to work again.\n\n";
	cout << "You add the handle to the door and step in to the time machine.\n" << "You close the door and look to the different broken cables.\n" << "You see three different colors a blue one, a green one and a yellow one.\n\n";
//	Choice menu	
	cout << "Which combination do you chose?\n\n";
	cout << "1. I'll chose the blue one and the green one\n" << "2. I'll chose the green one and the yellow one.\n\n";
	cin >> choicePlayer;
	cout << endl;

//	Choice 1
	if (choicePlayer == 1) {
		AfterPlayingMenu(places, choicePlayer, isAlive);
    }
//	choice 2
	else if (choicePlayer == 2) {
		cout << "You choose the wrong combination!\n" << "Electricity is dangerous when you don't know what you are doing.\n" << "You died!\n\n";
		isAlive = false;
		AfterPlayingMenu(places, choicePlayer, isAlive);
	}
}
void AfterPlayingMenu (Places places, int choicePlayer, bool& isAlive) {
//  Winning
	if (isAlive)
		cout << "Congratulations you won.\n" << "You are back in your own time!\n\n";

//	Choice menu
	cout << "Do you want to play again?\n\n" << "1. Yes\n" << "2. No\n\n";
	cin >> choicePlayer;
	isAlive = false;
//	Choice 1
	if (choicePlayer == 1) {
		isAlive = true;
		levelNumbers = 0;
		places = Basement;
		Destination(places);
	}
//	Choice2
	else if (choicePlayer == 2)
		isAlive = false;
		places = Exit;
		cout << "Thank you for playing!\n\n";
}

void Destination(Places places) {
//	Switch levels while alive
	age = 10;
	do {
		switch (places) {

		case Basement:
			ShowWelcomeScene(playerName, stringFromwelcomeToLevel1playerinput, stringFromwelcomeToLevel1, places);
			break;

		case GreenField:
			ShowLevel1(choicePlayer, isAlive, places, levels, levelNumbers);
			break;

		case Village:
			ShowLevel2(choicePlayer, isAlive, places, levels, levelNumbers);
			break;
			
		case Church:
			ShowLevel3(choicePlayer, isAlive, places, levels, levelNumbers);
			break;

		case Farm:
			ShowLevel4(choicePlayer, isAlive, places, levels, levelNumbers);
			break;

		case Exit:
			isAlive = true;
			break;


		}
	} while (isAlive == true);
}