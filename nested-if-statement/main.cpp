#include <iostream>

using namespace std;

int main()
{
    //Nested control flow statements
    int student_number = 2001134;
    int graduation_year = 2027;

    if(student_number == 2001134){
        cout << "Verified ICU Student" << endl;
        if(graduation_year >= 2026){
            cout << "Graduating this year or another following year";
        }else {
            cout <<"Graduated, was a student at ICU" <<endl;
        }

    }else {
        cout <<"Not ICU Student" << endl;
        if(graduation_year >= 2026){
            cout << "Graduating this year or another following year";
        }else {
            cout <<"Graduated, was a student at ICU" <<endl;
        }
    }



    return 0;
}
