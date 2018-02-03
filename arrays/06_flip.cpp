vector<int> Solution::flip(string A) {
    int max_sum=0,sum1=0,start=0,end=0,startf=0;
    vector<int> ans;
    for(int i=0;i<A.length();i++) {
        if(A[i]=='0')
            sum1+=1;
        else if((sum1-1)>=0)
            sum1-=1;
        else {
            sum1=0;
            start=i+1;
        }
        if(sum1>max_sum) {
            max_sum=sum1;
            startf=start;
            end=i;
        } 
    }
    if(max_sum==0) {
        return ans;
    }
    ans.push_back(startf+1);
    ans.push_back(end+1);
    return ans;
}
