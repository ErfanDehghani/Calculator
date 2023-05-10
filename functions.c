//
// Created by Erfan on 5/10/2023.
//

#include "headers/functions.h"

int isEntity(char character)
{
    return (character == '+' || character == '-' || character == '*' || character == '/' || character == ']' || character == ')') ? 1 : 0;
}
int isOperator(char character)
{
    return (character == '+' || character == '-' || character == '*' || character == '/') ? 1 : 0;
}
int isComplexMath(char character)
{
    return (character == 's' || character == 'c' || character == 't' || character == 'a' || character == 'r') ? 1 : 0;
}
int operatorValue(char character)
{
    switch (character) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case SIN:
        case COS:
        case TAN:
        case ARCTAN:
        case SQRT:
            return 3;
        case ')':
        case ']':
            return 4;
        default:
            return 0;
    }
}