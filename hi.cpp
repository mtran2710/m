#include <iostream>
using namespace std;

int main()
{   
    int hours, payment;
    cout << "Please enter the number of hours you have worked:\n";
    cin >> hours;
    if (hours > 200) {
        payment = 2000 + (hours - 200) * 20;
    }
    else payment = hours * 10;
    cout << "Your salary is: " << payment << " USD\n";
    return 0;
}