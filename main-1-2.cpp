#include <iostream>

extern double array_mean(int array[], int n);
using namespace std;

int main()
{
    int array[5] = {1,2,3,4,3};
    cout << array_mean(array, 5) << endl;
    return 0;
}
