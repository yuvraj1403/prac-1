#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main()
{
    int array[] = {1,1,1};
    int array2[] = {2,2,2};
    std::cout << sum_two_arrays(array, array2, 3) << std::endl;
    return 0;
}
