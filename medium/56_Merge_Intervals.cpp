class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        if(intervals.size() == 1){
            return intervals;
        }
        for(int i = 0; i < intervals.size(); i++){
            if(i == intervals.size()-1){
                result.push_back(intervals[i]);
            }
            else if(intervals[i][1] >= intervals[i+1][0]){
                intervals[i+1][0] = intervals[i][0];
                intervals[i+1][1] = max(intervals[i][1], intervals[i+1][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};
