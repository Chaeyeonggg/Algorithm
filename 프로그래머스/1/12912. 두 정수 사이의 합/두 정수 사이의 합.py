def solution(a, b):
    min = 0
    sum = 0
    if a == b:
        return a
    else:
        if a > b:
            min = b
            while b <= a:
                sum += b
                b += 1
            return sum
        else:
            min = a
            while b >= a:
                sum += a
                a += 1
            return sum
            