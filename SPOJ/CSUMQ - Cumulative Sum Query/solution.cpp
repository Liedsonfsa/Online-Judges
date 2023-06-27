#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define array vector<int>
#define arr vector<ll>

int main() {

    int n;

    cin >> n;

    array valores(n);

    for(int i = 0; i < n; i++){
        cin >> valores[i];
    }


    int i, j, q;

    cin >> q;

    while(q--){
        cin >> i >> j;

        int sum = 0;

        for(int l = i; l <= j; l++){
            sum += valores[l];
        }


        cout << sum << endl;
    }

    

    return 0;
}