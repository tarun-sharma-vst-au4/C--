#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int getMaxOpti(vector<vector<int>> &accounts)
{
    int richest = 0;
    for (auto &customer : accounts)
    {
        richest = max(richest, accumulate(customer.begin(), customer.end(), 0));
    }
    return richest;
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

    int ans = getMaxOpti(vect);
    cout << "Ans is -->" << ans << endl;

    return 0;
}
