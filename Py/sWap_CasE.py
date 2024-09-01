def swap_case(s):
    si=""
    for char in s:
        if char==char.lower():
            si+=char.upper()
        elif char==char.upper():
            si+=char.lower()
        else:
            si+=char
    return si
