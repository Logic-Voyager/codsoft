#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for the last element of nums1's actual elements
    int j = n - 1; // Pointer for the last element of nums2
    int k = m + n - 1; // Pointer for the last position in nums1

    // Merge from the end of both arrays to avoid overwriting elements in nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are any remaining elements in nums2, copy them over to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    // If there are any remaining elements in nums1, they are already in place
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {0,0,0};
    int m = 3, n = 0;

    merge(nums1, m, nums2, n);

    // Output the merged array
    for (int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
