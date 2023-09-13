#include <iostream>
#include <string>
using namespace std;

int main(void)
{
 int input;
 input = processInput();
 cout << “Number is ”
 << input << endl;
}
int processInput()
{
 int input;
 cout << “Numerical input processor” << endl;
 cout << “Enter a number: ”;
 cin >> input;
 return input;
}
