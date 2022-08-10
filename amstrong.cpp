#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    int org;

    cin >> num;
    org = num;

    while (num > 0)
    {
        int lastnum = num % 10;
        sum = sum + pow(lastnum, 3);

        num /= 10;
    }

    std::cout << org << std::endl;
    std::cout << sum << std::endl;
    if (org == sum)
    {
        std::cout << "amrstrong number" << std::endl;
    }
    else
    {
        std::cout << "not armstrong number" << std::endl;
    }

    return 0;
}