// IN this we will use the static variable in a recursion function 
#include<iostream>
//if we declare the int x here then the result will be the same :-   
using namespace std;
 int func(int n)
{
    if(n>0){
         static int x=0;
        x++;
        return func(n-1)+x;
    }
    return 0;
}
int main (){
    int n;
    cout<<"enter the number n:-";
    cin>>n;

    cout<<func(n)<<endl;
// when we call the function 2 or more times then the output will be changed because after 
//the completion of first call of function the value of static variable is changed then
// the next call will use the changed value..........
    cout<<func(n)<<endl;


    return 0;
}