def solution(s):
    s = s.lower()
    p_ = 0
    y_ = 0
    for i in range(len(s)):
        if s[i] == "p":
            p_ += 1
        if s[i] == "y":
            y_ += 1
    if p_ != y_:
        return False
    else:
        return True
            