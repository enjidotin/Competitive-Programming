for t in range(int(input())):
    n=int(input())
    x=[]
    y=[]
    x_count={}
    y_count={}
    for i in range(4*n-1):
        a,b=input().split()
        a,b=int(a),int(b)
        x.append(a)
        y.append(b)
        if x[i] not in x_count.keys():
            x_count[x[i]] = 1
        else:
            x_count[x[i]] = x_count[x[i]] + 1
        if y[i] not in y_count.keys():
            y_count[y[i]] = 1
        else:
            y_count[y[i]] = y_count[y[i]] + 1
    for k,v in x_count.items():
        if v%2!=0:
            x_ans=k
    for k,v in y_count.items():
        if v%2!=0:
            y_ans=k
    print(x_ans,y_ans)