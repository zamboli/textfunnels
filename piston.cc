//
// NAME: piston.cc
// AUTHOR: Ben Lazan
// DATE: 07/11/2012
// DESCRIPTION:Calculates the work done by pistons over a given distance
//      1. Input number of pistons, force of one piston(in N), distance travelled(in cm)
//      2. conver cm to m
//      3. calculate Work(J) = Force(N)*distance(m)
//      4. Output Work
#include<iostream>
using namespace std;

int main()
{
    // define inputs 
    double pistons, force,totalForce,meters,centimeters, work; 

    // input inputs
    cout << "Number of pistons:           ";
    cin >> pistons;
    cout << "Force of single piston (N):  ";
    cin >> force;
    cout << "Distance travelled (cm):     ";
    cin >> centimeters;

    //convert distance into m
    meters = centimeters*(1/100);
    
    //calulate total Force
    totalForce = force*pistons;

    //calculate work
    work = totalForce * meters;
    cout << "pistons"<<pistons<<"\ndistance"<<meters<<"\nforce"<<totalForce;
    //output
    cout << endl << "Pistons performed " << work << " joules of work.\n\n";
    return 0;
}
