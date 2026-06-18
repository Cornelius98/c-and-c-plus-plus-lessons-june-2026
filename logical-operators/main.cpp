#include <iostream>

using namespace std;

int main()
{
    /*
    * Logical AND (&&) operator
    * Which requires all conditions to be true, to give true output
    */
    int a = 50;
    int b = 20;
    int c = 30;

    if(b>a && c>b && a<c){
        cout << "All conditions are true" << endl;
    }else {
        cout << "Some conditions are false" << endl;
    }

    /*
    * Logical OR (||) operator
    * Which requires one condition to be true, to give true output
    */

    int a_1 = 10;
    int a_2 = 20;
    int a_3 = 30;

    if(a_1<0 || a_1>=a_2 || a_3>=a_1){
        cout << "One condition happens to be true" << endl;
    }else {
        cout << "All conditions are false" << endl;
    }
    return 0;
}
