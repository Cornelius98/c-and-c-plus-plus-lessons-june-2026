#include <iostream>

using namespace std;

int main()
{
    int a = 13;
    int b = 13;

    //Less than operator
    if(a < b ){
        //TRUE BLOCK
        cout << "True, it is less than" << endl;
    } else {
        //FALSE BLOCK
        cout << "False, it is not less than" << endl;
    }

    //Less than or equal to
    if( a <= b)
        cout << "Yes is less than or equal to" << endl;
    else
        cout << "No is not less than or equal to" << endl;

    // variable for greater than
    int c = 6;
    int d = 7;
    if ( a > b) {
       cout << " print true: " << endl;
    } else {
     cout << " print false: " << endl;

    }

    //checking if values are the same
    int f = 2;
    int g = 2;
    if ( f == g)
        cout <<" true "<< endl;
    else
        cout << " false" << endl;

    // checking for triple = operator
    int f_1 = 3;
    int g_2 = 3;
    if(f_1 == g_2){
        cout << " TRUE by triple operator! " << endl;
    } else {
        cout << "FALSE by triple operator! " << endl;
    }

    //triple = operator checking wnen its false
    double m = 1.002;
    double n = 1.002;
    if( m == n) {
        cout <<" the triple operator is true! " << endl;
    } else {
        cout <<" the triple operator is false!" << endl;
    }

    // test the not equal operator
    int o = 4;
    int p = 5;
    if ( o != p)
        cout << " letter O is not greater than p " << endl;
    else
        cout << " letter o is greater than p " << endl;
    return 0;
}
