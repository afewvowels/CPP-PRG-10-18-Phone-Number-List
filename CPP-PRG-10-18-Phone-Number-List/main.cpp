//
//  main.cpp
//  CPP-PRG-10-18-Phone-Number-List
//
//  Created by Keith Smith on 11/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that has an array of at least 10 string objects that hold people's
//  names and phone numbers. You may make up your own strings, or use the following:
//
//      "Alejandra Cruz, 555-1223"
//      "Joe Looney, 555-0097"
//      "Geri Palmer, 555-8787"
//      "Li Chen, 555-1212"
//      "Holly Gaddis, 555-8878"
//      "Sam Wiggins, 555-0998"
//      "Bob Kain, 555-8712"
//      "Tim Haynes, 555-7676"
//      "Warren Gaddis, 555-9037"
//      "Jean James, 555-4939"
//      "Ron Palmer, 555-2783"
//
//  The program should ask the user to enter a name or partial name to search for in the
//  array. Any entries in the array that match the string entered should be displayed. For
//  example, if the use enters "Palmer" the program should display the following names
//  from the list:
//
//      Geri Palmer, 555-8787
//      Ron Palmer, 555-2783
//

#include <iostream>
#include <string>

using namespace std;

string *getUserInput();
string *checkArray(string *);

int main()
{
    string *strStringMain = nullptr;
    strStringMain = new string;
    
    strStringMain = getUserInput();
    
    strStringMain = checkArray(strStringMain);
    
    return 0;
}

string *getUserInput()
{
    string *strTemp = nullptr;
    strTemp = new string;
    
    cout << "Please enter a string to search for:\n";
    getline(cin, *strTemp);
    
    return strTemp;
}
string *checkArray(string *strStr)
{
    string *strReturn = nullptr;
    strReturn = new string;
    
    char *chrSearchTerm = nullptr;
    chrSearchTerm = new char[strStr->length()];
    strcpy(chrSearchTerm, strStr->c_str());
    for (int i = 0 ; i < strlen(chrSearchTerm) ; i++)
        chrSearchTerm[i] = toupper(chrSearchTerm[i]);
    
    char *chrSearchable = nullptr;
    
    int INT_ARR_SIZE = 11;
    
    string strArray[] = { "Alejandra Cruz, 555-1223",
                          "Joe Looney, 555-0097",
                          "Geri Palmer, 555-8787",
                          "Li Chen, 555-1212",
                          "Holly Gaddis, 555-8878",
                          "Sam Wiggins, 555-0998",
                          "Bob Kain, 555-8712",
                          "Tim Haynes, 555-7676",
                          "Warren Gaddis, 555-9037",
                          "Jean James, 555-4939",
                          "Ron Palmer, 555-2783" };
    
    for (int i = 0 ; i < INT_ARR_SIZE ; i++)
    {
        chrSearchable = new char[strArray[i].length()];
        strcpy(chrSearchable, strArray[i].c_str());
        
        for (int i = 0 ; i < strlen(chrSearchable) ; i++)
            chrSearchable[i] = toupper(chrSearchable[i]);
        
        if (strstr(chrSearchable, chrSearchTerm) != nullptr)
        {
            cout << strArray[i] << endl;
        }
    }
    
    return strReturn;
}
