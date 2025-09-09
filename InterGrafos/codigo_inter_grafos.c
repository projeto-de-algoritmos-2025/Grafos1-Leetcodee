#include <stdio.h>
#include <stdlib.h>

#define MAXN 500
#define MAXM 500

int n, m, k;
int properties[MAXN][MAXM];
int sizes[MAXN];
int adj[MAXN][MAXN];
int visited[MAXN];

int inter_contador(int *a, int sizeA, int *b, int sizeB) {
    int freq[10001] = {0}; 
    for (int i = 0; i < sizeA; i++) {
        freq[a[i]] = 1;
    }
    int count = 0;
    for (int i = 0; i < sizeB; i++) {
        if (freq[b[i]] == 1) {
            count++;
            freq[b[i]] = 2;
        }
    }
    return count;
}

void dfs(int u) {
    visited[u] = 1;
    for (int v = 0; v < n; v++) {
        if (adj[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++) {
        sizes[i] = m;
        for (int j = 0; j < m; j++) {
            scanf("%d", &properties[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int c = inter_contador(properties[i], sizes[i], properties[j], sizes[j]);
            if (c >= k) {
                adj[i][j] = adj[j][i] = 1;
            }
        }
    }

    // Contar componentes conexos
    int components = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i);
            components++;
        }
    }

    printf("%d\n", components);
    return 0;
}
