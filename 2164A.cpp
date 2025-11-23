#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {

        int t;
        cin >> t;

        vector<int> nums;       
        nums.reserve(t);

        for (int i = 0; i < t; i++) {
            int num;
            cin >> num;
            nums.push_back(num);
        }

        int check;
        cin >> check;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        if (mn <= check && mx >= check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
