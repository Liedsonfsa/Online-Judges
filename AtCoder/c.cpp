#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {

    int t;

    ll n, m, a, b;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> m >> a >> b;

        cout << floor((a * i + b) / m) << endl;
    }


    return 0;
}