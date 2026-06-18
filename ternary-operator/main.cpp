#include <iostream>

using namespace std;

int main()
{
    //Ternary operator - shorthand notation of if statement
    int a = 10;
    string r = (a>=10? "Greater":"Less than");
    cout << "Using ternary operator: " << r << endl;

    //Using if statement
    if(a>=10)
        cout << "Greater" << endl;
    else
        cout << "Less than" << endl;




    return 0;
}
