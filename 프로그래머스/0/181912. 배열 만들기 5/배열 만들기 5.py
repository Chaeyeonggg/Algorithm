def solution(intStrs, k, s, l):
    answer = []
    i = 0
    while i <= len(intStrs) -1:
        string = intStrs[i]
        num = string[s:s+l]
        num = int(num)
        if num > k:
            answer.append(num)
        i += 1
    return answer