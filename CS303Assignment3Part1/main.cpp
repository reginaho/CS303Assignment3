#include <iostream>
#include "ExpressionManager.h"
using namespace std;

int main() {
    ExpressionManager manager;
    string expression;

    cout << "Enter an infix expression: ";
    getline(cin, expression);

    if (manager.isBalanced(expression)) {
        string postfix = manager.infixToPostfix(expression);

        cout << "The postfix expression is: " << postfix << endl;
    }
    else {
        cout << "Error: Expression is not balanced" << endl;
    }

    return 0;
}