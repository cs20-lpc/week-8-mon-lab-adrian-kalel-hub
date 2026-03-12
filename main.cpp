#include <iostream>
#include <string>
#include "ArrayStack.hpp"
using namespace std;

int main() {

    // create stack with max size 5
    ArrayStack<int> stack(5);

    cout << "Initial stack:\n";
    cout << stack << "\n";

    // test push
    cout << "Pushing elements:\n";
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout << stack << "\n";

    // test peek
    cout << "Top element: " << stack.peek() << "\n\n";

    // test pop
    cout << "Popping top element:\n";
    stack.pop();

    cout << stack << "\n";

    // test rotate left
    cout << "Rotating LEFT:\n";
    stack.rotate(Stack<int>::LEFT);

    cout << stack << "\n";

    // test rotate right
    cout << "Rotating RIGHT:\n";
    stack.rotate(Stack<int>::RIGHT);

    cout << stack << "\n";

    // test copy constructor
    cout << "Testing copy constructor:\n";
    ArrayStack<int> stackCopy(stack);

    cout << "Copied stack:\n";
    cout << stackCopy << "\n";

    // test assignment operator
    cout << "Testing assignment operator:\n";
    ArrayStack<int> stackAssign(5);
    stackAssign = stack;

    cout << "Assigned stack:\n";
    cout << stackAssign << "\n";

    // test clear
    cout << "Clearing stack:\n";
    stack.clear();

    cout << stack << "\n";

    cout << "--------------------------------------\n" <<"test with strings\n" << "--------------------------------------\n";

    // create stack with max size 5
    ArrayStack<string> string_stack(5);

    cout << "Initial stack:\n";
    cout << string_stack << "\n";

    // test push
    cout << "Pushing elements:\n";
    string_stack.push("Hello");
    string_stack.push("my");
    string_stack.push("name");
    string_stack.push("is");

    cout << string_stack << "\n";

    // test peek
    cout << "Top element: " << string_stack.peek() << "\n\n";

    // test pop
    cout << "Popping top element:\n";
    string_stack.pop();

    cout << string_stack << "\n";

    // test rotate left
    cout << "Rotating LEFT:\n";
    string_stack.rotate(Stack<string>::LEFT);

    cout << string_stack << "\n";

    // test rotate right
    cout << "Rotating RIGHT:\n";
    string_stack.rotate(Stack<string>::RIGHT);

    cout << string_stack << "\n";

    // test copy constructor
    cout << "Testing copy constructor:\n";
    ArrayStack<string> stackCopy2(string_stack);

    cout << "Copied stack:\n";
    cout << stackCopy2 << "\n";

    // test assignment operator
    cout << "Testing assignment operator:\n";
    ArrayStack<string> stackAssign2(5);
    stackAssign2 = string_stack;

    cout << "Assigned stack:\n";
    cout << stackAssign2 << "\n";

    // test clear
    cout << "Clearing stack:\n";
    string_stack.clear();

    cout << string_stack << "\n";

    return 0;
}