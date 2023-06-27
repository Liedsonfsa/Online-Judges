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

long long fact(int i){
    if(i == 0){
        return 1;
    } else{
        return i * fact(i - 1);
    }
}

int main() {


    int n;

    cin >> n;

    int num;

    for(int i = 0; i < n; i++){
        cin >> num;

        cout << fact(num) << endl;
    }


    return 0;
}