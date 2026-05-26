def solution(arr, flag):
    answer = []
    for i in range(len(arr)):
        if flag[i] == True:
            j = arr[i] * 2
            while j > 0:
                answer.append(arr[i])
                j -= 1
        if flag[i] == False:
            j = arr[i]
            while j > 0:
                answer.pop(len(answer)-1)
                j -= 1
    return answer