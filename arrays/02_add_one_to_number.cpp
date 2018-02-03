vector<int> Solution::plusOne(vector<int> &A) {
    //ATTEMPT2:
    int i=0,n=A.size(),startp=0;
    if(A.empty()) {A.push_back(1); return A;}
    while(A[i]==0) i++;
    for(;i<n;i++) {
        A[startp++]=A[i];
    }
    A.erase(A.begin()+startp,A.end());
    n=A.size();
    for(i=n-1;i>=0;i--) {
        if(A[i]==9) A[i]=0;
        else {A[i]+=1; return A;}
    }
    A.insert(A.begin(),1);
    return A;
    

    
    
    //ATTEMPT1 : 
    /*while(A.front()==0 && !A.empty())
        A.erase(A.begin());
    for(int i=A.size()-1;i>=0;i--) {
        if(A[i]==9) 
            A[i]=0;
        else {
            A[i]+=1;
            return A;
        }
    }
    A.insert(A.begin(),1);
    return A;*/
}
