https://www.hackerrank.com/challenges/minimum-swaps-2/problem
handle: abhishek_818

int minimumSwaps(vector<int> arr) {
    int min=arr[0], minIdx=0, swaps=0;
    for(int i=1;i<arr.size();i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            minIdx=i;
        }
    }
    if(minIdx!=0)
     {   iter_swap(arr.begin(), arr.begin()+minIdx);
         ++swaps;   
     }
    
    int pos,cur;
    for(int i=1;i<arr.size();i++)
    {
        pos=arr[i]-min;
        while(arr[pos]!=arr[i])
        {
            iter_swap(arr.begin()+i,arr.begin()+pos);
            ++swaps;
            cur=arr[i];
            pos=cur-min;
        }  
        i=pos; 
    }
    return swaps;
}