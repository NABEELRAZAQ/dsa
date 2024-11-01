Lab task 2
Q1
#include <iostream>
using namespace std;
int main() {
 // Variable declaration and initialization
 int maxAge = 0;
 const int SIZE = 10;
 int studentAges[SIZE];
 // Take input from user
 cout << "Enter the ages of 10 students: \n";
 for (int i = 0; i < SIZE; i++) {
 cout << "Age of Student " << i + 1 << ": ";
 cin >> studentAges[i];
 }
 // Find the largest age
 maxAge = studentAges[0];
 for (int i = 1; i < SIZE; i++) {
 if (studentAges[i] > maxAge) {
 maxAge = studentAges[i];
 }
 }
 // Display the largest age
 cout << "\nThe largest age among the students is: " << maxAge << endl;
 return 0;
}
Q2
// Program to add three different arrays using dynamic memory allocation
#include <iostream>
using namespace std;
int main() {
 int arraySize, *array1, *array2, *array3, *sumArray;
 cout << "Enter the size of the arrays: ";
 cin >> arraySize;
 array1 = new int[arraySize];
 array2 = new int[arraySize];
 array3 = new int[arraySize];
 sumArray = new int[arraySize];
 cout << "Enter elements for array1: \n";
 for (int i = 0; i < arraySize; i++) {
 cin >> array1[i];
 }
 cout << "Enter elements for array2: \n";
 for (int i = 0; i < arraySize; i++) {
 cin >> array2[i];
 }
 cout << "Enter elements for array3: \n";
 for (int i = 0; i < arraySize; i++) {
 cin >> array3[i];
 sumArray[i] = array1[i] + array2[i] + array3[i];
 }
 cout << "Sum of the arrays: \n";
 for (int i = 0; i < arraySize; i++) {
 cout << "Element " << i + 1 << ": " << sumArray[i] << endl;
 }
 return 0;
}
Q3
// Program for linear search using dynamic array
#include <iostream>
using namespace std;
int main() {
 int arraySize, *array;
 int target;
 cout << "Enter the size of the array: ";
 cin >> arraySize;
 // Check for negative array size
 if (arraySize <= 0) {
 cout << "Array size must be a positive integer.";
 return 1;
 }
 // Dynamic memory allocation for array
 array = new int[arraySize];
 // Take input for array
 cout << "Enter elements for the array: \n";
 for (int i = 0; i < arraySize; i++) {
 cin >> array[i];
 }
 // Input target element to be searched
 cout << "Enter the target element to be searched: ";
 cin >> target;
 bool found = false;
 for (int i = 0; i < arraySize; i++) {
 if (array[i] == target) {
 cout << "Target element found at index " << i << endl;
 found = true;
 break;
 }
 }
 if (!found) {
 cout << "Target element not found in the array." << endl;
 }
 // Deallocate dynamic memory
 delete[] array;
 return 0;
}
