def solution(num_list):
    mul = 1
    sum = 0
    for i in range(len(num_list)):
        mul = mul * num_list[i]
        sum = sum + num_list[i]
        
    if mul < (sum ** 2):
        return 1
    else:
        return 0