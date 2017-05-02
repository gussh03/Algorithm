#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX 102
int M, N, K, startI, startJ, endI, endJ;
int map[MAX][MAX], direct[4][2] = { { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
int discover[10000], totalLen;
void init() {
	for (int i = 0; i <= M + 1; i++) {
		map[i][0] = map[i][N + 1] = -1;
	}
	for (int j = 0; j <= N + 1; j++) {
		map[0][j] = map[M + 1][j] = -1;
	}
}
int dfs(int i, int j, int cnt) {
	int nextI, nextJ;
	if (map[i][j] != 0) return cnt;
	map[i][j] = 1, cnt++;
	for (int k = 0; k < 4; k++) {
		nextI = direct[k][0], nextJ = direct[k][1];
		cnt = dfs(i + nextI, j + nextJ, cnt);
	}
	return cnt;
}
int main() {
	scanf("%d %d %d", &M, &N, &K);
	init();
	for (int i = 0; i < K; i++) {
		scanf("%d %d %d %d", &startJ, &startI, &endJ, &endI);
		for (int k = startI + 1; k < endI + 1; k++) {
			for (int j = startJ + 1; j < endJ + 1; j++)
				map[k][j] = -1;
		}
	}
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			if (map[i][j] == 0) {
				discover[totalLen++] = dfs(i, j, 0);
			}
		}
	}
	printf("%d\n", totalLen);
	sort(discover, discover + totalLen);
	for (int i = 0; i < totalLen; i++)
		printf("%d ", discover[i]);
	printf("\n");
	return 0;
}
