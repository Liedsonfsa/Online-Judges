#include <bits/stdc++.h>

using namespace std;

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long

int main(){

    optimize;
    
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M, 0));

    int S;
    cin >> S;

    for (int i = 0; i < S; i++) {
        int X, Y, R;
        cin >> X >> Y >> R;

        X--;
        Y--;

        for (int j = max(0, X - R); j <= min(N - 1, X + R); j++) {
            for (int k = max(0, Y - R); k <= min(M - 1, Y + R); k++) {
                int dx = abs(X - j);
                int dy = abs(Y - k);

                if (dx + dy <= R) {
                    grid[j][k]++;
                }
            }
        }
    }

    int soma = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            soma += grid[i][j];
        }
    }

    double media = (double) soma / (N * M);
    int Z = static_cast<int>(media);
    cout << Z << endl;

  return 0;
}

// bee146@maratonasbc2023.beecrowd.com.br
// SBC2023@044490