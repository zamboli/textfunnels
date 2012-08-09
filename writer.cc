//
// NAME: writer.cc
// AUTHOR: Ben Lazan
// DATE: 08/ 9/2012
// DESCRIPTION: User can add a value to a string. Append the string.
// delete the string. print the string to a file. and quit
//
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"/home/ben/textfunnels/School/myfirstnamespace.cc"
using namespace std;
using namespace myfirstnamespace;

//string filename,text,moretext;

int main()
{
    string command;
    
    cout << "Enter commands. Type \"help\" for help.\n";

    int i = 100;

    while ( i == 100 ) {
        cout << ": ";
        cin >> command;
        if (command == "help")
            help();
        else if (command == "new")
            newfile();
        else if (command == "show")
            show();
        else if (command == "write")
            write();
        else if (command == "add")
            add();
        else if (command == "print")
            print();
        else if (command == "quit")
            quit();
        else 
            cout << "huh?" << endl;
    }

    return 0;
}
