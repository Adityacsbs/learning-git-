#include<iostream>

using namespace std;
//this is called head recursion 
void fun2(int N){
      if(N>0){
        fun2(N-1);
        cout<<N<<" ";
      }

}

int main (){

    int N;
    cout<<"enter a number for recusion"<<endl;
    cin>>N;
     
    fun2(N);


    return 0;
}