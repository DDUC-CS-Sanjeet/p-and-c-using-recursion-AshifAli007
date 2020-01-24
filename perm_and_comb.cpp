#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(n<0 || r<0){
		throw "Permutation Is Valid For Positive Number";
	}
	if(r==0){	//base condition 
		return 1;
	}else{
		return n*permutation(n-1,r-1);
	}
  	return 0;
}//permutation ends here

int combination(int n, int r)
{
	if(n<0 || r<0){
		throw "Combination Is Valid For Positive Number";
	}
	if(r==0){	//base condition
		return 1;
	}else{
		return ((n)*combination(n-1,r-1))/r;
		//return (n/r)*combination(n-1,r-1);
	}
}//combination ends here

int main()	//driver code
{
	int n,r;
	cout<<"Enter The Value Of n And r to Calculate p(n,r) and c(n,r):-\n";
	cout<<"n : ";
	cin>>n;
	cout<<"r : ";
	cin>>r;
	int result_p,result_c;
	try{
		result_p = permutation(n,r);
		result_c = combination(n,r);
		cout<<"Permutation Of  p("<<n<<","<<r<<")"<<" : "<<result_p;
		cout<<"\nCombination Of  c("<<n<<","<<r<<")"<<" : "<<result_c;
	}
	catch(const char* str){
		cout<<str;
	}

  	return 0;
}//main ends here
