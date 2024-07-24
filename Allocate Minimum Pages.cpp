bool isPossible(int sum , int A[],int N , int M)
    {
        int tmp = 0;
        int cnt = 1;
        for(int i=0; i<N; ++i)
        {
            tmp += A[i];
            if(tmp > sum)
            {
                ++cnt;
                tmp = A[i];
            }
        }
        if(cnt <= M)
            return true;
        return false;
    }
    int findPages(int A[], int N, int M) 
    {
         int s = 0;
         int e = 0;
         for(int i=0; i<N; ++i)
         {
            e += A[i];
            s = max(s , A[i]);
         }
         int ans = INT_MAX;
         while( s <= e )
         {
             int m = e + (s-e)/2;
             if(isPossible(m , A , N , M))
             {
                 ans = min(ans , m);
                 e = m-1;
             }
             else
             {
                 s = m+1;
             }
         }
         return ans==INT_MAX ? -1 : ans;
    }
