// problem link
// https://www.codechef.com/problems/OG


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int n;
	    cin >> n;
	    long long int res = 0;

	    for(int i = 1;i <= 9;i++){
	        long long int val = (n - i)/9 + 1;
	        res += i*val;
	    }

	    cout << res << endl;
	}

}
