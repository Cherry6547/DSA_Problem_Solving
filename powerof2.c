//power of 2 program 
//using bit manipulation

bool isPowerOfTwo(int n) {
    int res=0;
    if(n<=0){
        res=0;
    }else{
    ((n & (n-1)) == 0)? (res=1):(res=0);
    }
    return res;
}
