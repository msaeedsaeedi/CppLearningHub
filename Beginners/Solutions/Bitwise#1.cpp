#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    cout << "The number after unsetting the";
    cout << " rightmost set bit " << (n & (n - 1));
    return 0;
}
