#include <iostream>
using namespace std;

int main() 
{
    int t1, t2, n;

    // Get no. of terms from user
    cout << "Enter the 1st term: ";
    cin >> t1;

    // Get no. of terms from user
    cout << "Enter the 2nd term: ";
    cin >> t2;

    // Get no. of terms from user
    cout << "Enter the number of terms: ";
    cin >> n;

    // Print the first two terms t1 and t2
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    // Initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // Print 3rd to nth terms
    for (int i = 3; i <= n; i++) 
    {
        if (i != n)
        {
            cout << nextTerm << ", ";
        }
        else
        {
            cout << nextTerm;
        }
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}