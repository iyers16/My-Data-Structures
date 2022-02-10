#include <iostream>

int main()
{
    std::cout << "Array program starting..." << std::endl << std::endl;
    int array[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i)
    {
        std::cout << "Printing out array:" << std::endl;
        std::cout << "Element " << i << ": " << array[i] << std::endl;
    }
    std::cout << std::endl << "Array program ending..." << std::endl;
    return 0;
}