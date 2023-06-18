#include <iostream>

using namespace std;

int main()
{
    int numSets;
    cin >> numSets;

    while (numSets--)
    {
        int classSize, candies;
        cin >> classSize >> candies;

        if (classSize > 1)
        {
            double candiesPerFriend = candies / (classSize - 1);
            double remainder = candies - candiesPerFriend * (classSize - 1);

            if (remainder > 0)
                cout << "TAK" << endl;
            else
                cout << "NIE" << endl;
        }
        else
        {
            cout << "TAK" << endl;
        }
    }

    return 0;
}
