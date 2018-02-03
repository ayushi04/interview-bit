vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> v1;
    int c=1;
    for(int i=0;i<A;i++) {
        vector<int> t;
        for(int j=0;j<A;j++)
            t.push_back(0);
        v1.push_back(t);
    }
    int start_x=0,end_x=A-1,start_y=0,end_y=A-1;
    while(start_x<end_x && start_y < end_y) {
        
        //first row
        for(int i=start_y;i<end_y;i++)
            v1[start_x][i]=c++;
        
        //last column
        for(int i=start_x;i<end_x;i++)
            v1[i][end_y]=c++;
        
        //last row
        for(int i=end_y;i>start_y;i--)
            v1[end_x][i]=c++;
        
        //first column
        for(int i=end_x;i>start_x;i--)
            v1[i][start_y]=c++;
        
        start_y++;
        end_y--;
        start_x++;
        end_x--;
    }
    if(A%2!=0)
        v1[start_x][start_y]=c;
    return v1;
    
}
