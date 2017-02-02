//
//  StringController.cpp
//  StringProject
//
//  Created by Hill, Isaac on 2/2/17.
//  Copyright © 2017 Hill, Isaac. All rights reserved.
//

#include <iostream>
#include <String>
#include "StringController.hpp"

using namespace std;

void StringController :: start()
{
    string1 = "coolio";
    string2 = "neato";
    this->inString();
}

void StringController :: inString()
{
    for(int i = 0; i < string1.size(); i++)
    {
        cout << string1[i] << endl;
        cout << "The size of the first string is" << string1.length() << endl;
    }
}
