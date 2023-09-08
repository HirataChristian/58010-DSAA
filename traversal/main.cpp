
#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Use curly braces for array initialization
    int n = 10;

    cout << "Traversal Algorithm:" << endl;
    for (int i = 0; i < n; i++) // Change i<=n to i<n to avoid accessing out-of-bounds element
    {
        cout << "num[" << i << "] = " << num[i] << endl;
    }

    return 0;
}



