#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int big = (n>6)?n:6;
    int csgbs = n*6;
    int v=1;
    
    for (int i=1;i<=big;i++){
        if(6%i==0&&n%i==0){
            v=i;
        }
    }
    
    csgbs /=v;
    answer = csgbs/6;
    return answer;
}