class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
        sort(a.begin(), a.end());
    sort(b.begin(), b.end());
        int n1=a.size();
        int n2=b.size();
        int i=0;
        int j=0;
        vector<int> unionArr;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n1){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        
        while(j<n2){
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
        int ans= unionArr.size();
        return ans;
        
    }
};
