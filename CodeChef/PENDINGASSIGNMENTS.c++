#include <iostream>
using namespace std;

int main() {
    int X;int Y;int Z;
    int x;
    cin>>x;
    int input[x];
    string output[x];
    for(int i=0;i<x;i++){
        cin>>X;
        cin>>Y;
        cin>>Z;
        if(X*Y <= Z*24*60){
            output[i] = "YES";
        }
        else{
            output[i]= "NO";
        }
    }
    for(int i=0;i<x;i++){
        cout << output[i] <<endl;
    }
}
