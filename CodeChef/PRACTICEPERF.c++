#include <iostream>
using namespace std;

int main() {
	int x[4]; int count = 0;
	for(int i=0;i<4;i++){
	    cin>>x[i];
	    if(x[i]>=10){
	        count+=1;
	    }
	}
	cout<<count;
}
