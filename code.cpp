#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "number is : ";
    cin >> n;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }

    return 0;
}