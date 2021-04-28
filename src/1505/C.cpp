#include <iostream>
using namespace std;

string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int num[26];

int ascii_diff(char a, char b) { return abs(int(a) - int(b)); }
int alpha_diff(char a, char b) {
    int i = 0;
    while (alpha[i] != a) {
        i++;
    }
    int j = 0;
    while (alpha[j] != b) {
        j++;
    }
    i = num[i];
    j = num[j];
    return abs(i - j);
}

int main() {
    for (int i = 0; i < 26; i++) {
        num[i] = i + 1;
    }
    // for (auto &&i : num) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << alpha_diff('H', 'E') << endl;
    string a;
    cin >> a;
    bool isEQUAL = true;
    for (int i = 1; a[i] != '\0'; i++) {
        if (!(alpha_diff(a[i - 1], a[i]) == ascii_diff(a[i - 1], a[i]))) {
            isEQUAL = false;
            break;
        }
    }
    cout << ((isEQUAL) ? "YES" : "NO") << endl;
    return 0;
}