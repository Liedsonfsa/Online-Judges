#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
 
using namespace std;
 
 
int main() {
 
 
    int n;
 
    cin >> n;
 
    ll num;
 
    for(int i = 1; i <= n; i++){
        cin >> num;

        bool ver = false;

        if(num % 2 == 0){
            ver = false;
        } else{
            for(ll j = 3; j <= num; j += 2){
                if((num % j == 0) && (j % 2 != 0)){
                    ver = true;
                    break;
                }
            }
        }
 
        

        if(ver){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}