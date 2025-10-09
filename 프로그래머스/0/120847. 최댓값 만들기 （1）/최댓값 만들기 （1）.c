#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int big1 = 0;
    int temp = 0;
    int big2 = 0;
    
    // 배열에서 가장 큰 값 추출 후, 그 자리의 인덱스를 0으로 바꿈
    // 수정된 배열에서 가장 큰 값 추출
    
    for(int i = 0;i<numbers_len;i++){
        if(big1 < numbers[i]){
            big1 = numbers[i];
            temp = i;
        }
    }
    numbers[temp]=0;
    
    for(int i = 0;i<numbers_len;i++){
        if(big2 < numbers[i]){
            big2 = numbers[i];
        }
    }
    answer = big1*big2;
    return answer;
}