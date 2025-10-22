#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    int v =1 ; // 최종 값
    while(v<=n){
        answer = i;
        v*=i;
        i++;
    }
    answer--;
    return answer;
}