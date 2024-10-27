/*Q.2 Write a C++ language program to accept a float number through the keyboard. Create a
class that contains two private data members: a and b. Furthermore, the class contains a public
member function that calculates the square of the number and then separates the float number
into integer and fractional parts and assigns the value to the private members a and b
respectively. Finally, calculate the square of an integer and fractional part and add them to
another variable c.*/

#include <iostream>
using namespace std;

class FloatSquare {
private:
    float a; 
    float b; 

public:
    void setFloat(float num) {
     
        a = static_cast<int>(num);
        b = num - a;
    }

    float calculateSquare() {
   
        float squareA = a * a;

        float squareB = b * b;

        float c = squareA + squareB;

        return c;
    }

    float getA() {
        return a;
    }

    float getB() {
        return b;
    }
};

int main() {
    FloatSquare fs;
    float num;

    cout << "Enter a float number: ";
    cin >> num;

    fs.setFloat(num);

    float result = fs.calculateSquare();

    cout << "Square of integer part: " << fs.getA() * fs.getA() << endl;
    cout << "Square of fractional part: " << fs.getB() * fs.getB() << endl;
    cout << "Sum of squares: " << result << endl;

    return 0;
}