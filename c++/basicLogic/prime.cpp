#include <iostream>
#include <cmath>
using namespace std;
int main()
{int64_t Number, i= 2;
bool isPrime = true, isPositive = false;
    cout << "\n This programme will tell you that if a number is Prime or not.\n Insert a number :  ";
    cin >> Number;
    while (Number > 1, i<= sqrt(Number))
    {
       if(Number%i==0)
            {
              isPrime = false;
              cout << " The number " << Number << " is NOT a Prime.";
             break;
            }
        else
            {
              ++i;
            }
    }
        if(isPrime == true && Number > 1)
        {
            isPositive = true;
            cout << "The number " << Number << " is PRIME.";
        }
        if(isPrime == true && isPositive == false)
        {
            cout << "The number " << Number << " is NOT a Prime.";
        }
     return 0;
}