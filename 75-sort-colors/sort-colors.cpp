/*    Meethod 1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //two pass solution (method 1)
        int n= nums.size();
        int noz=0; //number of zeroes
        int noo=0; //number of ones
        int notw=0; //number of twos

        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else notw++;
        }
        for(int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i]=1;
            else nums[i]=2;
        }
        return;
    }
};
*/


//Method 2 Dutch flag algorith [3 pointer array]

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low=0;
        int mid=0;
        int high= nums.size()-1;

        //concentrate on mid

        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else mid++;
        }
        return;
    }
};


