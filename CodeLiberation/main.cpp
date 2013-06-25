
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
    
    cout << "\nYou send out " << pokemon << endl;
    cout << "Pikachu: 100" << endl;
    cout << pokemon << ": 100" << endl;
}