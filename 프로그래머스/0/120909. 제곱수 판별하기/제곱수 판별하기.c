#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=1000;i++){
        if(n<i){
            answer =2;
            return answer;
        }
        if((i*i)==n){
            answer=1;
            return answer;
        }
    }
    answer = 2;
    return answer;
}