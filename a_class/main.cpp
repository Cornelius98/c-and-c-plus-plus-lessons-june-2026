#include <iostream>

using namespace std;

class Student {
public:
    int a = 10;
    void sayName(){
        cout <<"My name is Mr Nyangala" << endl;
    }

};

int main()
{
    //Class object
    Student* object_1 = new Student();

    object_1->sayName();

    return 0;
}
