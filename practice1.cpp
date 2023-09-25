#include <iostream>
#define multiply 500
#define total_money 10000
using namespace std;

int main(void){
 int money_to_withdraw ;
 float amount;
 cout << "please enter money to withdraw: ";
 cin >> money_to_withdraw;	
 
money_to_withdraw % multiply == 0 ? amount = total_money - (money_to_withdraw * 0.005)
:cout << "money ot multiply of 500";
 cout << amount ;
}