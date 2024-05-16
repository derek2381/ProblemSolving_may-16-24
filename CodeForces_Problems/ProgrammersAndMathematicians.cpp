// problem link
// https://codeforces.com/problemset/problem/1611/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        long long int val = a+b;
        int min;
        if(a > b){
            min = b;
        }else{
            min = a;
        }
        val /= 4;
        if(val > min){
            cout << min << endl;
        }else
        {
            cout << val << endl;
        }

    }
}
