int count(int ind, int sum, int s, int arr[], int n){
    //base case
    if(ind == n){
        if(sum == s){
            return 1;
        }
        else{
            return 0;
        }
    }

    // include the element
    s += arr[ind];
    int left = count(ind+1, sum, s, arr, n);

    //exclude 
    s -= arr[ind];
    int right = count(ind+1, sum, s, arr, n);

    return left + right;
}