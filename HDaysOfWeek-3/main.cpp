#include <iostream>

using namespace std;

int main()
{
    short int k, d, result;
    cin >> k >> d;
    result = (k - k/7 * 7) - d/7;
    cout << result << endl;
    return 0;
}
