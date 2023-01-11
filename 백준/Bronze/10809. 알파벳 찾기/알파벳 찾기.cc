#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, arr[26];
    string word;

    for (i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    cin >> word;

    for (i = 0; i < word.size(); i++) {
        if (arr[word[i] - 'a'] == -1) {
            arr[word[i] - 'a'] = i;
        }
    }

    for (i = 0; i < 26; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}