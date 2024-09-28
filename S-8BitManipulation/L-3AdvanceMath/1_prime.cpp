// https://www.geeksforgeeks.org/problems/prime-factors5052/1

class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    vector<int> primeFactors;
	    if(N%2 == 0){
	        primeFactors.push_back(2);
	        while(N%2 == 0){
	            N /= 2;
	        }
	    }
	    for(int i =3 ; i*i <=N ; i+=2){
	        if(N % i == 0){
	            primeFactors.push_back(i);
	            while(N%i == 0){
	                N /= i;
	            }
	        }
	    }
	    if(N > 2) primeFactors.push_back(N);
	    
	    return primeFactors;
	}
};