vector<vector<int> > Solution::generate(int A) {
    vector<vector<int>> v1;
    vector<int> t;
    if(A==0)
        return v1;
    t.push_back(1);
    v1.push_back(t);
    for(int i=1;i<A;i++) {
        vector<int> t;
        t.push_back(1);
        for(int j=1;j<i;j++) {
            t.push_back(v1[i-1][j-1]+v1[i-1][j]);
        }
        t.push_back(1);
        v1.push_back(t);
    }
    return v1;
}
