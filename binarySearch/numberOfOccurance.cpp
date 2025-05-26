
     int firstOccurance(vector<int>&nums,int target){
        int n = nums.size();
        int low=0;
        int high = n-1;
        int first =-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
       }




         int secondOccurance(vector<int>& nums,int target){
        int n = nums.size();
        int low=0;
        int high = n-1;
        int second =-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]==target){
                second=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return second;
       }






int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int first = firstOccurance(arr,x);
    if(first == -1) return 0;
	int second = secondOccurance(arr,x);
	return second - first + 1;
}
