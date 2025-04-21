bool arraySortedOrNot(int arr[], int n) {
    // Code Here
    
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
       
    }
    return true;
}
