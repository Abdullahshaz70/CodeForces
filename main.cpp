#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Array(int s){

    vector<int> result;

    for(int i = 1 ; i <= s ; i++){
        for(int j = 1 ; j <= i ; j++){
            result.push_back(j);
        }
    }
    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {

        int size;
        cin>>size;

        int size_of_subaaray;
        cin>>size_of_subaaray;

        vector<int> sub;

        for(int i = 0 ; i < size_of_subaaray ; i++){
            int num;
            cin>>num;
            sub.push_back(num);
        }

        vector<int> result = Array(size);


       

           

    }
    return 0;
}
