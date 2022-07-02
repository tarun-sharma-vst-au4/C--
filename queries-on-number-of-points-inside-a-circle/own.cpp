#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution
{
public:
    int getAns(vector<vector<int>> points, vector<int> queries)
    {
        int ans = 0;
        int h = queries[0];
        int k = queries[1];
        int r = queries[2];
        for (int i = 0; i < points.size(); i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            float d = sqrt(((x - h) * (x - h)) + ((y - k) * (y - k)));
            if (d <= r)
            {
                ans = ans + 1;
            }
        }
        return ans;
    }
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> answers;
        int ans;
        for (int i = 0; i < queries.size(); i++)
        {
            ans = getAns(points, queries[i]);
            answers.push_back(ans);
        }
        return answers;
    }
};
