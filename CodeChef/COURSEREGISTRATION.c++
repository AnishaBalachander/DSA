#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int input[t];
    string output[t];
    for(int i=0;i<t;i++){
        int K;int M; int N;
        cin >> N;
        cin >> M;
        cin >> K;
        if ( (M-K) >= N){
            output[i] = "Yes";
        }
        else{
            output[i]="No";
        }
    }
    for(int i=0;i<t;i++){
        cout << output[i] <<endl;
    }
	return 0;
}
