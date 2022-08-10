#include <iostream>
using namespace std;
int key;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;

            continue;
        }
    }
    return false;
}

int main()
{

    int arr[10] = {13, 89, 6, -3, 1, 4, 1, 7, 22, 0};

    std::cout << "enter the key" << std::endl;
    int key;
    cin >> key;

    bool check = search(arr, 10, key);

    if (check)
    {
        std::cout << "key found in array" << std::endl;
    }
    else
    {
        std::cout << "key not found" << std::endl;
    }
    return 0;
}