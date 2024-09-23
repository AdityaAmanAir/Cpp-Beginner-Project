#include <iostream>
using namespace std;
int main()
{ int64_t Number; char32_t Alphabet;
    cout << " \n This Programme will tell you that if a number is odd or Even.\n \n Insert a number : ";
    if(cin >> Number)
    {
        if (Number%2==0)
        {
            cout << "The number " << Number << " is EVEN.\n";
        }else {
            cout << "The number " << Number << " is ODD.\n";
        }
    }else if(cin >> Alphabet)
    {
        cout << "It is an Alphabet!";
    }else{
        cout << "It is not a number!";
    }
    return 0;
}