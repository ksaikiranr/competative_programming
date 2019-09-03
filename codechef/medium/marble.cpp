#include <iostream>
using namespace std;
long long int possibilities(long long int n, long long int r){
	long long int i;
	long long int res = 1;
	r = n-r;
	n = n-1;
	for(i=0;i<r;i++){
		res *= n;
		res /= (i+1);
		n--; 
	}
	return res;
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		long long  int n,r;
		cin>>n>>r;
		cout<<possibilities(n,r)<<endl;
	}
	return 0;
}
