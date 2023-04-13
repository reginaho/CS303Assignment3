#include "ExpressionManager.h"
using namespace std;

bool ExpressionManager::isBalanced(const string& expression) {
    stack<char> stack;

    for (const char& c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (stack.empty()) {
                return false;
            }
            else if (c == ')' && stack.top() == '(') {
                stack.pop();
            }
            else if (c == ']' && stack.top() == '[') {
                stack.pop();
            }
            else if (c == '}' && stack.top() == '{') {
                stack.pop();
            }
            else {
                return false;
            }
        }
    }

    return stack.empty();
}

string ExpressionManager::infixToPostfix(const string& expression) {
    string postfix;
    stack<char> stack;

    for (const char& c : expression) {
        if (c == '(') {
            stack.push(c);
        }
        else if (c == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }

            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            }
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
            while (!stack.empty() && precedence(c) <= precedence(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }

            stack.push(c);
        }
        else if (isalnum(c)) {
            postfix += c;
        }
    }

    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

int ExpressionManager::precedence(const char& op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    else {
        return 0;
    }
}