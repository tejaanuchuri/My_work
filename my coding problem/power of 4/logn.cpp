float logn(int n, int r){ 
    return log(n) / log(r); 
} 
bool isPowerOfFour(long long int n) {
    if(n == 0) 
    return false; 
    return floor(logn(n,4))==ceil(logn(n,4));  
}
