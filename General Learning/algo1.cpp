#include <iostream>
#include <cmath>
using namespace std;

int reverseNum(int num)
{
    int reverseNumber = 0;
    while (num > 0)
    {
        int remainder = num % 10;
        reverseNumber = reverseNumber*10 + remainder;
        num = floor(num/10);
    }
    return reverseNumber;
}

bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << reverseNum(number) << endl;
    cout << isPrime(number) << endl;
    return 0;
}