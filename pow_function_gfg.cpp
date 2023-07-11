class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
        if( N==0 )
            return 0;
        if( R==0 )
            return 1;
            
        long long ans = power( N, R/2 );
        if( R%2==0 )// if power is even
            return ( ans%mod * ans%mod )%mod;

        else// if power is odd
            return ( ans%mod * ans%mod * N%mod )%mod;
        
    }

};