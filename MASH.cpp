/*
File Name: program2.cpp
    Author: Mohammed Alturki
    Date: October 5, 2020
    Purpose: : creating the game M.A.S.H.
*/
#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
    //variables
    bool play;
    int choice;
    int children1,children2,children3;    //integer numbers between 1 and 100
    int salary1,salary2,salary3;          //integer numbers between 10000 and 500000
    int randHouse, randSpouse, randChildren; 
    int randLocation, randJob, randCompOrRest, randSalary;
	int numChildren, finalSalary, randCar;
    string car1,car2,car3;
    string name1,name2,name3;           
    string location1,location2,location3;
    string job1,job2,job3;
    string compOrRest1,compOrRest2,compOrRest3;
    string house, spouse, finalLocation;
	string finalJob, finalCompOrRest, finalCar;

    //starting menu
    cout << endl << endl;
    cout << "Pick from the following menu:" << endl;
    cout << "1.   Let's play MASH!" << endl;
    cout << "2.   End program." << endl;
    cin >> choice;

    //validation of user input
    while(choice != 1 && choice != 2){
        cout << "Invalid choice. Select 1 or 2." << endl;
        cin >> choice;
    }
    //set play to true or false
    switch (choice){
        case 1:
            play = true;
            cout << "You chose to play MASH!" << endl << endl;
            break;
        case 2:
            play = false;
            cout << "You chose to end the program." << endl << "Bye!" << endl;
            break;
    }
    //body of game, start running when play is true
    while(play){
        //user input with number validation
        cout << "Enter in one person you like: ";
        cin.ignore();
        getline(cin, name1);
        cout << "Enter in another person you like: ";
        getline(cin, name2);
        cout << "Enter in a person you hate: ";
        getline(cin, name3);
        cout << endl;
        
        cout << "Enter three numbers between 1 and 100, separated by a space." << endl;
        cin >> children1;
        cin >> children2;
        cin >> children3;  
        //checking if the user input is in range
        while(children1 < 1 || children1 > 100){
			cout << "Number one was an invalid number." << endl;
			cout << "Please enter a number between 1 and 100." << endl;
			cin >> children1;
        }
		while(children2 < 1 || children2 > 100){
			cout << "Number two was an invalid number." << endl;
			cout << "Please enter a number between 1 and 100." << endl;
			cin >> children2;
		}
		while(children3 < 1 || children3 > 100){
			cout << "Number three was an invalid number." << endl;
			cout << "Please enter a number between 1 and 100." << endl;
			cin >> children3;
		}
        cout << endl;

        cin.ignore();
        cout << "Enter in one city, state you like: ";
        getline(cin, location1);
        cout << "Enter in another city, state you like: ";
        getline(cin, location2);
        cout << "Enter in one city, state you hate: ";
        getline(cin, location3);
        cout << endl;

        cout << "Enter in an awesome job title: ";
        getline(cin, job1);
        cout << "Enter in another awesome job title: ";
        getline(cin, job2);
        cout << "Enter in the worst job title ever: ";
        getline(cin, job3);
        cout << endl;

        cout << "Enter a company or restaurant you like: ";
        getline(cin, compOrRest1);
        cout << "Enter another company or restaurant you like: ";
        getline(cin, compOrRest2);
        cout << "Enter a company or restaurant you hate: ";
        getline(cin, compOrRest3);
        cout << endl;

        cout << "Enter three numbers between 10,000 and 500,000, separated by a space." << endl;
        cin >> salary1;
        cin >> salary2;
        cin >> salary3;
        //checking if the user input is in range
        while(salary1 < 10000 || salary1 > 500000){
			cout << "Number one was an invalid number." << endl;
			cout << "Please enter a number between 10,000 and 500,000." << endl;
			cin >> salary1;
		}
		while(salary2 < 10000 || salary2 > 500000){
			cout << "Number two was an invalid number." << endl;
			cout << "Please enter a number between 10,000 and 500,000." << endl;
			cin >> salary2;
		}
		while(salary3 < 10000 || salary3 > 500000){
			cout << "Number three was an invalid number." << endl;
			cout << "Please enter a number between 10,000 and 500,000." << endl;
			cin >> salary3;
		}
        cout << endl;

        cin.ignore();
        cout << "Enter in a car that you like: ";
        getline(cin, car1);
        cout << "Enter in another car that you like: ";
        getline(cin, car2);
        cout << "Enter in a car that you hate: ";
        getline(cin,car3);
        cout << endl;

        //to generate random number each time
		srand(time(0));
		randHouse = rand()%(4-1+1)+1;
		randSpouse = rand()%(3-1+1)+1;
		randChildren = rand()%(3-1+1)+1;
		randLocation = rand()%(3-1+1)+1;
		randJob = rand()%(3-1+1)+1;
		randCompOrRest = rand()%(3-1+1)+1;
		randSalary = rand()%(3-1+1)+1;
		randCar = rand()%(3-1+1)+1;
		//Switch statements to decide what will be the results
		switch(randHouse){
			case 1:
				house = "mansion";
				break;
			case 2:
				house = "apartment";
				break;
			case 3:
				house = "shack";
				break;
			case 4:
				house = "house";
		}
		switch(randSpouse){
			case 1:
				spouse = name1;
				break;
			case 2:
				spouse = name2;
				break;
			case 3:
				spouse = name3;
		}
		switch(randChildren){
			case 1:
				numChildren = children1;
				break;
			case 2:
				numChildren = children2;
				break;
			case 3:
				numChildren = children3;
		}
		switch(randLocation){
			case 1:
				finalLocation = location1;
				break;
			case 2:
				finalLocation = location2;
				break;
			case 3:
				finalLocation = location3;
		}
		switch(randJob){
			case 1:
				finalJob = job1;
				break;
			case 2:
				finalJob = job2;
				break;
			case 3:
				finalJob = job3;
		}
		switch(randCompOrRest){
			case 1:
				finalCompOrRest = compOrRest1;
				break;
			case 2:
				finalCompOrRest = compOrRest2;
				break;
			case 3:
				finalCompOrRest = compOrRest3;
		}
		switch(randSalary){
			case 1:
				finalSalary = salary1;
				break;
			case 2:
				finalSalary = salary2;
				break;
			case 3:
				finalSalary = salary3;
		}
		switch(randCar){
			case 1:
				finalCar = car1;
				break;
			case 2:
				finalCar = car2;
				break;
			case 3:
				finalCar = car3;
		}
		//Final Output
		cout << "***** MASH RESULTS ******" << endl;
		cout << "You will live in a " << house << "." << endl;
		cout << "You will be happily married to " << spouse << "." << endl;
		cout << "You and your spouse will have " << numChildren << " children." << endl;
		cout << "You will live in " << finalLocation << "." << endl;
		cout << "You will work at " << finalCompOrRest << " as a " << finalJob << " making $" << finalSalary << " a year." << endl;
		cout << "You will drive a " << finalCar << "." << endl;
        //Asking the user if he wanna play again or not
		cout << endl << endl;
		cout << "Pick from the following menu: " << endl;
		cout << "1.  Let's play MASH!" << endl;
		cout << "2.  End program" << endl;
		cin >> choice;
		//Validaton of user input
		while(choice != 1 && choice != 2){
			cout << "Invalid choice.  Select 1 or 2." << endl;
			cin >> choice;
		}
		switch (choice){
			case 1:
				play = true;
				cout << "You chose to play MASH!" << endl << endl;
				break;
			case 2:
				play = false;
				cout << "You chose to end the program." << endl << "Bye!" << endl;
				break;
		}
        
    }
    return 0;    
}






