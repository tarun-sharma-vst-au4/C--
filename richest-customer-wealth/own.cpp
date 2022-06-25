/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int getMax(vector<vector<int>> &vect)
{
    int max = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < vect[i].size(); j++)
        {
            // cout<<vect[i][j] << endl;
            sum = sum + vect[i][j];
        }
        cout << "Sum is " << sum << endl;
        if (sum >= max)
        {
            max = sum;
        }
    }

    return max;
}

void printArr(vector<vector<int>> &vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << endl;
        }
    }
}
int main()
{
    vector<vector<int>> vect{
        {1, 5},
        {7, 3},
        {3, 5}};

    int ans = getMax(vect);
    cout << "Ans is -->" << ans << endl;

    return 0;
}
