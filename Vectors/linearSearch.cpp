#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    vector<int> vec = {4,2,6,1,3};
    cout<<"Our vector contain values: "<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }

    cout<<"\nPlease Enter number to Search: ";
    cin>>n;

    for( int i: vec){
        if(vec[i]==n){
            cout<<n<<" is present at "<<i<<" position";
            break;
        }
        else{
            cout<<n<<" not found in the vector!";
            break;
        }
    }

    return 0;
}