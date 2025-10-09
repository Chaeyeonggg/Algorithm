#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    answer = 12000 * n;
    
    if(n >= 10){
        answer +=2000*(k-(n/10));
    }
    else{
        answer += 2000 * k;
    }
    
    return answer;
}