Lan task 3
Q1
#include <iostream>
const int rows = 3;
const int columns = 3;
int main() {
 int array[rows][columns];
 int sum = 0;
 int product = 1;
 double average;
 // Take input from the user
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < columns; j++) {
 cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
 cin >> array[i][j];
 sum += array[i][j];
 product *= array[i][j];
 }
 }
 // Calculate average
 average = (double) sum / (rows * columns);
 cout << "\nSum: " << sum << endl;
 cout << "Product: " << product << endl;
 cout << "Average: " << average << endl;
 return 0;
}
Q2
#include <iostream>
int main() {
 int a, b;
 cout << "Enter value of a: ";
 cin >> a;
 cout << "Enter value of b: ";
 cin >> b;
 // Print original values
 cout << "\nOriginal Values: " << endl;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 // Swap values using pointers
 int* pA = &a;
 int* pB = &b;
 int temp = *pA;
 *pA = *pB;
 *pB = temp;
 // Print swapped values
 cout << "\nSwapped Values: " << endl;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 return 0;
}
Q3
#include <iostream>
const int size = 10;
int main() {
 int array[size];
 int largest = INT_MIN;
 int smallest = INT_MAX;
 // Take input from the user
 for (int i = 0; i < size; i++) {
 cout << "Enter value " << i + 1 << ": ";
 cin >> array[i];
 // Update largest and smallest values
 if (array[i] > largest)
 largest = array[i];
 if (array[i] < smallest)
 smallest = array[i];
 }
 // Display largest and smallest values
 cout << "\nLargest Value: " << largest << endl;
 cout << "Smallest Value: " << smallest << endl;
 return 0;
}
Q4
#include <iostream>
const int months = 12;
int main() {
 double rainfall[months];
 double totalRainfall = 0;
 double averageRainfall;
 double highestRainfall = -1;
 int highestMonth;
 double lowestRainfall = INT_MAX;
 int lowestMonth;
 // Take input from the user
 for (int i = 0; i < months; i++) {
 cout << "Enter rainfall for month " << i + 1 << ": ";
 cin >> rainfall[i];
 // Update total rainfall
 totalRainfall += rainfall[i];
 // Update highest rainfall
 if (rainfall[i] > highestRainfall) {
 highestRainfall = rainfall[i];
 highestMonth = i + 1;
 }
 // Update lowest rainfall
 if (rainfall[i] < lowestRainfall) {
 lowestRainfall = rainfall[i];
 lowestMonth = i + 1;
 }
 }
 // Calculate average rainfall
 averageRainfall = totalRainfall / months;
 // Display results
 cout << "\nTotal Rainfall: " << totalRainfall << endl;
 cout << "Average Rainfall: " << averageRainfall << endl;
 cout << "Month with highest rainfall: Month " << highestMonth << " with " << highestRainfall << "
units of rainfall" << endl;
 cout << "Month with lowest rainfall: Month " << lowestMonth << " with " << lowestRainfall << " units
of rainfall" << endl;
 return 0;
}
Q5
#include <iostream>
const int rows = 3;
const int columns = 3;
int main() {
 int array[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 int total = 0;
 // Calculate total of all elements
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < columns; j++) {
 total += array[i][j];
 }
 }
 // Calculate average
 double average = (double) total / (rows * columns);
 // Calculate row total
 int row = 1;
 int rowTotal = 0;
 for (int i = 0; i < columns; i++) {
 rowTotal += array[row - 1][i];
 }
 // Calculate column total
 int column = 2;
 int columnTotal = 0;
 for (int i = 0; i < rows; i++) {
 columnTotal += array[i][column - 1];
 }
 // Find highest in row
 int highestInRow = array[row - 1][0];
 for (int i = 1; i < columns; i++) {
 if (array[row - 1][i] > highestInRow)
 highestInRow = array[row - 1][i];
 }
 // Find highest in column
 int highestInColumn = array[0][column - 1];
 for (int i = 1; i < rows; i++) {
 if (array[i][column - 1] > highestInColumn)
 highestInColumn = array[i][column - 1];
 }
 // Display results
 cout << "\nTotal of all elements: " << total << endl;
 cout << "Average of all elements: " << average << endl;
 cout << "Total of row " << row << ": " << rowTotal << endl;
 cout << "Total of column " << column << ": " << columnTotal << endl;
 cout << "Highest in row " << row << ": " << highestInRow << endl;
 cout << "Highest in column " << column << ": " << highestInColumn << endl;
 return 0;
}
Q6
#include <iostream>
int main() {
 int size;
 std::cout << "Enter the size of the array: ";
 std::cin >> size;
 int* array = new int[size];
 int sumOfOdd = 0;
 for (int i = 0; i < size; i++) {
 std::cout << "Enter element " << i + 1 << ": ";
 std::cin >> array[i];
 if (array[i] % 2 != 0) {
 sumOfOdd += array[i];
 }
 }
 std::cout << "Sum of odd integers: " << sumOfOdd << std::endl;
 delete[] array;
 return 0;
}
Q7
#include <iostream>
int main() {
 int var = 10;
 int* ptr = &var;
 std::cout << "Value of var: " << var << std::endl;
 std::cout << "Address of var: " << &var << std::endl;
 std::cout << "Value of ptr: " << *ptr << std::endl;
 return 0;
}
Q8
#include <iostream>
int main() {
 int a, b;
 std::cout << "Enter value of a: ";
 std::cin >> a;
 std::cout << "Enter value of b: ";
 std::cin >> b;
 int* ptrA = &a;
 int* ptrB = &b;
 std::cout << "Value of a: " << a << std::endl;
 std::cout << "Value of ptrA: " << *ptrA << std::endl;
 std::cout << "Value of b: " << b << std::endl;
 std::cout << "Value of ptrB: " << *ptrB << std::endl;
 return 0;
}
Q9
#include <iostream>
void Menu() {
 std::cout << "Calculator Menu" << std::endl;
 std::cout << "1. Addition" << std::endl;
 std::cout << "2. Subtraction" << std::endl;
 std::cout << "3. Division" << std::endl;
 std::cout << "4. Multiplication" << std::endl;
 std::cout << "5. Power" << std::endl;
 std::cout << "6. Exit" << std::endl;
}
int Addition(int a, int b) {
 return a + b;
}
int Subtraction(int a, int b) {
 return a - b;
}
double Division(int a, int b) {
 if (b == 0) {
 std::cerr << "Error: Division by zero" << std::endl;
 return 0;
 }
 return (double)a / b;
}
int Multiplication(int a, int b) {
 return a * b;
}
int Pow(int number, int pow) {
 return number * pow;
}
int main() {
 while (true) {
 Menu();
 int choice;
 std::cout << "Enter your choice: ";
 std::cin >> choice;
 if (choice == 6) {
 break;
 }
 double result;
 int a, b;
 switch (choice) {
 case 1:
 std::cout << "Enter two numbers: ";
 std::cin >> a >> b;
 result = Addition(a, b);
 std::cout << "Result: " << result << std::endl;
 break;
 case 2:
 std::cout << "Enter two numbers: ";
 std::cin >> a >> b;
 result = Subtraction(a, b);
 std::cout << "Result: " << result << std::endl;
 break;
 case 3:
 std::cout << "Enter two numbers: ";
 std::cin >> a >> b;
 result = Division(a, b);
 std::cout << "Result: " << result << std::endl;
 break;
 case 4:
 std::cout << "Enter two numbers: ";
 std::cin >> a >> b;
 result = Multiplication(a, b);
 std::cout << "Result: " << result << std::endl;
 break;
 case 5:
 std::cout << "Enter a number and a power: ";
 std::cin >> a >> b;
 result = Pow(a, b);
 std::cout << "Result: " << result << std::endl;
 break;
 default:
 std::cout << "Invalid choice" << std::endl;
 break;
 }
 }
 return 0;
}
