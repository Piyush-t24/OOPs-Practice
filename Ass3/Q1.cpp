/*Q.1 Write a C++ program to declare private data members and functions inside the class. Also,
declare one more public member function for setting values of private data members. Now,
access the public member function by creating an object of this class. Finally, display the data
members' values using a private member function.*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int x;
    int y;

    void display()
    {
        cout<< "x = "<< x << ", y = "<< y<<endl;
    }

public:
    void setValue(int a , int b){
    x = a;
    y = b;
    }

    void showValue(){
        display();
    }
};

int  main(){
    MyClass obj;
    obj.setValue(10 , 20);
    obj.showValue();

    return 0;
}
