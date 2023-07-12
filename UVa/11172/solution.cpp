#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin()) 

int main() {

    int n;

    cin >> n;

    ll a, b;

    while(n--){
        cin >> a >> b;

        if(a == b){
            cout << "=" << endl;
        } else if(a > b){
            cout << ">" << endl;
        } else{
            cout << "<" << endl;
        }

    }

    return 0;
}

// https://brasilescola.uol.com.br/matematica/probabilidade-condicional.htm#:~:text=A%20probabilidade%20condicional%20%C3%A9%20a%20chance%20de%20um%20determinado%20evento,anteriormente%20%C3%A9%20conhecido%20como%20condicionante.