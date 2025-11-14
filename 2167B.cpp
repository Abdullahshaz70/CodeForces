#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getName(int size, vector<char> &a) {
    char n;
    for (int i = 0; i < size; i++) {
        cin >> n;
        a.push_back(n);
    }
}

bool isName(vector<char> &a, vector<char> &b) {
    int size = b.size();

    for (int i = 0; i < size; i++) {
        auto it = find(b.begin(), b.end(), a[i]);
        if (it != b.end())
            b.erase(it);
    }

    if (b.size() == 0)
        return true;

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int size = 0;
        cin >> size;

        vector<char> a;
        vector<char> b;

        getName(size, a);
        getName(size, b);

        if (isName(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}



