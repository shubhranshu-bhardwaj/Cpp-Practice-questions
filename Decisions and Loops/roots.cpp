//C++ Program to Find All Roots of a Quadratic Equation
/* The term b2-4ac is known as the discriminant of a quadratic equation. The discriminant tells the nature of the roots.

If discriminant is greater than 0, the roots are real and different.
If discriminant is equal to 0, the roots are real and equal.
If discriminant is less than 0, the roots are complex and different.*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float discriminant,x1,x2,real,imaginary;
    discriminant=4*8-4*7*8;
    if (discriminant > 0) {
        x1 = (-4 + sqrt(discriminant)) / (2*7);
        x2 = (-4 - sqrt(discriminant)) / (2*7);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -4/(2*7);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        real = -4/(2*7);
        imaginary =sqrt(-discriminant)/(2*7);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << imaginary << "i" << endl;
        cout << "x2 = " << real << "-" << imaginary << "i" << endl;
    }
    return 0;
}