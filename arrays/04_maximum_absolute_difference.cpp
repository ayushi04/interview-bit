int Solution::maxArr(vector<int> &A) {
    int max_sum=0,sum1=0;
    int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<A.size();i++) {
        max1=max(max1,A[i]+i);
        max2=max(max2,A[i]-i);
        min1=min(min1,A[i]+i);
        min2=min(min2,A[i]-i);
    }
    return max(max1-min1,max2-min2);
    /*
    for(int i=0;i<A.size();i++) {
        for(int j=0;j<i;j++) {
            sum1=abs(i-j)+abs(A[i]-A[j]);
            if(sum1>max_sum) 
                max_sum=sum1;
        }
    }
    return max_sum;
    */
}