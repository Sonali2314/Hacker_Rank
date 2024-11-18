n = int(input())
arr= sorted(map(int, input().split()))
mm=max(arr)
for i in range(0,n):
    if(arr[i]<mm and arr[i+1]==mm):
        run=arr[i]
    
print(run)
