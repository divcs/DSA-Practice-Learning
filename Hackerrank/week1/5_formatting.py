import string
import sys


def keep_alpha(i_string: str):
    n_string = []
    for i in i_string:
        if i.isalpha():
            n_string.append(i)
    return ''.join(n_string)


def get_cap(i_string: str):
    first_cap = []
    for i in range(len(i_string)):
        if not i_string[i] in string.ascii_lowercase:
            first_cap.append(i)
    first_cap.append(len(i_string))
    return first_cap


def get_string_list(i_string: str):
    s = []
    rng = get_cap(i_string)
    rng.insert(0, 0)
    for i in range(len(rng) - 1):
        n = rng[i]
        x = rng[i + 1]
        s.append(i_string[n:x])
    n = [i for i in s if i]
    return n


def split_operation(i_string: str):
    c_name = keep_alpha(i_string)
    n = ' '.join(i.lower() for i in get_string_list(c_name))
    return n

def combine_operation(i_string: str, class_type: str):
    n = []
    l_name = i_string.split()
    for i in range(len(l_name)):
        if class_type != 'C':
            if i == 0:
                n.append(l_name[i].lower())
            else:
                n.append(l_name[i].title())
        else:
            n.append(l_name[i].title())
    if class_type == 'M':
        n.append('()')
    return ''.join(n)


def convert(i_string: str):
    operation = i_string[0]
    class_type = i_string[2]
    class_name = i_string[4:]
    if operation == 'S':
        return split_operation(class_name)
    else:
        return combine_operation(class_name, class_type)


if __name__ == '__main__':
    for line in sys.stdin:
        print(convert(line.strip()))

# word =  "S;M;plasticCup()"
# word = "S;C;LargeSoftwareBook"
# word = "C;V;mobile phone"
word = "C;M;mouse pad"