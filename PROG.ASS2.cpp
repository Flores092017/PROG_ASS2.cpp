/*
AUTHOR: Mhar Sydney V. Flores
DATE: July 27, 2018
NAME: Equation of getting the Hypothenus of right traingle
DESCRIPTION: This program calculates the hypothenus of a right triangle
ARGUMENTS:"none"
RETURNS:"none"
NOTES:give the value of the Adjacent and give the value of the base
CHANGE HISTORY:
*/

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int A;
    int B;
    int C;
    int D;
    int E;
    int F;
    
    cout << " \t Getting the Hypothenus of a Right triangle.\n\n";
    // Prompt the user to give the value of the Adjacent
    cout << " Enter the Adjacent side :";
     cin >> A;
     // Prompt the user to give the value of the base
    cout << " Enter the Base:";
     cin >> B;
    
    C = (A*A);
    D = (B*B);
    E = (C+D);
    F = sqrt(E);
    
    cout << " The Hypothenus is :" << F ;
    
    return 0;
    

}
