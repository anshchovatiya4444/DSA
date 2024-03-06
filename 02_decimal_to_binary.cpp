#include <iostream>

using namespace std;
void decimal_to_binary(int n);

int main(void)
{

    int N;

    cout << endl
         << "enter the numinter you want to convert : ";
    cin >> N;

    decimal_to_binary(N);
}

void decimal_to_binary(int n)
{
    int decimal[64];
    int i = 0;
    while (n != 0)
    {
        decimal[i] = n % 2;
        n /= 2;
        i++;
    }

    cout << "binary representation of the number is ";
    while (i > 0)
    {
        cout << decimal[i - 1];
        i--;
    }
}
