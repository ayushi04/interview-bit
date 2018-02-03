vector<int> Solution::maxset(vector<int> &A) {
    int start=0,end=-1,startf=0,endf=-1,max_length=0;
    long long max_sum=0,sum1=0;
    for(int i=0;i<A.size();i++) {
        if(A[i]<0) {
            start=i+1;
            sum1=0;
        }
        else {
            sum1+=A[i];
            end=i;
        }
        if(sum1>max_sum || (sum1==max_sum && (end-start+1)>max_length) ) {
            startf=start;
            endf=end;
            max_sum=sum1;
            max_length=endf-startf+1;
        }
    }
    if(endf==-1) {
        vector<int> C;
        return C;}
        
    vector<int>C(A.begin()+startf,A.begin()+endf+1);
    //C.push_back(startf);
    //C.push_back(endf);
    return C;
}
