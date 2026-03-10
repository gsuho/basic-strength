//
// Created by 곽수호 on 26. 3. 11.
//

#include <stdio.h>

// 아래 함수를 완성하세요
// Complete the function below
int hanoi(int n, char from, char to, char aux) {
    // Base case: If only one disk, move it and return 1
    if (n == 1) {return 1;}
    // Recursive case:
    // 1. Move (n-1) disks from 'from' to 'aux' using 'to' as auxiliary
    // 2. Move the nth disk from 'from' to 'to'
    // 3. Move (n-1) disks from 'aux' to 'to' using 'from' as auxiliary
    int moves=0;
    moves += hanoi(n-1, from, aux, to);//1번 동작. n-1개를 옮겨놓음
    //n번째 원판이 시작점에서 옮길 수 있는 상태로 있음.
    moves++; //n번째 원판을 시작점에서 종점으로 옮김. = 2번 동작
    moves += hanoi(n-1,aux, to,from); //3번 동작. 임시기둥에 옮겨놓은 나머지 n-1개 원판들을 목적지로 옮김.
    // Return total number of moves
    return moves;
}

int main() {

    int n = 3;
    // printf("Enter the number of disks: ");
    // scanf("%d", &n);

    int moves = hanoi(n, 'A', 'C', 'B'); // Move n disks from A to C using B
    printf("Total moves required: %d\n", moves);

    return 0;
}
