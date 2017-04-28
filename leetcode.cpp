
//way to avoid overflow when int is INT_MIN and you want to get the absolute value of it !
//IMPORTANT!
unsigned long tn = long(n);
tn = labs(tn);


//customize comapre function in sort 
class Solution {
public:
    static bool compare_fun(Interval& a, Interval& b){
        return a.start < b.start; 
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size() == 0) return true;
        sort(intervals.begin(), intervals.end(), compare_fun);
        for(int i = 0; i < intervals.size()-1; i++){
            if (intervals[i].end > intervals[i+1].start)
                return false;
        }
        return true;
    }
};
