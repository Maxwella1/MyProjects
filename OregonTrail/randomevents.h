#ifndef RANDOMEVENTS_H
#define RANDOMEVENTS_H

#include "random.h"

class Events {
    public:
        int z = 1;
        struct months {
            int x; // number of days in the month
        } m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;  // all the months allowed for travel
    
        enum inMonth {
            bandits,river,posionfood,tornado,dysentery} march,april,may,june,july,august,semtember,october,november,december; // enums holding the number of days and used for the random events
            
        inMonth eventList[10][1];
        int choosenDays[10];
        
        void setEvents() {
            // Our do while loop used for setting the enum for the random event
            do {
                for (int x = 0 ; x < 10 ; x++) {
                    for (int y = 0 ; y < 1 ; y++) {
                        eventList[x][y] = inMonth(number.random(0,9));
                    }
                }
                
            } while (z = 0);
            
            march = eventList[0][0];
            april = eventList[1][0];
            may = eventList[2][0];
            june = eventList[3][0];
            july = eventList[4][0];
            august = eventList[5][0];
            semtember = eventList[6][0];
            october = eventList[7][0];
            november = eventList[8][0];
            december = eventList[9][0];
            
            for (int x = 0 ; x < 10 ; x++) {
                choosenDays[x] = number.random(1,30);
            }
            
        }
        
        int checkForEvent(int day, int month) {
            inMonth whatMonth;
            int damage = 0;
            if (day == choosenDays[month]) {
            
                if (month == 0) { 
                    whatMonth = march;
                }
                else if (month == 1) {
                    whatMonth = april;
                }
                else if (month == 2) {
                    whatMonth = may;
                }
                else if (month == 3) {
                    whatMonth = june;
                }
                else if (month == 4) {
                    whatMonth = july;
                }
                else if (month == 5) {
                    whatMonth = august;
                }
                else if (month == 6) {
                    whatMonth = semtember;
                }
                else if (month == 7) {
                    whatMonth = october;
                }
                else if (month == 8) {
                    whatMonth = november;
                }
                else if (month == 9) {
                    whatMonth = december;
                }
                
                switch (whatMonth) {
                    case bandits: cout << "You were attacked by bandits!\n"
                                       << "You took 1 damage" << endl;
                                  damage = 1;
                            break;
                    case posionfood: cout << "You ate some spoiled food!\n"
                                          << "You took 1 damage" << endl;
                                     damage = 1;
                            break;
                    case tornado: cout << "A tornado destroyed the road!!\n"
                                       << "You took 1 damage" << endl;
                                  damage = 1;
                    
                            break;
                    case dysentery: cout << "You have dysentery!\n"
                                         << "You took 1 damage" << endl;
                                    damage = 1;
                            break;
                }
            }
            return damage;
        }
};

Events specialEvent;

#endif