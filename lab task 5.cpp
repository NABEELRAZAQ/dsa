lab task 5
Q1
#include <iostream>
class Queue {
private:
 int* arr;
 int front, rear, size, max;
public:
 Queue(int capacity) {
 arr = new int[capacity];
 front = rear = -1;
 size = 0;
 max = capacity;
 }
 ~Queue() {
 delete[] arr;
 }
 void enqueue(int data) {
 if (size == max) {
 std::cout << "Queue is full" << std::endl;
 return;
 }
 if (rear == -1) {
 front = rear = 0;
 } else {
 rear++;
 }
 arr[rear] = data;
 size++;
 }
 int dequeue() {
 if (front == -1) {
 std::cout << "Queue is empty" << std::endl;
 return -1;
 }
 int data = arr[front];
 if (front == rear) {
 front = rear = -1;
 } else {
 front++;
 }
 size--;
 return data;
 }
 bool isEmpty() {
 return size == 0;
 }
 void display() {
 if (front == -1) {
 std::cout << "Queue is empty" << std::endl;
 return;
 }
 for (int i = front; i <= rear; i++) {
 std::cout << arr[i] << " ";
 }
 std::cout << std::endl;
 }
};
int main() {
 Queue queue(5);
 queue.enqueue(10);
 queue.enqueue(20);
 queue.enqueue(30);
 queue.display(); // 10 20 30
 queue.dequeue();
 queue.display(); // 20 30
 queue.enqueue(40);
 queue.display(); // 20 30 40
 queue.enqueue(50);
 queue.display(); // 20 30 40 50
 return 0;
}
Q2
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <string>
// Function to create multiple queues and display each queue
void createQueues(const std::string& inputString) {
 std::istringstream inputStream(inputString);
 std::string word;
 int queueNumber = 1;
 while (inputStream >> word) {
 std::cout << "Q" << queueNumber << " = ";
 for (char c : word) {
 std::cout << c << " ? ";
 }
 std::cout << std::endl;
 queueNumber++;
 }
}
// Function to create and concatenate queues
std::string createAndConcatenateQueues(const std::string& inputString) {
 std::istringstream inputStream(inputString);
 std::string word;
 std::string concatenatedQueue;
 while (inputStream >> word) {
 concatenatedQueue += word;
 }
 return concatenatedQueue;
}
int main() {
 std::string inputString;
 std::cout << "Enter a string: ";
 std::getline(std::cin, inputString);
 std::cout << "Queues:" << std::endl;
 createQueues(inputString);
 std::string concatenatedQueue = createAndConcatenateQueues(inputString);
 std::cout << "Concatenated queue: ";
 for (int i = 0; i < concatenatedQueue.length(); i++) {
 std::cout << concatenatedQueue[i];
 if (i < concatenatedQueue.length() - 1) {
 std::cout << " ? ";
 }
 }
 std::cout << std::endl;
 return 0;
}
