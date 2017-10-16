#include <iostream>

using namespace std;

int main()
{
    short int k, d, result;
    cin >> k >> d;
    result =  (((k + d) - 2) % 7) + 1;
    cout << result << endl;
    return 0;
}
