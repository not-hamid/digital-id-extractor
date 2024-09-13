# Sum of Even Digits from Student ID

## Description

This C++ program calculates the sum of even digits in the numeric part of a student ID. The user inputs their student ID, which typically begins with two letters followed by a series of digits. The program extracts the numeric part, identifies the even digits, and computes their sum.

## Features

- Accepts a student ID from the user.
- Extracts the numeric part of the ID.
- Displays the even digits from the numeric part.
- Calculates and outputs the sum of the even digits.

## How It Works

1. **Input**: The user enters their student ID (e.g., `BC240203201`).
2. **Process**:
   - The program extracts the numeric part from the student ID.
   - It identifies the even digits in the numeric part.
   - It calculates the sum of these even digits.
3. **Output**: The program displays the extracted numeric part, the even digits, and their sum.

## Usage

1. Compile the program using a C++ compiler (e.g., `g++`).
   
   ```bash
   g++ sum_of_even_digits.cpp -o sum_of_even_digits
   ```

2. Run the compiled program.

   ```bash
   ./sum_of_even_digits
   ```

3. When prompted, enter your student ID:

   ```
   Enter Student ID: BC240203201
   ```

4. The program will output the following:

   ```
   Student ID: BC240203201
   Digital part of Student ID: 240203201
   Even digits: 0 2 0 2 0 4 2 
   Sum of even digits: 10
   ```

## Code Explanation

- **`sumOfEvenDigits(int num)`**: A function that calculates the sum of even digits in a given number.
- **`main()`**:
  - Prompts the user to enter their student ID.
  - Extracts the numeric part of the ID.
  - Displays the even digits and their sum.

## Example Output

```
Enter Student ID: BC240203201
Student ID: BC240203201
Digital part of Student ID: 240203201
Even digits: 0 2 0 2 0 4 2 
Sum of even digits: 10
```

## Requirements

- C++ compiler (e.g., `g++`)

## Author

This program was created to demonstrate simple numeric processing of student IDs using C++.

---
