#include <iostream>
using namespace std;

// Function to calculate the sum of even digits
int sumOfEvenDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    string ID;
    
    // Taking student ID input from the user
    cout << "Enter Student ID: ";
    cin >> ID;
    
    cout << "Student ID: " << ID << endl;

    // Extracting the numeric part of the ID (after the first two characters)
    string numbers = ID.substr(2);
    cout << "Digital part of Student ID: " << numbers << endl;

    // Converting the numeric part to an integer
    int IDnumbers = stoi(numbers);

    // Showing even digits
    cout << "Even digits: ";
    int temp = IDnumbers; // Temporary variable to preserve original number for sum calculation
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
        temp /= 10;
    }
    cout << endl;

    // Calculating the sum of even digits
    int sumEvenNumber = sumOfEvenDigits(IDnumbers);
    cout << "Sum of even digits: " << sumEvenNumber << endl;

    return 0;
}
