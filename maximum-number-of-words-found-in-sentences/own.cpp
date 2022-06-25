#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int getNoOfWords(string sentence)
{
    int words = 0;
    int lenOfSentence = sentence.size();
    for (int i = 0; i < lenOfSentence; i++)
    {
        if (sentence[i] == ' ')
        {
            words++;
        }
    }

    words = words + 1;
    return words;
}

int main()
{
    vector<string> sentence = {"please wait", "continue to fight", "continue to win"};
    int max = 0;
    for (int i = 0; i < sentence.size(); i++)
    {

        int count = getNoOfWords(sentence[i]);
        if (count >= max)
        {
            max = count;
        }
    }
    cout << "Ans is -->" << max << endl;
    return 0;
}