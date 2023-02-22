from itertools import permutations


BASE62 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

def decode(string, alphabet=BASE62):
    base = len(alphabet)
    strlen = len(string)
    num = 0

    idx = 0
    for char in string:
        power = (strlen - (idx + 1))
        num += alphabet.index(char) * (base ** power)
        idx += 1

    return num


key = None

# way too big, cannot brute force base-62 key
for permutation in permutations(BASE62, 62):
    if decode('cGp', permutation) == 15840: # First entry from resource
        key = permutation

print(key)