#include<iterator>
using namespace std;
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    /*long long s1=0,s2=0,d1,d2;
    int n,a=0,b=0;
    n=A.size();
    int i=1;
    for(auto v : A) {
        s1+=v;
        s2+=(v*v);
        s1-=i;
        s2-=((long long)(i)*(long long)(i));
        i++;
    }
    //d1=((n*(n+1))/2)-s1;
    //d2=((n*(n+1)*(2*n+1))/6)-s2;
    d1=s1;
    d2=s2;
    a=(int)(d2/d1+d1)/2;
    b=(int)(a-d1);
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
    */
    /*
       long long sum = 0;
       long long squareSum = 0;
       long long temp;
       for (int i = 0; i < V.size(); i++) {
           temp = V[i];
           sum += temp;
           sum -= (i + 1);
           squareSum += (temp * temp);
           squareSum -= ((long long)(i + 1) * (long long)(i + 1));
       }
       // sum = A - B
       // squareSum = A^2 - B^2 = (A - B)(A + B)
       // squareSum / sum = A + B
       squareSum /= sum;

       // Now we have A + B and A - B. Lets figure out A and B now. 
       int A = (int) ((sum + squareSum) / 2);
       int B = squareSum - A;

       vector<int> ret;
       ret.push_back(A);
       ret.push_back(B);
       return ret;
    */

    int xor1=A[0],set_bit,i,x=0,y=0;
    for(i=1;i<A.size();i++) 
        xor1=xor1^A[i];
    for(i=1;i<=A.size();i++)
        xor1=xor1^i;

    set_bit=xor1 & ~(xor1-1);
    //cout<<set_bit<<' ';
    for(i=0;i<A.size();i++) {
        if(set_bit & A[i]) 
            x=x ^ A[i];
        else
            y=y^A[i];
    }

    for(i=1;i<=A.size();i++) {
        if(set_bit & i) 
            x=x ^ i;
        else
            y=y^i;   
    }
    vector<int> v1;
    vector<int>::const_iterator it;
    it=find(A.begin(),A.end(),x);
    if(it!=A.end()) {
        v1.push_back(x);
        v1.push_back(y);
        }
    else {
        v1.push_back(y);
        v1.push_back(x);
    }
    return v1;

    
}
