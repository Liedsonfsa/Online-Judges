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

    arr palpites(n);

    for(int i = 0; i < n; i++){
        cin >> palpites[i];
    }

    arr erros(n);

    for(int i = 0; i < n; i++){
        cin >> erros[i];
    }




    return 0;
}


