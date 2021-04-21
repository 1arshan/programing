def make_palindrome(n):
    palindrome_n=""
    temp=n
    #print(temp)
    while temp!=0 :
        palindrome_n=palindrome_n+str(temp%10)
        temp=int(temp/10)
    #print(palindrome_n)
    return int(palindrome_n)

def check_palindrome(n):
    n=str(n)
    for i in range(int(len(n)/2)):
        if n[i]==n[-(i+1)]:
            continue
        else:
            return 0
    return 1


def solve_question(n):
    #n=int(n)
    temp_n =make_palindrome(n)
    n=n+temp_n

    while check_palindrome(n) !=1:
        temp_n=make_palindrome(n)
        n=n+temp_n
    return n

print(solve_question(4))
#make_palindrome(100)
#print(check_palindrome(452254))