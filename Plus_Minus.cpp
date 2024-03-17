#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] > 0){
            pos++;
        }
        else if(a[i] < 0){
            neg++;
        }
        else{
            zero++;
        }
    }
    double p = (double)pos / (double)n;
    double ne = (double)neg / (double)n;
    double z = (double)zero / (double)n;
    cout << fixed << setprecision(6) << p << endl;
    cout << fixed << setprecision(6) << ne << endl;
    cout << fixed << setprecision(6) << z << endl;
    return 0;
}