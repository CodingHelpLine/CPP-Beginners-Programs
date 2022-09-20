/******************************************************************************
 * Temperature conversion Program
 ******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>

// we import std or we import statements we want to use
using std::cout;
using std::cin; 
using std::endl;
using std::ios;

const double ABS_ZERO = 273.15; 

// -------------------- Function prototypes ------------------------------------
double cToF(double celsius);
double fToC(double fahrenheit);
double cToK(double celsius);
double kToC(double kelvin);
double fToK(double f);
double kToF(double k);
int menu();

// ----------------------- Main Method ---------------------------------------
int main() {
  
    int choice; 
    double input;
    double result; 
    
    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(2);

    do {
     
        // ask for menu option
        choice = menu();
        cout << endl;
        
        // Read input temperature
        cout << "Please enter temperature to convert: ";
        cin >> input; 

        if(choice == 1) { // C to F
            result = cToF(input); 
            cout << input << " Celsius to Fahrenheit is " << result << endl;
        } else if(choice == 2) { // F to C
            result = fToC(input); 
            cout << input << " Fahrenheit to Celsius is " << result << endl;
        } else if(choice == 3) { // C to K
            result = cToK(input); 
            cout << input << " Celsius to Kelvin is " << result << endl;
        } else if(choice == 4) { // K to C
            result = kToC(input); 
            cout << input << " Kelvin to Celsius " << result << endl;
        } else if(choice == 5) { // F to K
            result = fToK(input); 
            cout << input << " Fahrenheit to Kelvin is " << result << endl;
        } else if(choice == 6) { // K to F
            result = kToF(input); 
            cout << input << " Kelvin to Fahrenheit is " << result << endl;
        } else {
            cout << "GoodBye!..." << endl;
        }
       
        cout << endl;
    } while(choice != 0);

    return 0; 
}

// --------------------- Function Implementation ------------------------------
/**
 * Function to convert Celsius to Fahrenheit. 
 * 
 * @param celsius temp
 * @return Fahrenheit temp
 */
double cToF(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

/**
 * Function to convert Fahrenheit to Celsius. 
 * 
 * @param fahrenheit temp
 * @return Celsius temp
 */
double fToC(double fahrenheit) {
    return (fahrenheit-32) * 5.0/9.0;
}

/**
 * Celsius to Kelvin
 * 
 * @param celsius temp
 * @return kelvin
 */
double cToK(double celsius) {
    return celsius + ABS_ZERO;
}

/**
 * Kelvin to Celsius
 * 
 * @param kelvin temp
 * @return Celsius temp
 */
double kToC(double kelvin) {
    return kelvin - ABS_ZERO;
}

/**
 * Fahrenheit to Kelvin
 * 
 * @param f temperature
 * @return kelvin temperature
 */
double fToK(double f) {
    return cToK(fToC(f));
}

/**
 * Kelvin to Fahrenheit
 * 
 * @param k
 * @return f
 */
double kToF(double k) {
    return cToF(kToC(k));
}

/**
 * Menu to show options
 * 
 * @return choice 
 */
int menu() {
    cout << "Welcome to Temperature Menu" << endl;
    cout << "1. Celsius to Farenheit" << endl;
    cout << "2. Farenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    int choice;
    
    do {
        cout << "Enter choice: ";
        cin >> choice;
        
        if(choice < 0 || choice > 6) {
            cout << "Invalid Entry - try again" << endl;
        }
        
    }while(choice < 0 || choice > 6);
    
    return choice; 
}
