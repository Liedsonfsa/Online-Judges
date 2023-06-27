#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long
#define array vector<int>
#define arr vector<ll>


bool is_square(int n) {
    int root = sqrt(n);
    return root * root == n;
}

bool is_multiple(int a, int b, int M) {
    return abs(a - b) % M == 0;
}

int first_move(int num_squares, int bob_move) {
    const int MOD = 2 * num_squares + 1;
    const int MAX = 4 * num_squares * num_squares;

    for (int alice_move = MAX; alice_move > bob_move; alice_move--) {
        if (is_square(alice_move) && is_multiple(alice_move, bob_move, MOD)) {
            return alice_move;
        }
    }
    
    return -1; 
}

int main() {
    int num_squares, bob_move;
    cin >> num_squares >> bob_move;
    cout << first_move(num_squares, bob_move) << endl;
    return 0;
}
