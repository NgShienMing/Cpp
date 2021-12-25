#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int digit = 3;
    int data[] = {
        1590, 276, 580, 246, 5005, 3315, 6595, 9788, 223, 6613,
        2836, 3891, 6204, 7035, 401, 912, 662, 123, 472, 428, 8507,
        9259, 78, 1817, 8075, 3581, 3669, 680, 740, 2569, 0, 7827,
        2402, 8311, 1955, 453, 9014, 402, 8323, 6941, 692, 8565,
        3568, 3471, 4916, 807, 3610, 938, 633, 743
    };
    int digitSumLimit = 10;
    for (int i = 0; i < sizeof(data)/sizeof(data)[0]; i++)
    {
        int num = data[i];
        string numStr = to_string(num);
        if (numStr.length() == digit)
        {
            // Length of string 
            int strlen = numStr.length();
            // Declaring character array
            char numArr[strlen];
            // Copying the contents of the string to char array
            strcpy(numArr, numStr.c_str());
            // Initialise sum
            int digitSum = 0;
            // Adding up the digits
            for (int j = 0; j < sizeof(numArr)/sizeof(numArr)[0]; j++)
            {
                int digit = numArr[j] - '0';
                digitSum += digit;
            }
            if (digitSum < digitSumLimit)
            {
                cout << num << endl;
            }
        }
    }
    return 0;
}