#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool isSquare(int a, int b, int c, int d) {
    return (a == b && b == c && c == d);
}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin>>t;

    while(t--){


        int a , b , c , d;

        cin>>a>>b>>c>>d;

        if(isSquare(a,b,c,d))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }



    return 0;
}