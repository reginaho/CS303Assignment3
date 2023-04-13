#ifndef EXPRESSION_MANAGER_H
#define EXPRESSION_MANAGER_H
using namespace std;

#include <string>
#include <stack>

class ExpressionManager {
public:
    bool isBalanced(const string& expression);
    string infixToPostfix(const string& expression);

private:
    int precedence(const char& op);
};

#endif