#include <iostream>
using namespace std;

int main()
{
    cout << "inter a ,b,c,d" << std::endl;
    char button;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "namaste" << endl;
        break;
    case 'c':
        cout << "hole" << endl;
        break;
    case 'd':
        cout << "chimabu" << endl;
        break;

    default:
        std::cout << "input a valid char" << std::endl;
        break;
    }

    return 0;
}