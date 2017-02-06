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

StringController :: StringController()
{
    string1 = "coolio";
    string2 = "neato";
}

void StringController :: start()
{    this->stringTests();
}

void StringController :: stringTests()
{
    cout << "The first string is " << string1 << endl;
    cout << "The second string is " << string2 << endl;
    for(int i = 0; i < string1.size(); i++)
    {
        cout << "Position " << i + 1 << " of " << string1 << " is " << string1[i] << endl;
    }
    cout << "The size of the first string is " << string1.length() << endl;
    int j = 3;
    cout << "The letter " << string2.at(j) << " is at position " << j + 1 << " of the word " << string2 << "." << endl;
    if (string1.empty())
    {
        cout << "The first string is empty." << endl;
    }
    else if(string1.empty() == false)
    {
        cout << "The first string is not empty." << endl;
    }
    else
    {
        cout << "Hello World" << endl;
    }
    
    if (string1.compare(string2) == 0)
    {
        cout << "The strings are the same." << endl;
    }
    else if (string2.compare(string1) != 0)
    {
        cout << "The strings are not the same." << endl;
    }
    else
    {
        cout << "Hello World" << endl;
    }
    
    cout << string1.substr(1) << endl;
    cout << string2.substr(1, 3) << endl;
    
    int intHolder[3];
    double doubleHolder[3];
    
}
