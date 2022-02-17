class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                s.push(p+q);
            }
            else if(tokens[i]=="-")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                s.push(q-p);
            }
            else if(tokens[i]=="*")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                s.push(p*q);
            }
            else if(tokens[i]=="/")
            {
                int p=s.top();
                s.pop();
                int q=s.top();
                s.pop();
                s.push(q/p);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};