class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> a;
        bool insert=false;
        int n=intervals.size();

        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            if(insert==false && start>=newInterval[0]){
                a.push_back(newInterval);
                insert=true;
            }
            a.push_back(intervals[i]);
        }
         if(insert == false){
            a.push_back(newInterval);
        }


        vector<vector<int>> res;
        int start1=a[0][0];
        int end1=a[0][1];
        int n1=a.size();
        for(int i=1;i<n1;i++){
            int start2=a[i][0];
            int end2=a[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        res.push_back({start1,end1});
        return res;
    }
};