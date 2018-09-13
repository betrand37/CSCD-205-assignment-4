#include <iostream>
#include <math.h>

using namespace std;

int GCD(int x,int y)
//The GCD which is the Greatest Common Device( highest Common Factor)  of any two numbers refers to the largest number that divides them without leaving a remainder

{
    int rem = x%y;
    while(rem != 0)
    {
        x = y;
        y = rem;
        rem = x%y;
    }
    return y;
}

int main()
{
    int x,y;
    cout << "enter a first number \n";
    cin >> x;

    cout << "enter a second number \n";
    cin >> y;

     cout <<"The GCD of "<<x<< " and "<<y<<" is "<<GCD(x,y);

    return 0;
}
