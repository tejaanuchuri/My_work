int countingValleys(int steps, string path) {
    int V=0,l=0;
    for(long long int i=0;i<steps;i++){
        if(path[i]=='U'){
            l++;
            if(l==0)
              V++;
        }
        else if(path[i]=='D')
            l--;
    }
    return V;
}