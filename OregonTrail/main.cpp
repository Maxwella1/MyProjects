#include <iostream>

#include "stats.h" // holds all of the stats for ppmgg
#include "random.h" // This is used to get the random numbers in the game
#include "randomevents.h" // Sets the random events of the game

using namespace std;

// Prototypes {
int travel();
int rest();
int hunt();
void status();
void help();
void quit();
void endDay(int);
void checkStatus();
void printMessage(string);
//} // Where all the prototypes are held for the player actions

const int DISTANCE = 2000; // Amount of miles you need to travel
const string spacing = "=================================";


void printWagon() {
string WAGONp1 = "    .                  *                     * \n           *        .          *        .   .     \n*     ,_          *   .-.-------.                 .\n    __(_\\   .        //^\\\\       \\  *      .       . \n";
string WAGONp2 = "  ~( _ )    ___      \\\\_//_______/      .--------.-.\n^^ // >>^^,/ _ )~ ^^/[_=/]______]^^^^^^/        //^\\\\^^^\n";
string WAGONp3 = "         /_/< \\   /_(=/ (o)  (o)       \\________\\\\=//\n                          ~    ~       [________[\\\\__]\\\n    ^^^               ^^                (o)    (o)`\\=)_\\";
    cout << WAGONp1 << WAGONp2 << WAGONp3 << endl;
} // ASCII code to print the wagons

int main() {
    int menu, days;
    cout << "Name: ";
    cin >> man.p.name; // enters the name and is stored in stats
    
    man.setCalander(); //sets classes and structs
    man.setInitialStats();
    specialEvent.setEvents();
    
    // man.printCalander(); //for testing
    
    while (man.p.miles < 3000) {
        checkStatus();
        
        printWagon();
        
        cout << spacing << endl;
        cout << "1) Travel  4) Status\n2) Rest    5) Help\n3) Hunt    6) Quit" << endl; // prints choices
        cout << "\n>> ";
        cin >> menu;
        
        switch (menu) {
            case 1: days = travel();
                break;
            case 2: days = rest();
                break;
            case 3: days = hunt();
                break;
            case 4: status();
                days = 0;
                break;
            case 5: help();
                days = 0;
                break;
            case 6: quit();
        }
        endDay(days);
    }
}

int travel() {
    int takeDam; // Taking damage
    int milesT = number.random(30,30); //random numer for how long and far
    int daysT = number.random(5,3); // days traveled
    
    cout << endl << spacing << endl; // prints the spacing variable
    cout << "You traveled " << milesT << " miles in " << daysT << " days";
    cout << endl << spacing << endl << endl;
    
    for (int x = 0 ; x < milesT ; x++) {
        man.p.miles += 1;
    }
    for (int x = 0 ; x < daysT ; x++) {
        man.p.day += 1; //checks for special event
        takeDam = specialEvent.checkForEvent(man.getday(man.p.day), man.getMonthNum(man.p.day));
        man.p.health -= takeDam;
    }
    // man.p.miles += milesT;
    // man.p.day += daysT;
    
    if (*man.myFood <= 0) { //pointer to food
        man.p.health -= 1;
    }
    
    return daysT;
}

int rest() {
    int getHurt = number.random(1,10); // 10% chance you will lose 2 health
    int& RgetHurt = getHurt; // Reference variable
    int daysT = number.random(4,2);
    
    if(RgetHurt > 1) { // If the reference is not oen you don't get hurt
        man.p.health += 1;
        cout << endl << spacing << endl
             << "You rested for " << daysT << " days and regained 1 heath point"
             << endl << spacing << endl;
    }
    else { //random chance to get attacked
        man.p.health -= 1;
        cout << spacing << endl
             << "You were attacked by wolves" << endl
             << "You lost 2 health" << endl
             << spacing << endl;
    }
    
    if (*man.myHealth > 5) { //pointer
        man.p.health = 5;
    }
    
    
    return daysT;
} //done

int hunt() {
    int daysT = number.random(4,2);
    
    man.p.food += 100; // adds food to the persons amount of food
    
    cout << endl << spacing << endl;
    cout << "You hunted for " << daysT << " days until you got 100 lbs of food";
    cout << endl << spacing << endl << endl;
    
    return daysT;
} //done

void status() {
    string thisMonth = man.getMonth(man.p.day); //gets the current month
    int thisDay = man.getday(man.p.day);        //gets current day
    cout << spacing << endl;
    cout << man.p.name << endl; //print name
    cout << "Day " << *man.currentDay << endl; //prints day
    cout << "Date: " << thisMonth << " " << thisDay << endl;
    cout << "Food: " << man.p.food << " lbs" << endl;
    cout << "Miles traveled: " << man.p.miles << endl;
    cout << "Health: " << man.p.health << endl;
    cout << spacing << endl;
} //done

void help() {
    cout << "\nRules: select a choice. These options could take multiple days\n";
    cout << "When your health falls to 0, you die." << endl << "If you don't make it\n"
         << "by December 31st, you die of the winter." << endl;
} //done

void quit() {
    cout << endl << spacing << endl << "Gave up? Wow such loser";
    cout << endl << spacing;
    exit(0);
} //done

void endDay(int days) {
    
    if (man.p.food < 0) {
        for (int x = 1 ; x <= days ; x++) { //if traveled without food you lose health
        man.p.health -= 1;
        }
    }
    else {
    
        for (int x = 1 ; x <= days ; x++) {
            man.p.food -= 5;
            if (*man.myFood < 0) {
                man.p.food = 0;
            }
        }
    }
} //done

void checkStatus() {
    if (man.p.miles >= DISTANCE) { //checks if u are there
        if (man.p.health > 0) {
            printMessage("You made it to Oregon! How did you do it?!?");
            exit(0);
        }
    }
    else if (man.p.health <= 0) {
        printMessage("You died of starvation!");
        exit(0);
    }
    else if (man.p.day >= 305) {
        printMessage("ITS DECEMBER 31st! You didn't make it in time and died of the winter");
        exit(0);
    }
} // done

void printMessage(string message) { //this function prints message
    cout << endl << spacing << endl;
    cout << message;
    cout << endl << spacing << endl;
} //done


                                                                                                                                  