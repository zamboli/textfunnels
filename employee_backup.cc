//
// NAME: employee_backup.cc
// AUTHOR: Ben Lazan
// DATE: 08/ 8/2012
// DESCRIPTION: Program makes a backup of list of 
// employees contained in a file
//
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;

//each variable is for each line of info
void readin(string&,char&,int&,double&,string&);
void writeout(string&,char&,int&,double&,string&);

//declare stream objects
ifstream inFile;
ofstream outFile;

int main()
{

    //open file for reading/writing
    inFile.open("employee.dat");
    outFile.open("employee.bak");

    //check if file failed to open
    if (inFile.fail())
    {
        cout << "File failed to open" << endl;
        exit(1);
    }
    
    //declare data variables
    string name, date;
    char initial;
    int number;
    double rate;

    while(!inFile.eof())//while input is not end of file
    {
        readin(name, initial, number, rate, date);
        writeout(name, initial, number, rate, date);
    }

    cout << "Backup was successful!" << endl;
    return 0;
}

//define read data in
void readin(string& name, char& initial, int& number, double& rate, string& date) 
{
    inFile >> name >> initial >> number >> rate >> date;
}
//write file out
void writeout(string& name, char& initial, int& number, double& rate, string& date)
{
    outFile << name << "\t" << initial << "\t" << number << "\t"
            << rate << "\t" << date << endl;
}
