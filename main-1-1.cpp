#include <iostream>

extern int array_sum(int array[], int n);

int main()
{
    int array[] = {1,2,3};
    std::cout << array_sum(array, 3) << std::endl;
    return 0;
}
