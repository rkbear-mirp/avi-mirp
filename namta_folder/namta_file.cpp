#include<iostream>
using namespace std;
int main() {
int N,i,j;
cout<<"Enter the number:"<<endl;
cin>>N;

    for(i=0;i<=N;i++){
    for(j=0;j<=(N-1);j++){
    cout<<i<<"avj"<<j<<"="<<(i+j)*N<<endl;
    }
cout<<endl;
}
return 0;
}
    
