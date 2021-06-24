#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long r,x,y;

	cin >>r>>x>>y;

	long double a = sqrt(x*x+y*y);
	
	if(r == a){
		cout<<1<<endl;
	}
	else if(a <= 2*r){
		cout<<2<<endl;
	}
	else{
		cout<<ceil(a/r)<<endl;
	}
	
	return 0;		
}

