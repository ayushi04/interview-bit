int Solution::maxSubArray(const vector<int> &A) {
    //ATTEMPt1
    if(A.size()==0) return 0;
    int max_sum=0,sum1=0;
    for(int i=0;i<A.size();i++) {
        if((A[i]+sum1)>0) {
            sum1=A[i]+sum1;
        }
        else 
            sum1=0;
        if(sum1>max_sum) 
            max_sum=sum1;
    }
    if(max_sum==0) {
        //cout<<"hello";
        return *max_element(A.begin(),A.end());
    }
    return max_sum;
}
