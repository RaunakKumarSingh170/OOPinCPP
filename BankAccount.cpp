#include<iostream>
using namespace std;
class BankAccount{
    public:
    int AccountNumber,balance=0;
    string name;
    void deposit(int d){
        balance = balance + d;
    }
    void displayBalance(){

    }
    void withdraw(int w){
        balance= balance -w;
    }
    };
