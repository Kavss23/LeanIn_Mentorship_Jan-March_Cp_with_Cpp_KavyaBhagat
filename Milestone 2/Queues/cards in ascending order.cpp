class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        vector<int>t(deck.size());
        sort(deck.begin(),deck.end());
        for(int i=0;i<deck.size();i++)
        {
            q.push(i);
        }
        for(int i=0;i<deck.size();i++)
        {
            if(!q.empty())
            {
                t[q.front()]=deck[i];
                q.pop();
                q.push(q.front());
                q.pop();
            }
        } 
        return t;
    }
};