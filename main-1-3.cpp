#include <iostream>

extern int num_count(int array[], int n, int number);

int main()
{
    int array[] = {1,2,3,4,5};
    std::cout << num_count(array, 5, 5) << std::endl;
}
