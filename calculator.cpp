#include <iostream>
#include <cmath>

void printMath(double x, double y, char ch)
{
    switch (ch)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break; // don't fall-through to next case
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break; // don't fall-through to next case
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break; // don't fall-through to next case
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    case '^':
        std::cout << x << " ^ " << y << " = " << pow(x, y) << '\n';
        break;
    }
}

int main()
{
    while (true)
    {
        std::cout << "\nEnter the first number:\t";

        double a = 0;

        std::cin >> a;

        std::cout << "\nEnter the operator:\t";
        
        char c = 0;

        std::cin >> c;
        
        std::cout << "\nEnter the other number:\t";

        double b = 0;

        std::cin >> b;

        std::cout << "\nThe answer is:\n";

        printMath(a, b, c);

        std::cout << "\nCalculate again (y/n)?:\t";
        char d = 0;
        std::cin >> d;

        if (d == 'n')
            return 0;
    }

    return 0;
}
