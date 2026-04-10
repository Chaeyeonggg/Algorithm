def solution(a, b):
    answer = 0
    ab = int(str(a) + str(b))
    mul = 2 * a * b
    if ab > mul:
        answer = ab
    else:
        answer = mul
    return answer