
//  CodeLiberation
//
//  Created by Jennifer de la Vega on 6/21/13.
//  Copyright (c) 2013 Jenn de la Vega. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string pokemon;
    cout << "A wild Pikachu appears! Which Pokemon do you send out?" << endl;
    cin >> pokemon;

    int playerLife;
    int enemyLife;
    int choice;
    
    playerLife = 100;
    enemyLife = 100;
    
    cout << "\nYou send out " << pokemon << endl;
    cout << "Pikachu HP: " << enemyLife << endl;
    cout << pokemon << " HP: " << playerLife << endl;
    cout << "Type 1 to attack or 2 to defend" << endl;
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            cout << "Your " << pokemon << " attacked the wild Pikachu and took 10HP of damage!" << endl;
            break;
        case 2:
            cout << "Your " << pokemon << " defended itself and took 5HP of damage from the wild Pikachu!" << endl;
        default:
            cout << "The wild Pikachu is getting antsy, tell your " << pokemon << "to attack or defend!" << endl;
    }
}

