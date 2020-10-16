int Solution::sqrt(int A) {
    if(A == 0 || A == 1)
        return A;
    long long int p=1,q=A,result;
    while(p<=q){
        long long int mid = (p+q)/2;
        if(mid*mid == A)
            return mid;
        if(mid*mid < A){
            p = mid+1;
            result = mid;
        }else
            q = mid-1;
    }
    return result;
}
