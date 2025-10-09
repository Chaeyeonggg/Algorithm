#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    // 순서대로 나열한 후, 중앙 인덱스의 값 추출
    int count =0;
    for(int i =0;i<array_len;i++){
        for(int j=i+1;j<array_len;j++){
            if(array[i]>array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        
        
    }
    
    answer = array[array_len/2];
    return answer;
}