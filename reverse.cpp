#include <iostream>
using namespace std;

int main()
{
    int num;
    int reverse = 0;

    cin >> num;

    while (num > 0)
    {
        int lastdigit = num % 10;
        reverse = reverse * 10 + lastdigit;
        num /= 10;
    }

    std::cout << reverse << std::endl;

    return 0;
}