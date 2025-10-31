#include <bits/stdc++.h>
using namespace std;

void firstNonRepeating(string s) {
    queue<char> q;
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
        q.push(c);

        while (!q.empty() && freq[q.front()] > 1) q.pop();

        if (q.empty()) cout << -1 << " ";
        else cout << q.front() << " ";
    }
}

int main() {
    string s = "abcab";
    firstNonRepeating(s);
}
