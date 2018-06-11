// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i,j,k,temp;
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(A[k]>A[j])
            {
                k=j;
            }
            if(i!=k)
            {
                temp=A[i];
                A[i]=A[k];
                A[k]=temp;
            }
        }
    }
    
    for(i=0;i<=N;i++)
    {
        if(A[0]<1)
        {
            return 1;
        }
        if(A[i]!=i+1 && A[i+1]!=i+1)
        {
            return i+1;
        }
    }
}