vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size(),i=0,j=0,c=0;
    vector<vector<int>> ans;
    for(int s=0;s<=((2*n)-2);s++) {
        vector<int> t;
        if(s<n) {
        for(i=0,j=s;i<=s && j>=0;i++,j--) {
            t.push_back(A[i][j]);
        }
        ans.push_back(t);
        }
        else {
            c++;
            for(i=c,j=s-c;i<n && j>=0;i++,j--)
                t.push_back(A[i][j]);
            ans.push_back(t);
        }
    }
    return ans;
}
