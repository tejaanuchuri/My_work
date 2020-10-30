int sockMerchant(int n, vector<int> ar) {
    int arr[101] = {0},ans = 0;
    for(int i=0;i<ar.size();i++){
        arr[ar[i]]++;
    }
    for(int i=0;i<=100;i++){
        ans = ans + (arr[i]/2);
    }
    return ans;
}