class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack <float> st;
        vector <pair<int,float>> steps;
        int count=0;
        for(int i=0;i<speed.size();i++){
            float step=(target-position[i])/float(speed[i]);
            steps.push_back({position[i],step});
        }
        sort(steps.rbegin(),steps.rend());
        float m=steps[0].second;
        st.push(m);
        for(int i=1;i<steps.size();i++){
            if(!st.empty()&&steps[i].second>m){
                while(!st.empty()) st.pop();
                count++;
                m=steps[i].second;
            }
            st.push(steps[i].second);
        }
        if(!st.empty()) count++;
        return count;
    }
};
