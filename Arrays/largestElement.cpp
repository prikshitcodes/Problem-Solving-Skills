int largest(int arr[], int n) {
    // Code Here
    int maxi= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
