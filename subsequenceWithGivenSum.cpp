void solve(int ind, vector<vector<int>> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto it:ds){
                cout << it <<" ";
                cout << endl;
            }
        return;
        }
    }
    //include element ie Pick
    ds.push_back(arr[ind]);
    s += arr[i];
    solve(ind+1, ds, s, sum, arr,n);

    //remove 
    s -= arr[i];
    ds.pop_back();
    solve(ind+1, ds, s, sum, arr, n);

}