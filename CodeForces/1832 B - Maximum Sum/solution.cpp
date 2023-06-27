#include <bits/stdc++.h>

using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define DIV(a, b) ((a) / (b))
#define MULT(a, b) ((a) * (b))
#define SOMA(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define endl '\n'
#define pb push_back
#define array vector<int>
#define ll long long
#define run_fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {

    run_fast;

    int t;

    cin >> t;

    while(t--){
        int n, k;

        cin >> n >> k;

        //array ar(n + 1);
        vector<ll>ar(n + 1);
        ar[0] = 0;

        array arr(n);

        for(int i = 0; i < n; i++){
            int v;

            cin >> v;

            arr[i] = v;
        }

        sort(arr.begin(), arr.end());

        int i, j;
        for(i = 1, j = 0; i <= n; i++, j++){
            ar[i] = ar[i - 1] + arr[j];
            //arr.pb(v);
        }

        if(k == 1){
            cout << max(ar[n] - ar[2], ar[n] - arr[n - 1]) << endl;
        } else if(k == 2){
            cout << ar[n] - (ar[2] + arr[n - 1]) << endl;
            //cout << max(max(ar[n] - (ar[2] + arr[n - 1]), ar[n] - arr[n - 1]), max(ar[n] - ar[4], ar[n] - arr[n - 2])) << endl;
            //cout << max(max(ar[n] - ar[2], ar[n] - ar[4]), max()) << endl;
        }

        // min min max
    }

// https://codeforces.com/problemset/problem/1832/B

    return 0;
}