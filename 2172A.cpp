#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int num;

    vector<int> scores;

    for(int i = 0 ; i < 3  ; i++){
        cin>>num;
        scores.push_back(num);
    }

    sort(scores.begin() , scores.end());
    int max = *max_element(scores.begin() , scores.end());
    int min = *min_element(scores.begin() , scores.end());

    int diff = abs(max - min);

    if(diff >=10)
        cout<<"check again";
    else
        cout<<"final " << scores[1];
    


    return 0;
}