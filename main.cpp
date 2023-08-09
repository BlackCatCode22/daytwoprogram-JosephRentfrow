#include <iostream>

using namespace std;

int main()
{
    string characterName = "Tom";
    int characterAge;
    characterAge = 50;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old " << endl;
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "but he did not like being " << characterAge << endl;

    cout << "\n" << endl;
    cout << "     /|" << endl;
    cout << "    / |" << endl;
    cout << "   /  |" << endl;
    cout << "  /   |"  << endl;
    cout << " /____|" << endl;

    int num1 = 0;
    int num2 = 0;
    int theSum = 0;
    int theProduct = 0;
    cout << "\n Please enter the first number... ";
    cin >> num1;

    cout << "\n Please enter the second number... ";
    cin >> num2;

    theSum = num1 + num2;
    cout << "\n\n The sum is " << theSum << "!\n\n";
    theProduct = num1 * num2;
    cout << "\n\n The product is " << theProduct << "! \n";

     return 0;
}
