
str = ''
str = raw_input()
print str
str_fen = str.split(' ')
print str_fen
a = 0
for i in range(len(str_fen)):
    print (str_fen[i][0])
    if(str_fen[i][0] <= '9' and str_fen[i][0] >= '0'):
        a = str_fen[i]
    print a
