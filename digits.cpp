#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int num1, num2, num3, num4;
  int sum;
  int multiplication;
  cout << "Enter the first number: ";
  cin>> num1;
  cout << "Enter the second number: ";
  cin>> num2;
  cout << "Enter the third number: ";
  cin>> num3;
  cout << "Enter the fourth number: ";
  cin>> num4;

  sum = num1 + num2 + num3 + num4;
  multiplication = num1 * num2 * num3 * num4;

  cout << "Sum of the digits: " << sum << endl;
  cout << "Multiplication of the digits: " << multiplication << endl;

}
/*
Enter the first number: 1
Enter the second number: 4
Enter the third number: 2
Enter the fourth number: 3
Sum of the digits: 10
Multiplication of the digits: 24

///////////////////////////////////

Enter the first number: 5
Enter the second number: 8
Enter the third number: 7
Enter the fourth number: 9
Sum of the digits: 29
Multiplication of the digits: 2520

*/