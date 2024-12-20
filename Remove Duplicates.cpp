//Remove Duplicates

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0; // Edge case: empty array
        
        int slow = 0; // Pointer for the last unique element
        
        for (int fast = 1; fast < nums.size(); fast++) {
            if (nums[fast] != nums[slow]) {
                slow++; // Move the slow pointer to the next unique position
                nums[slow] = nums[fast]; // Update with the unique element
            }
        }
        return slow + 1; // Total unique elements
    }
};

//Another Method
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        set < int > set;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            set.insert(arr[i]);
        }
        int k = set.size();
        int j = 0;
        for (int x: set) {
            arr[j++] = x;
        }
        return k;
    }
};
