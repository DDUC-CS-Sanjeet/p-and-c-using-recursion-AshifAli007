#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(r==0){
		return 1;
	}else{
		return n*permutation(n-1,r-1);
	}
  	return 0;
}

int combination(int n, int r)
{
	
  	return 0;
}

int main()
{
	int n,r;
	cout<<"Enter The Value Of n And r to Calculate p(n,r) :-\n";
	cout<<"n : ";
	cin>>n;
	cout<<"r : ";
	cin>>r;
	cout<<"Permutation Of  p("<<n<<","<<r<<")"<<" : "<<permutation(n,r);
  	return 0;
}
