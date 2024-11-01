Lab task 4
Q1
#include <iostream>
// Stack class
class Stack {
private:
 struct Node {
 char data;
 Node* next;
 };
 Node* top;
public:
 // Constructor
 Stack() : top(nullptr) {}
 // Destructor
 ~Stack() {
 while (top != nullptr) {
 Node* temp = top;
 top = top->next;
 delete temp;
 }
 }
 // Push element onto stack
 void push(char data) {
 Node* newNode = new Node();
 newNode->data = data;
 newNode->next = top;
 top = newNode;
 }
 // Pop element from stack
 void pop() {
 if (isEmpty()) {
 std::cerr << "Error: Stack is empty" << std::endl;
 return;
 }
 Node* temp = top;
 top = top->next;
 delete temp;
 }
 // Return top element
 char peek() {
 if (isEmpty()) {
 std::cerr << "Error: Stack is empty" << std::endl;
 return '\0';
 }
 return top->data;
 }
 // Clear the stack
 void clear() {
 while (top != nullptr) {
 Node* temp = top;
 top = top->next;
 delete temp;
 }
 top = nullptr;
 }
 // Check if stack is empty
 bool isEmpty() {
 return top == nullptr;
 }
};
// Function to reverse a string using stack
void reverseString(Stack& stack, const char* str) {
 int length = 0;
 while (str[length] != '\0') {
 length++;
 }
 for (int i = 0; i < length; i++) {
 stack.push(str[i]);
 }
 std::cout << "Reversed string: ";
 for (int i = 0; i < length; i++) {
 std::cout << stack.peek();
 stack.pop();
 }
 std::cout << std::endl;
}
int main() {
 Stack stack;
 const char* str = "hello";
 reverseString(stack, str);
 return 0;
}
