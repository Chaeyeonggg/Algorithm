def solution(s):
    answer = ''
    duplicate = False
    for i in range(len(s)):
        for j in range(len(s)):
            if i != j and s[i] == s[j]:  
                duplicate = True
        if duplicate == False:
            answer += s[i]
        duplicate = False
    answer = list(answer)
    answer.sort()
    answer = "".join(answer)
    return answer