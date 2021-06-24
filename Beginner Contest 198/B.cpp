#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;

	cin >> n;

	string s = to_string(n);

	int a = s.length();
	int flag = 0;

	for(int i = 0; i < a; ++i){
		if(s[i] != s[a-i-1]){
			if(s[a-i-1] != '0'){
				flag = 1;
				break;
			}
			else{
				string f = '0'+s;
				s = f;
				a = f.length();
				i=0;
			}
		}
	}
	if(flag){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}

	return 0;		
}
