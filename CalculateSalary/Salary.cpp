#include <iostream>
#include <iomanip>

using namespace std; 

int main() {

    // variables to store information
    double hourlyRate = 0; 
    double overtimePay = 0; 
    double regularPay = 0; 
    double overallPay = 0; 
    int hoursWorked = 0; 
    int overtimeHours = 0; 

    // Prompt to get the hours and rate
    cout << "Please enter hours Worked: ";
    cin >> hoursWorked;
    cout << "Please enter hourly Rate: ";
    cin >> hourlyRate;

    // Calculate overtime first
    if(hoursWorked > 40) {
        overtimeHours = hoursWorked - 40; 
        hoursWorked = 40; 
        overtimePay = overtimeHours * (1.5 * hourlyRate);
    }

    // calculate regular pay 
    regularPay = hoursWorked * hourlyRate;

    // overall pay
    overallPay = regularPay + overtimePay;

    // output salary
    cout << "Hours worked:                          " << (hoursWorked + overtimeHours) << endl; 
    cout << "Hourly Rate:                           " << hourlyRate << endl;
    cout << "Regular Pay:                           " << regularPay << endl;
    cout << "Overtime Pay:                          " << overtimePay << endl;
    cout << "Overall Pay:                           " << overallPay << endl;

    return 0; 
}
