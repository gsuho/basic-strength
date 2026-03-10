//
// Created by 곽수호 on 26. 3. 11.
//

#include <stdio.h>

// 아래 함수를 완성하세요
// Complete the function below
int hanoi(int n, char from, char to, char aux) {
    // Base case: If only one disk, move it and return 1

    // Recursive case:
    // 1. Move (n-1) disks from 'from' to 'aux' using 'to' as auxiliary
    // 2. Move the nth disk from 'from' to 'to'
    // 3. Move (n-1) disks from 'aux' to 'to' using 'from' as auxiliary

    // Return total number of moves
}

int main() {

    int n = 3;
    // printf("Enter the number of disks: ");
    // scanf("%d", &n);

    int moves = hanoi(n, 'A', 'C', 'B'); // Move n disks from A to C using B
    printf("Total moves required: %d\n", moves);

    return 0;
}
