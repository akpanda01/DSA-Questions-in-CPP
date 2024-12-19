//Peak Element


class Solution {
public:
    int peakElement(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is a peak
            bool leftSmaller = (mid == 0 || arr[mid] > arr[mid - 1]);
            bool rightSmaller = (mid == arr.size() - 1 || arr[mid] > arr[mid + 1]);

            if (leftSmaller && rightSmaller) {
                return mid;
            }

            // Move to the side where a peak is guaranteed to exist
            if (mid > 0 && arr[mid - 1] > arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return -1; // This line is never reached because a peak always exists
    }
};
