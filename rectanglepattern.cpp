#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}