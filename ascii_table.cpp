#include <iostream>

int main()
{
    for(int i = 0; i <= 200; ++i)
        
        std::cout << i << "         " << static_cast<char>(i) << std::endl;
    
    std::cout << '\n';

    return 0;
}
