#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin()) 

int main() {

    int conta = 0, n, value;

    cin >> n;

    while(n--){
        string s1;

        cin >> s1;

        if(s1 == "donate"){
            cin >> value;
            conta += value;
        } else{
            cout << conta << endl;
        }
    }



    return 0;
}