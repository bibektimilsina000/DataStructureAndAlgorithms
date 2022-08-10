#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "" << std::endl;
}

void revarr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (end >= start)
    {
        swap(arr[start], arr[end]);
        end--;
        start++;
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {7, 8, 9, 10, 11};

    revarr(arr, 6);
    revarr(brr, 5);

    printarr(arr, 6);
    printarr(brr, 5);

    return 0;
}