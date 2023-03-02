#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int matrix[4][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    int dir = 0;
    int left = 0;
    int right = n - 1;
    int top = 0;
    int down = n - 1;

    while (left <= right && top <= down) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                printf("%d ", matrix[top][i]);
            }
            top++;
        }
        else if (dir == 1) {
            for (int i = top; i <= down; i++) {
                printf("%d ", matrix[i][right]);
            }
            right--;
        }
        else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[down][i]);
            }
            down--;
        }
        else if (dir == 3) {
            for (int i = down; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
    return 0;
}