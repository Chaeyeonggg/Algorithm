def solution(my_string, queries):
    answer = ''
    i = 0
    my_string = list(my_string)
    while i <= len(queries)-1:
        first = queries[i][0]
        last = queries[i][1]
        j = first
        k = last
        while j <= k:
            temp1 = my_string[j]
            temp2 = my_string[k]
            my_string[j] = temp2
            my_string[k] = temp1
            j+=1
            k-=1
        i+= 1        
    for l in range(len(my_string)):
        answer += my_string[l]
    return answer