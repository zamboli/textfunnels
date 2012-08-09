//
// NAME: myfirstnamespace.cc
// AUTHOR: Ben Lazan
// DATE: 08/ 9/2012
// DESCRIPTION: 
//
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
namespace myfirstnamespace
{

string filename;
string text, moretext;
ofstream myfile;

    //print help
    void help() 
    {
        cout << "help:  print this\n"
             << "new:   open new file\n"
             << "show:  show current text\n"
             << "write: write a string\n"
             << "add:   add text to the string\n"
             << "print: print string to file\n"
             << "quit:  save and exit program\n";
    }

    //make a new file for writing
    void newfile()
    {
        //if file is open close it
        if (filename.c_str())
            myfile.close();

        cout << "Enter filename, don't overwrite an existing file! :";
        cin >> filename;
        myfile.open(filename.c_str());
    }
    //show current text
    void show()
    {
        cout << text << endl;
    }
    //write text to string
    void write() 
    {
        cout << "Enter word: ";
        cin >> text;
    }
    //add text to string
    void add() 
    {
        cout << "Add word: ";
        cin >> moretext;
        text = text + " ";
        text = text + moretext;
    }
    //print text to file
    void print()
    {
    myfile << text << endl;
    text = "";
    }
    //exit program
    void quit()
    {
        cout << text;
        myfile.close();
        exit(0);
    }

}
