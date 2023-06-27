#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define array vector<int>
#define arr vector<ll>

int main() {

    optimize;

    ll n;
    ll novo;

    cin >> n;

    novo = n;

    cout << novo << endl;

    while(1){
        if(novo < 10) break;

        ll resto = novo / 10;

        ll mod = novo % 10;

        novo = resto * 3 + mod;

        cout << novo << endl;

    }
    

    return 0;
}



