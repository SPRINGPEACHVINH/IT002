#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second > b.second;
}
int main()
{
    freopen("paragraph_In.txt", "r", stdin);
    freopen("paragraph_Out.txt", "w", stdout);
    string paragraph;
    int countSentence = 0;
    getline(cin, paragraph);
    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
    cout << "Doan van duoc xu li la:\n"
         << paragraph << endl;
    for (int i = 0; i < paragraph.length(); i++)
    {
        if (paragraph[i] == '.' || paragraph[i] == '?' || paragraph[i] == '!')
            countSentence++;
    }
    cout << "\nDoan van co " << countSentence << " cau.\n";

    vector<int> countWord(countSentence, 0);
    vector<string> sentence, newParagraph;
    map<string, int> wordMap;
    stringstream ss(paragraph);
    string word;
    int sentenceIndex = 0;
    while (ss >> word)
    {
        if (word.back() == '.' || word.back() == '?' || word.back() == '!')
        {
            char lastChar;
            lastChar = word.back();

            countWord[sentenceIndex]++;
            sentenceIndex++;

            word.pop_back();
            wordMap[word]++;

            sentence.push_back(word);
            sort(sentence.begin(), sentence.end());
            sentence.push_back(string(1, lastChar));
            newParagraph.insert(newParagraph.end(), sentence.begin(), sentence.end());
            // newParagraph.push_back(" ");
            sentence.clear();
        }
        else
        {
            countWord[sentenceIndex]++;
            wordMap[word]++;
            sentence.push_back(word);
        }
    }
    vector<pair<string, int>> wordMapSorted(wordMap.begin(), wordMap.end());
    for (int i = 0; i < countSentence; i++)
    {
        cout << "Cau " << i + 1 << " co: " << countWord[i] << " tu.\n";
    }
    sort(wordMapSorted.begin(), wordMapSorted.end(), cmp);
    cout << "\nCac tu xuat hien nhieu trong doan van la: \n";
    for (auto &pair : wordMapSorted)
    {
        cout << pair.first << ": " << pair.second << " lan.\n";
    }
    cout << "\nDoan van sau khi sap xep la:\n";
    for (int i = 0; i < newParagraph.size(); i++)
    {
        if (newParagraph[i + 1] == "." || newParagraph[i + 1] == "?" || newParagraph[i + 1] == "!")
            cout << newParagraph[i];
        else
            cout << newParagraph[i] << " ";
    }
    return 0;
}
