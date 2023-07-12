#include <bits/stdc++.h>

using namespace std;

int N, target;
double dist[20][20], memo[1 << 16];

double matching(int bitmask){
    if(memo[bitmask] > -0.5)
        return memo[bitmask];
    if(bitmask == target)
        return memo[bitmask] = 0;
    
    double ans = 2000000000.0;
    int p1, p2;
    for(p1 = 0; p1 < 2 * N; p1++)
        if(!(bitmask & (1 << p1)))
            break;
        
    for(p2 = p1; p2 < 2 * N; p2++)
        if(!(bitmask & (1 << p2)))
            ans = min(ans, dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));
    
    return memo[bitmask] = ans;
}

int main() {

    int i, j, cases = 1, x[20], y[20];

    while(scanf("%d", &N)){
        for(i = 0; i < 2 * N; i++)
            scanf("%*s %d %d", &x[i], &y[i]);
        
        for(i = 0; i < 2 * N; i++)
            for(j = i + 1; j < 2 * N; j++)
                dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);
            
        
        for(i = 0; i < (1 << 16); i++) memo[i] = -1.0;
        target = (1 << (2 * N));
        printf("Case %d: %.2lf\n", cases++, matching(0));
    }


    return 0;
}

// https://maratona.facom.ufu.br/

// https://beduka.com/blog/exercicios/matematica-exercicios/exercicios-de-probabilidade/

// https://www.todamateria.com.br/exercicios-de-fracoes/

// https://matematicabasica.net/exercicios-de-probabilidade-e-probabilidade-condicional/#:~:text=A%20probabilidade%20de%20um%20n%C3%BAmero,40%20ou%20par%20%C3%A9%20de%3F&text=Logo%3A,%E2%80%93%20P(A%20%E2%88%A9%20B)&text=Portanto%2C%20a%20probabilidade%20de%20um,ou%20par%20%C3%A9%20de%2080%25.