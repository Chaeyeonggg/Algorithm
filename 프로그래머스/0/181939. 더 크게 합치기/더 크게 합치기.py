def solution(a, b):
    answer = 0
    ab = str(a)+str(b)
    ba = str(b)+str(a)
    if ab > ba:
        answer = int(ab)
    else:
        answer = int(ba)
    return answer