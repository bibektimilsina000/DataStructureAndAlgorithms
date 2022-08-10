#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << " " << std::endl;
}

void swaparr(int arr[], int size)
{

    for (int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[6] = {2, 1, 3, 4, 5, 7};
    std::cout << "array before swap:"
              << " ";
    print(arr, 6);

    swaparr(arr, 6);
    std::cout << "array  after swap:"
              << " ";
    print(arr, 6);

    return 0;
}