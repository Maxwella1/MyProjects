#include <iostream>
#include "Questions.h"

using namespace std;

void display(questions);
void proceed();

int qNumber;
int yourHealth = 5;
int monsterHealth = 5;

string yourName;
int input;

int main(){
    srand(time(NULL));
    
    setParagraphs();
    
    cout << "Would you like to:\n1. Play the game\n2. Learn then play" << endl;
    
    cin >> input;
    cin.ignore();
    switch(input){
        case 2:
            cout << paragraphs.a1 << endl << endl;
            cout << paragraphs.a2 << endl << endl;
            cout << paragraphs.a3 << endl << endl;
            cout << "PRESS ENTER WHEN YOU WANT TO CONTINUE" << endl;
            cin.ignore();
            break;
        default:
            break;
    }
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "WELCOME TO THE FOOD INSECURITY TRAINER GUIDE!!!" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << endl << "WHAT'S YOUR NAME SOLDIER!!!!!" << endl;
   
    getline(cin, yourName);
    
    cout << "Drill Seargent: Welcome to hell son! You will go through RIGOROUS training through 3 masters of food insecurity!" << endl
         << "                You can look things up all you want, it won't help ya though!" << endl << endl;
    
    cin.ignore();
    
    cout << "Welcome!\n\nYou have now started your training to become mildly compotent towards the topic of food insecurity." << endl << endl
         << "Drill Seargent: The training plays as follows\n\nThere are 3 \"Masters\" that you have to defeat. Each one has 5 health that can" << endl
         << "be taken down, by answering questions. Each Master is incramentally difficult." << endl
         << "Now, onto your health, you have 5 HP as well. Each time that you answer a" << endl
         << "question wrong, you lose health. If, however, you do happen to defeat a Master" << endl
         << "(doubt it) you will be rewarded with 3 HP and access to the next Master. After" << endl
         << "defeating all three masters, you will be rewarded with the title of \"Mildly" << endl
         << "Competent\" Good luck, hope you make it through!!!" << endl << endl;
    cin.ignore();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Welcome to the First Master!!!!" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl
         << "Joey: WWWWEEEEEELLLLLLCCCCCOOOOOMMMMMEEEE... to your first trial. My name is Joey!" << endl
         << "      My job is to teach you fundamentals ... or ... to teach you death! That is decided"<< endl
         << "      on whether or not you're determined to become a Master..." << endl
         << "      TIME TO BEGIN!!!!" << endl << endl;
    cin.ignore();
    qNumber = 0;
    easy_answerKey();
    while (yourHealth > 0 && monsterHealth > 0){
        display(question[qNumber]);
        qNumber++;
    }
    if (yourHealth <= 0)
        return 0;
    cout << "Congrats! You have defeated trainer Joey. It only gets harder from here" << endl << endl;
    monsterHealth = 5;
    yourHealth += 3;
    if (yourHealth > 5)
        yourHealth = 5;
    
    medium_answerKey();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Welcome to the Second Master!!!!!" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl
         << "Andrew: MUHAHAHAHAHAHA!!! Welcome to ... me... I guess... I don't really know what else to say" << endl
         << "        this trial is the ethical analysis portion of your training, you can use information" << endl
         << "        that you have known before from the answer explanations and critical thinking skills" << endl
         << "        you have learned from ethics class." << endl
         << "        TIME TO BEGIN!!!!!" << endl << endl;
    cin.ignore();
    qNumber = 0;
    while (yourHealth > 0 && monsterHealth > 0){
        display(mQuestion[qNumber]);
        qNumber++;

    }
    if (yourHealth <= 0)
        return 0;
    
    cout << "Congrats! You have defeated Master Andrew. It only gets harder from here" << endl << endl;
    monsterHealth = 5;
    yourHealth += 3;
    if (yourHealth > 5)
        yourHealth = 5;

    hard_answerKey();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Welcome to the Third Master!!!!!" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl
         << "Gabe: I'm surprised you have made it this far. I have not seen a challenger in years!!! I will be teaching you about the" << endl
         << "      possible solutions to food insecurity. Based on the information given before playing this game, you" << endl
         << "      will decifer the best solutions to help destroy food insecurity." << endl
         << "      TIME TO BEGIN YOUR FINAL FIGHT!!!" << endl << endl;
    cin.ignore();
    qNumber = 0;
    while (yourHealth > 0 && monsterHealth > 0){
        display(hQuestion[qNumber]);
        qNumber++;

    }
    cout << "Congrats!!! YOU HAVE BEATEN THE GAME!!!! OOOOOMMMMMMMMMGGGGGG THIS IS INSANE!!!" << endl
         << "Take what you have learned here and spread it to the world. As you have learned," << endl
         << "that is a great way to get rid of the problem" << endl << endl;
         
    cout << "|@@@@|     |####|" << endl
         << "|@@@@|     |####|" << endl
         << "|@@@@|     |####|" << endl
         << "\\@@@@|     |####/" << endl
         << " \\@@@|     |###/" << endl
         << "  `@@|_____|##'" << endl
         << "       (O)" << endl
         << "    .-'''''-." << endl
         << "  .'  * * *  `." << endl
         << " :  *       *  :" << endl
         << ": ~   Mildly  ~ :" << endl
         << ": ~ Competent ~ :" << endl
         << " :  *       *  :" << endl
         << "  `.  * * *  .'" << endl
         << "    `-.....-'" << endl;
    return 0;
}

void display(questions member){
    
    cout << "Your Health: " << yourHealth << endl;
    cout << "Master's Health: " << monsterHealth << endl << endl;
    
    cout << member.ask << endl;
    cout << member.a1 << endl;
    cout << member.a2 << endl;
    cout << member.a3 << endl;
    cout << member.a4 << endl;
    cin >> input;
    
    if (member.answer == input){
        monsterHealth--;
        cout << "Correct" << endl
             << member.explain << endl << endl;
    }
    else if(member.answer != input){
        yourHealth--;
        cout << "Incorrect" << endl
             << member.explain << endl << endl;
    }

}

