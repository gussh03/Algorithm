#include<stdio.h>

typedef struct pos {
	int x;
	int y;
	int len;
}pos;

int X, Y;
int head = 0, tail = 0;

int xpos[4] = { 1,-1,0,0 };
int ypos[4] = { 0,0,1,-1 };
int map[101][101];
pos q[10202];

void init();
int check();


int main() {
	init();
	printf("%d", check());
}

void init() {
	scanf("%d %d", &Y, &X);

	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++) {
			scanf("%1d", &map[i][j]);

		}
	}
}

int check() {//���� ���޽� ���� ��ȯ�� ����
	q[tail].x = 0;
	q[tail].y = 0;
	q[tail].len = 1;
	map[0][0] = 2;
	tail++;

	while (1) {
		for (int i = 0; i < 4; i++) {
			if (map[q[head].y + ypos[i]][q[head].x + xpos[i]] == 1) { // ����� �˻��� �� �� �ִ� ���̸�
				if (q[head].y + ypos[i] == Y - 1 && q[head].x + xpos[i] == X - 1) return q[head].len + 1; //�ٵ� ������ �űⰡ ������ ��ǥ�� ����
																										  //�ƴ϶�� �ٽ� ť�� �׾ƾ�¡
				q[tail].x = q[head].x + xpos[i];
				q[tail].y = q[head].y + ypos[i];
				q[tail].len = q[head].len + 1;
				map[q[head].y + ypos[i]][q[head].x + xpos[i]] = 2; // �̹� �˻��Ѱ��� ������ ������ üũ

				tail++;
			}

		}
		head++;

	}
}