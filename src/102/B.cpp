#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;
    int str_len = str.size();
    if (str_len == 1) {
        cout << "0" << endl;
        return;
    }
    int spell_cnt = 0;
    while (true) {
        if (str_len == 1) break;
        int sum = 0;
        for (auto &i : str) {
            sum += i - '0';
        }
        spell_cnt++;
        str = to_string(sum);
        str_len = str.size();
    }
    cout << spell_cnt << endl;
}

int main() {
    solve();
    return 0;
}