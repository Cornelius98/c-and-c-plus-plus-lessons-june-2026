#include <iostream>

using namespace std;

int main()
{
    //Testing variable mutability
    int a = 10;
    printf("%d", a);
    cout << "\n" << "The value of a is: " << a << endl;

    //Changing the value inside a to 20
    a = 20;
    cout << "\n The new value of a is: " << a;

    //Writing a constant
    const int b = 30;
    cout << "\nConstant original value: " << b << endl;

    //Attempting to change value of constant
    b = 50;
    return 0;
}
