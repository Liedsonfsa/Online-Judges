#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long

int main() {


    optimize;

    queue <int> fila;

    int t;

    cin >> t;

    while(t--){
        int n, value;

        cin >> n;

        if(n == 1){
            cin >> value;

            fila.push(value);
        } else if(n == 2){
            if(!fila.empty())
                fila.pop();
        } else{
            if(fila.empty()){
                cout << "Empty!" << endl;
            } else{
                cout << fila.front() << endl;
            }
        }

        
    }


    return 0;
}