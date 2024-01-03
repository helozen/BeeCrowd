#include <iostream>
using namespace std;

int main()
{
    double i, j;

    for (i = 0; i <= 2.0; i += 0.2)
    {
        for (j = 1; j <= 3; j++)
        {
            if (i == int(i) && j == int(i + j))
            {
                cout << "I=" << int(i) << " J=" << int(j) << endl;
            }
            else
            {
                cout << "I=" << i << " J=" << i + j << endl;
            }
        }
    }
}