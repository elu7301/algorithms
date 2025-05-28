class Solution {
public:
    vector<vector<int>> findDifference(const vector<int>& nums1, const vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> unique_one;
        vector<int> unique_two;

        for (int num : set1) {
            if (!set2.count(num)) {
                unique_one.push_back(num);
            }
        }

        for (int num : set2) {
            if (!set1.count(num)) {
                unique_two.push_back(num);
            }
        }

        return {unique_one, unique_two};
    }
};
