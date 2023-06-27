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

int gcd(int a, int b){
    while(b--){
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int pour(int A, int B, int C){
    int a = A;
    int b = 0;
    int c = 1;

    while(a != C && b != C){
        int x = min(B - b, a);

        a = a - x;
        b += x;
        c++;

        if(a == C || b == C){
            break;
        }

        if(a == 0){
            a = A;
            c++;
        }

        if(b == B){
            b = 0;
            c++;
        }

       
    }

    return c;

}

int main() {


    int t;

    cin >> t;

    int a, b, c;

    while( t-- ){
        cin >> a;
        cin >> b;
        cin >> c;

        if(c > a && c > b){
            cout << "-1" << endl;
        } else if(a == c || b == c){
            cout << "1" << endl;
        } else if(c % gcd(a, b) != 0){
            cout << "-1" << endl;
        } else{
            int x = min(pour(a, b, c), pour(b, a, c));
            cout << x << endl;
        }

    }





    return 0;
}