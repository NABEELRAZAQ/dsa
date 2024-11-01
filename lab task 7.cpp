Lab Task#07 Data Structures & Algorithm
Question#01:
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
 int left = 0, right = n - 1;
 while (left <= right) {
 int mid = left + (right - left) / 2;
 cout << "Active items: ";
 for (int i = left; i <= right; ++i) {
 cout << arr[i] << " ";
 }
 cout << endl;
 if (arr[mid] == target) {
 return mid;
 } else if (arr[mid] < target) {
 left = mid + 1;
 } else {
 right = mid - 1;
 }
 }
 return -1; // Target not found
}
int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 5;
 int index = binarySearch(arr, n, target);
 if (index != -1) {
 cout << "Target found at index: " << index << endl;
 } else {
 cout << "Target not found" << endl;
 }
 return 0;
}
Question#02:
#include <iostream>
using namespace std;
int findFirstOccurrence(int arr[], int n, int target) {
 int left = 0, right = n - 1;
 int result = -1;
 while (left <= right) {
 int mid = left + (right - left) / 2;
 if (arr[mid] == target) {
 result = mid;
 right = mid - 1; // Move left to find the first occurrence
 } else if (arr[mid] < target) {
 left = mid + 1;
 } else {
 right = mid - 1;
 }
 }
 return result;
}
int main() {
 int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 5;
 int index = findFirstOccurrence(arr, n, target);
 if (index != -1) {
 cout << "First occurrence of target found at index: " << index << endl;
 } else {
 cout << "Target not found" << endl;
 }
 return 0;
}
Question#03:
#include <iostream>
using namespace std;
int findLastOccurrence(int arr[], int n, int target) {
 int left = 0, right = n - 1;
 int result = -1;
 while (left <= right) {
 int mid = left + (right - left) / 2;
 if (arr[mid] == target) {
 result = mid;
 left = mid + 1; // Move right to find the last occurrence
 } else if (arr[mid] < target) {
 left = mid + 1;
 } else {
 right = mid - 1;
 }
 }
 return result;
}
int main() {
 int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 5;
 int index = findLastOccurrence(arr, n, target);
 if (index != -1) {
 cout << "Last occurrence of target found at index: " << index << endl;
 } else {
 cout << "Target not found" << endl;
 }
 return 0;
}
Question#4:
#include <iostream>
using namespace std;
int findFirstOccurrence(int arr[], int n, int target);
int findLastOccurrence(int arr[], int n, int target);
int countOccurrences(int arr[], int n, int target) {
 int first = findFirstOccurrence(arr, n, target);
 if (first == -1) {
 return 0; // Target not found
 }
 int last = findLastOccurrence(arr, n, target);
 return last - first + 1;
}
int main() {
 int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 5;
 int count = countOccurrences(arr, n, target);
 cout << "Number of occurrences of target: " << count << endl;
 return 0;
}
