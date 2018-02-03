int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    //ATTEMPT2:
    int sum1=0;
    for(int i=0;i<A.size()-1;i++) 
        sum1+=max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    return sum1;
    
    
    //ATTEMPT1:
    /*int ans=0;
    for(int i=1;i<A.size();i++) {
        ans+=max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
    }
    return ans;
    */
}