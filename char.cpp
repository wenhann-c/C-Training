#include <iostream>
using namespace std;


void print(int z)
{
    cout << z << '\n';
}

int main()
{
    int x = 0;
    [[maybe_unused]] int y = 0; //to avoid warnings and errors when there is a variable not used
    cout << "Enter a number: ";
    cin >> x;
    cout << static_cast<char>(x) << endl;
    print(true);
    print('!');

    return 0;
}

// void print(char x)
// {
//     cout << x << endl;
// }

// int main()
// {
//     int y = 0;
//     cout << "Enter a number: ";
//     cin >> y;
//     print(y);

//     return 0;
// }
