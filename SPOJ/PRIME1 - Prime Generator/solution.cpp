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
#define ll long long

int main() {


    int n;

    cin >> n;

    while( n-- ){
        ll a, b;

        cin >> a >> b;

        

        while(a <= b){
        
            bool prime = true;

            if(a == 1){
                prime = false;
            } else{
                int i = a--;
                while(i > 1){
                    if(a % i == 0) prime = false;
                    i--;
                }
            }

            a++;

        }

        cout << endl;
    }





    return 0;
}