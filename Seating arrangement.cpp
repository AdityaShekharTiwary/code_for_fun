#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int b,a,i;
    //b is no. of input
    
    cin>> b;
    for(i=0;i<b;i++){
   
    cin >> a;
    
    if(a%6==0){
        cout<< a+1 <<" " <<"WS\n";}
    
    else if(a%6==1){
        cout<< a+11 <<" " <<"WS\n";}
    
    else if(a%6==2){
        cout<< a+9 <<" " <<"MS\n";}
        
    else if(a%6==3){
        cout << a+7 <<" " <<"AS\n";}
        
    else if(a%6==4){
        cout<< a+5 << " " <<"AS\n";}
        
    else if(a%6==5){
        cout<< a+3<< " "<<"MS\n";}
    
}
}
