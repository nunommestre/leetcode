class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> joint;
        for(int i=0; i < nums1.size(); ++i){
            joint.push_back(nums1[i]);
        }
        for(int j=0; j < nums2.size(); ++j){
            joint.push_back(nums2[j]);
        }
        sort(joint.begin(), joint.end());
        if(joint.size() % 2 == 0){
            float num1 = joint[(joint.size() / 2) -1];
            float num2 = joint[(joint.size() / 2)];
            float diff = (num2+num1)/2;
            return diff;
        }
        else{
            return joint[(joint.size() / 2)];
        }
    }
};