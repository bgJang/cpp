#include <iostream>

int main()
{
    int left, right, result;
    char oper;

    while(1)
    {
        std::cout << "? " ;
        std::cin >> left >> oper >> right;

        switch(oper) {
        case '+':
            result = left + right;
            break;    
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            result = left / right;
            break;
        case '%':
            result = left % right;
            break;
        }
        
        std::cout << left << " " << oper << " " << right << " = " << result << std::endl;
    }
    
}