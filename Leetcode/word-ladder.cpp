Question Link: https://leetcode.com/problems/word-ladder/
username: abhishek818

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
       unordered_set<string> s;
        for(string str:wordList)
            s.insert(str);
        
        if(s.find(endWord)==s.end())
            return 0;
        
        queue<string> q;
        q.push(beginWord);
        int level=0;
        
        while(!q.empty())
        {
            ++level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                string cur=q.front();
                q.pop();
                for(int i=0;i<cur.length();i++)
                {
                    char org=cur[i];
                    for(char c='a';c<='z';c++)
                    {
                        cur[i]=c;
                        if(cur==endWord)
                            return level+1;
                        if(s.find(cur)!=s.end())
                        {
                            q.push(cur);
                            s.erase(cur);
                        }
                    }
                    cur[i]=org;
                }
            }
        }
        return 0;
    }
};