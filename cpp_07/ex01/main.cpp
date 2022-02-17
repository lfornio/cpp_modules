#include "iter.hpp"

int main(void)
{
    int arr[] = {1, 5, 10, 0, 4, 7, 7, 1};
    // double arr[] = {1.5, 5.1, 10.2, 0, 4.0, 7.3};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    iter(arr, len, addTwo);
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}