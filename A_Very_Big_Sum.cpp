#include<bits/stdc++.h>
using namespace std;
long long int aVeryBigSum () {
    long long int n; cin >> n;
    long long int sum = 0;
    for(int i = 0; i < n; i++) {
        long long int x; cin >> x;
        sum += x;
    }
    
    return sum;
}
int main() {
    cout << aVeryBigSum () << endl;
}