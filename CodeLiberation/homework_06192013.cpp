
//
//  homework_06192013.cpp
//  CodeLiberation
//
//  Created by Jennifer de la Vega on 6/21/13.
//  Copyright (c) 2013 Jenn de la Vega. All rights reserved.
//

#include "homework_06192013.h"
#include <iostream>
using namespace std;

int main ()
{
    int name;
    cout << "Healthy debate? What's your name?" << endl;
    cin >> name;
    
    cout << "Let's rumble." << endl;
    
    int choice;
    cout << "Choice:";
    cin >> choice;
    
    switch (choice) {
            
        case 1:
            cout << "Intimidate!";
            break;
            
        case 2:
            cout << "Listen...and think of something witty to say!";
            break;
            
        default:
            cout << "Moot point, move on...";
            break;
    }
    
    if (true) {
        cout << "";
    }
    if (false) {
        
        cout << "";
    }
    
}


Player Kay: 100
Monster: 100
Choose an Action:
1) Attack
2) Defend
( Player types in 1 )
You choose to attack. Monster takes 20 damage. You take 10 damage.

Player Kay: 90
Monster: 80
Choose an Action:
1) Attack
2) Defend
( Player types in 2 )
You choose to defend. Monster takes 0 damage. You take 5 damage.

(Continues until last round)

Player Kay: 60
Monster: 20
Choose an Action:
1) Attack
2) Defend
( Player types in 1 )
You choose to attack. Monster takes 20 damage. You take 10 damage.

Player Kay: 50
Monster: 0
Player Kay wins! End of game.