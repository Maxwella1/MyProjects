#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <vector>

using namespace std;

class Stats {
    public:
        struct Sts { //main stats
            int health, day, food;
            string mon;
            float miles;
            string name;
        } p;
        
        vector< vector<int> > dd; //multidimensional vector
        
        
        int *myHealth; //point declaration
        int *myFood;
        int *currentDay;
        

        void setCalander() { //sets calander
            dd.reserve(10);
            for (int y = 0 ; y < 31 ; y++) {
                dd[0].push_back(y + 1); //these
                dd[2].push_back(y + 1);
                dd[4].push_back(y + 1);
                dd[5].push_back(y + 1);
                dd[7].push_back(y + 1);
                dd[9].push_back(y + 1);
            }
            for (int y = 0 ; y < 30 ; y++) {
                dd[1].push_back(y + 1);
                dd[3].push_back(y + 1);
                dd[6].push_back(y + 1);
                dd[8].push_back(y + 1);
            }
        }
        
        
        
        void setInitialStats() {
            p.health = 5;
            myHealth = &p.health;
            p.day = 1; //305 max
            currentDay = &p.day;
            p.food = 500;
            myFood = &p.food;
            p.miles = 0; //2000
            p.mon = "";
        }
        
        string getMonth(int day) {
            int cntr = 0;
            string monthD;
            for (int x = 0 ; x < 10 ; ++x) {
                for (int y = 0 ; y < dd[x].size() ; ++y) {
                    cntr += 1;
                    if (cntr == day) {
                        switch (x) {
                            case 0: monthD = "March";
                                break;
                            case 1: monthD = "April";
                                break;
                            case 2: monthD = "May";
                                break;
                            case 3: monthD = "June";
                                break;
                            case 4: monthD = "July";
                                break;
                            case 5: monthD = "August";
                                break;
                            case 6: monthD = "September";
                                break;
                            case 7: monthD = "October";
                                break;
                            case 8: monthD = "November";
                                break;
                            case 9: monthD = "December";
                                break;
                        }
                    }
                }
            }
            return monthD;
        }
        
        int getday(int day) {
            int cntr = 0;
            int today = 0;
            for (int x = 0 ; x < 10 ; x++) {
                for (int y = 0 ; y < dd[x].size() ; y++) {
                    cntr += 1;
                    if (cntr == day) {
                        today = dd[x][y];
                    }
                }
            }
        
            return today;
        }
        
        void printCalander() {
            for (int x = 0 ; x < 10 ; x++) {
                for (int y = 0 ; y < dd[x].size() ; y++) {
                    cout << dd[x][y] << " ";
                }
                cout << endl;
            }
        }
        
        int getMonthNum(int day) {
            int cntr = 0;
            int theeDay;
            for (int x = 0 ; x < 10 ; ++x) {
                for (int y = 0 ; y < dd[x].size() ; ++y) {
                    cntr += 1;
                    if (cntr == day) {
                        theeDay = x;
                    }
                }
            }
            return theeDay;
        }
};

Stats man;

#endif