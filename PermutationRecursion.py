# Recursive function to generate permutations
def permute(s, l, r):
    
    if l == r:
        print("".join(s))
    else:
        for i in range(l, r + 1):
            s[l], s[i] = s[i], s[l]  # swap
            permute(s, l + 1, r)     # recursive call
            s[l], s[i] = s[i], s[l]  # backtrack


# Input from user
string = input("Enter a string: ")

s = list(string)

print("Permutations are:")
permute(s, 0, len(s) - 1)
