#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int num1 = 42;
    double num2 = 3.14159;

    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;

    return 0;
}
