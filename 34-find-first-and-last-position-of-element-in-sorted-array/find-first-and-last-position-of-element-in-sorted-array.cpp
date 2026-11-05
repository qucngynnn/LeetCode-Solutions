class Solution {
public:
    int first_occ(vector<int>& nums, int x){
        int n = nums.size();
        int left =0;
        int right = n-1;
        int ans = -1;
        while (left <= right){
            int mid = (left + right)/2;

            if (x == nums[mid]){
                ans = mid;
                right = mid -1;
            }
            else if (x >  nums[mid]){
                left = mid + 1;
            }
            else {
                right = mid -1;
            }
        }return ans;
}
    int last_occ(vector<int>& nums, int x){
        int n = nums.size();
        int left =0;
        int right = n-1;
        int anss = -1;
        while (left <= right){
            int mid = (left + right)/2;

            if (x == nums[mid]){
                anss = mid;
                left = mid +1;
            }
            else if (x > nums[mid]){
                left = mid + 1;
            }
            else {
                right = mid -1;
            }
        }return anss;

}       
    vector<int> searchRange(vector<int>& nums, int target) {
            int first = first_occ(nums, target);
            int last = last_occ(nums, target);
            
            return {first, last}; 
    }
};