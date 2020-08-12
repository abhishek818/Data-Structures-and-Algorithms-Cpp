https://www.hackerrank.com/challenges/luck-balance/problem
handle: abhishek_818

bool sortBySec(vector<int> A, vector<int> B)
{
    return A[0]>B[0];
}

// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {
    sort(contests.begin(),contests.end(),sortBySec);
    int luck=0;
    for(int i=0;i<contests.size();i++)
    {
        if(contests[i][1]==1)
        {
            if(k>0)
            {
            --k;
            luck+=contests[i][0];
            }
            else
            luck-=contests[i][0];
        }
        else
        luck+=contests[i][0];
    }
    return luck;
}