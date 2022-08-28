class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long long res=0,p=1;
        while(N>0){
            res= res + p*(N%9);
            N=N/9;
            p=p*10;
            
        }
        return res;
    }
};
