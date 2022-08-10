#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    std::cout << "printing the array" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{

    int third[15] = {3, 6};

    printarr(third, 2);

    return 0;
}