def split_and_join(line):
    s=' '
    c=''
    for char in line:
        if char==s:
            c+='-'
        else:
            c+=char
    return c
        
