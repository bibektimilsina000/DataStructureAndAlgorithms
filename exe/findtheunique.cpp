#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int arr[7] = {3, 9, 90, 6, 6, 9, 3};

    for (int i = 0; i < 7; i++)
    {
        x = x ^ arr[i];
    }

    std::cout << x << std::endl;

    return 0;
}