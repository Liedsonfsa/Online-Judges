#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())

int main() {

    string s1;

    int i = 1;

    while(cin >> s1){
        if(s1 == "*") break;
        
        cout << "Case " << i << ": ";

        if(s1 == "Hajj"){
            cout << "Hajj-e-Akbar";
        } else{
            cout << "Hajj-e-Asghar";
        }

        cout << endl;

        i++;

    }

    return 0;
}