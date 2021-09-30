1) auto is a C++ 11 feature..  If you don't want to specify the type, you can use auto which will consider the desired type automatically
2) & means by reference i.e. the extracted elements from intervals will be assigned by refrence so it would avoid the copying of two objects. This will improve the performance.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        int start =intervals[0][0];
        int end =intervals[0][1];
        for(auto& i : intervals)
        {
            if(i[0] > end)
            {
                result.push_back({start,end});
                start=i[0];
                end =i[1];
            }
            else
            {
                end = max(end,i[1]);
            }
        }
        result.push_back({start,end});
        return result;
        
    }
};
