#include<iostream>
using namespace std;
class Rectangle{
    int len , brdth;
    public:
    Rectangle(int l,int b){
        len = l;
        brdth = b;

    }void Area(){
        cout<<"area is "<<len*brdth<<endl;
    }
    void Perimeter(){
        cout<<"perimeter is "<<2*(len+brdth)<<endl;
    }
    void isSquare(){ 
        if(len==brdth){
            cout<<"it is a square"<<endl;
        }else{
            cout<<"it is not a square"<<endl;
        }
        }
    };
    int main(){
        
    }