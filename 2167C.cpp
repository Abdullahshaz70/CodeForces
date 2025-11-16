#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        vector<int> a;

        int num;
        cin>>num;

        while(num--){
            int n;
            cin>>n;
            a.push_back(n);
        }


        bool even = false ; bool odd = false;

        for(auto n : a){
            if(n%2==0)
                even = true;
            else
                odd = true;
        }

        if(odd && even)
            sort(a.begin() , a.end());


        for(int i = 0 ; i < a.size() ; i++)
            cout<<a[i]<<" ";

            cout<<endl;


    }



    return 0;
}