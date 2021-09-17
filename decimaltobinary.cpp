#include <iostream>
#include <cmath>
using namespace std;

  long convertDecimalToBinary(int);

int main()
{
     long n, binaryNumber;
    cin >> n;
    binaryNumber = convertDecimalToBinary(n);
    cout<<  binaryNumber;
    return 0;
}

 long convertDecimalToBinary( int n)
{
      long binaryNumber = 0;
     long int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
