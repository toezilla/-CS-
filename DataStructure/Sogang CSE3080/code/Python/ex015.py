string = input()
pattern = input()

for i in range(len(string)):
    if string[i] == pattern[0]:
        cnt = 0
        while pattern:
            if pattern[cnt] == string[i+cnt]:
                cnt+=1
        if cnt == len(pattern):
            print(i)
else:
    print("NULL")
