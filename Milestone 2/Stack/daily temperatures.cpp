class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v(temperatures.size());
        stack<int> s;
            for(int i =0;i<temperatures.size();i++)
            {
                while(!s.empty() && temperatures[s.top()]<temperatures[i])
                {
                    int j  = s.top();
                    v[j] = i - j;
                    s.pop();
                }
                
                s.push(i);
            }
        return v;
    }
};