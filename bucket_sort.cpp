
def bucketSort(arr, noOfBuckets):
    max_ele = max(arr)
    min_ele = min(arr)
    rnge = int((max_ele - min_ele + 1) / noOfBuckets)
    temp = []
    for i in range(noOfBuckets):
        temp.append([])
    for i in range(len(arr)):
        temp[int((arr[i] - min_ele) / rnge)].append(arr[i])
    for i in range(len(temp)):
        if len(temp[i]) != 0:
            temp[i].sort()
    for lst in temp:
	    print(len(lst),end=' ')
	    if lst:
	        for i in lst:
	            print(i,end=' ')
	    print('')         
 
n ,b = map(int, input().split())
arr = list(map(int,input().strip().split()))
bucketSort(arr, b)