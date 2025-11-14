// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <fstream>  
// using namespace std;

// void getName(int size, vector<char> &a, ifstream &inFile) {
//     char n;
//     for (int i = 0; i < size; i++) {
//         inFile >> n;
//         a.push_back(n);
//     }
// }

// bool isName(vector<char> &a, vector<char> &b){
//     int size = b.size();

//     for (int i = 0; i < size; i++) {

//         auto it = find(b.begin(), b.end(), a[i]);
//         if (it != b.end())
//         b.erase(it);
//     }


//     if(b.size()==0)
//         return true;


//     return false;
// }

// // int main() {
// //     ifstream inFile("input.txt"); 

// //     if (!inFile) {
// //         cerr << "Error: could not open input file." << endl;
// //         return 1;
// //     }

// //     int t;
// //     inFile >> t;

// //     while (t--) {
// //         int size = 0;
// //         inFile >> size;

// //         vector<char> a;
// //         vector<char> b;

// //         getName(size, a, inFile);
// //         getName(size, b, inFile);

// //         if (isName(a, b))
// //             cout << "YES" << endl;
// //         else
// //             cout << "NO" << endl;
// //     }

// //     inFile.close();
// //     return 0;
// // }



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



