#include <iostream>
using namespace std;
int main()
{
    // Request for memory space for an int
    int *pointsToAnAge = new int;
    // Use the allocated memory to store a number
    cout << "Enter your dog’s age: ";
    cin >> *pointsToAnAge;
    cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl;
    delete pointsToAnAge;

    return 0;
}