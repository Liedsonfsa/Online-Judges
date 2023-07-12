#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin()) 

void solve(int i){
    cout << "Case " << i << ": ";
}

int main() {

    string s;
    int i = 1;

    while (cin >> s)
    {
        if(s == "#") break;

        solve(i);

        if(s == "HELLO"){
            cout << "ENGLISH";
        } else if(s == "HOLA"){
            cout << "SPANISH";
        } else if(s == "HALLO"){
            cout << "GERMAN";
        } else if(s == "BONJOUR"){
            cout << "FRENCH";
        } else if(s == "CIAO"){
            cout << "ITALIAN";
        } else if(s == "ZDRAVSTVUJTE"){
            cout << "RUSSIAN";
        }

        i++;

        cout << endl;
    }
    

    return 0;
}