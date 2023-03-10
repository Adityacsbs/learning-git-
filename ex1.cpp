#include<iostream>

using namespace std;

void fun1(int N){
    if(N>0){
        cout<<N<<" ";
        fun1(N-1);// it is known as tail function  recursion 
    }
}

int main (){
    
    int N;
    cout<<"enter a number:- "<<endl;
    cin>>N;

    fun1(N);

    return 0;
}