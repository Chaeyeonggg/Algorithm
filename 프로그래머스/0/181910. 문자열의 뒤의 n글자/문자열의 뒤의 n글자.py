def solution(my_string, n):
    answer = ""
    for i in range(n):
        answer =  my_string[(len(my_string)-1) -i]  + answer
    return answer