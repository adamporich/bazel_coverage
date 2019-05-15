#include <iostream>

extern int multiply(int a, int b);

int main(int argc, char const *argv[])
{
    std::cout << "Hello " << multiply(21,2) << std::endl;
    return 0;
}
