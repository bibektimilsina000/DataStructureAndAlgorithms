#include <iostream>
using namespace std;

int main()
{

    int num;
    bool flag = 0;

    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            std::cout << "not prime" << std::endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        std::cout << "prime number" << std::endl;
    }

    return 0;
}