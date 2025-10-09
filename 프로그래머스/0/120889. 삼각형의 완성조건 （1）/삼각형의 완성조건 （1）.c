#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    
    int longest = sides[0];
    int sum =0;
    
    for(int i =0;i<sides_len;i++){
        if(sides[i]>longest){
            longest = sides[i];
        }
    }
    for(int i =0;i<sides_len;i++){
            sum+=sides[i];
    }
    sum-=longest;
    
    if(sum>longest){
        answer = 1;
    }
    else if(sum<longest)
        answer = 2;
    else
        answer =2;
    
    return answer;
}