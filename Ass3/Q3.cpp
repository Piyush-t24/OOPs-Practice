/*Q.3 A five-digit positive integer is entered through the keyboard, write a C++ Program to
calculate sum of digits of the 5-digit number.*/

#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<< "Enter a 5 - digit positive integer :";
    cin>> num;

    while (num!=0)
    {
       sum+= num%10;
       num/=10;
    }

    cout<<"Sum of digits of 5-digit number is: "<< sum;
    return 0;
    
}