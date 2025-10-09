#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int ans;
    int numer = (numer1*denom2) +(numer2*denom1);
    int denom = (denom1*denom2);
    int* answer = (int*)malloc(sizeof(int)*4);
    
    
    ans = ((numer1*denom2) +(numer2*denom1)) / (denom1*denom2);
    
    int big = (numer>denom)?numer:denom;
    
    for(int i=big;i>1;i--){
        if(numer%i==0 && denom%i==0){
            numer/=i;
            denom/=i;
        }
    }
    answer[0]=numer;
    answer[1]=denom;
    
    
    return answer;
}