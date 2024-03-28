#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <numeric>
using namespace std;

bool comp_first_asc(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

bool comp_first_desc(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first > b.first;
}

bool comp_second_asc(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.second < b.second;
}

int count_greater(vector<pair<int, string>> &players, int x)
{
    int cnt = 0;
    stable_sort(players.begin(), players.end(), comp_first_desc);
    for (int i = 0; i < players.size(); i++)
    {
        if (players[i].first <= x)
            break;
        cnt++;
    }
    return cnt;
}

int count_equal(vector<pair<int, string>> &players, int x)
{
    int cnt = 0;
    for (int i = 0; i < players.size(); i++)
    {
        if (players[i].first == x)
            cnt++;
    }
    return cnt;
}

int main()
{
    vector<pair<int, string>> players;
    ifstream fin;
    fin.open("player.txt");
    if (!fin)
    {
        cout << "Error while opening file\n";
        exit(1);
    }
    string line;
    while (!fin.eof())
    {
        getline(fin, line);
        istringstream iss(line);
        string getScore;
        string name;
        getline(iss, name, ',');
        getline(iss, getScore, ',');
        int score = stoi(getScore);
        players.push_back({score, name});
    }

    // -- 1 -- //
    cout << "Task-1:\n  Alphabetical Order:\n";
    stable_sort(players.begin(), players.end(), comp_second_asc);
    for (auto p : players){
        cout << "    " << p.second << " --> " << p.first << endl;
    }
    // -- 2 -- //
    cout << "Task-2:\n  Top 5 scores:\n";
    stable_sort(players.begin(), players.end(), comp_first_desc);
    for (int i = 0; i < 5; i++){
        cout << "    " << players[i].second << " --> " << players[i].first << endl;
    }
    // -- 3 -- //
    cout << "Task-3:\n  Reverse Order(Ascending):\n";
    stable_sort(players.begin(), players.end(), comp_first_asc);
    for (auto p : players){
        cout << "    " << p.second << " --> " << p.first << endl;
    }
    // -- 4 -- //
    cout << "Task-4:\n    Number of players with more the score x(80) --> " << count_greater(players, 80) << endl;

    // -- 5 -- //
    cout << "Task-5:\n    NUmber of players with same score x(67) --> " << count_equal(players, 67) << endl;

    // -- 6 -- //
    vector<pair<int, string>> v;
    copy(players.begin(), players.end(), back_inserter(v));
    cout << "Task-6:\n    The vectors are qual? : ";
    cout << ((equal(players.begin(), players.end(), v.begin())) ? "YES" : "NO") << endl;

    // -- 8 -- //
    int sum = 0;
    cout << "Task-8:\n    Avg : " << static_cast<double>(accumulate(players.begin(), players.end(), sum) / players.size()) << endl;

    // -- 7 -- //
    cout << "Task-7:\n  After Merging:\n";
    
    vector<pair<int, string>> other = {{56, "asdf"}, {87, "ghjkl"}, {35, "qwert"}, {99, "yuiop"}, {15, "zxcv"}, {100, "bnm"}};
    stable_sort(players.begin(), players.end(), comp_first_desc);
    stable_sort(other.begin(), other.end(), comp_first_desc);
    vector<pair<int, string>> merged(players.size()+other.size());
    merge(players.begin(), players.end(), other.begin(), other.end(), merged.begin(), comp_first_desc);
    for (auto p : merged)
        cout << "    " << p.second << " --> " << p.first << endl;

    return 0;
}