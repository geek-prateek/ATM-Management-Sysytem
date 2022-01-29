#include <iostream>
using namespace std;

void showMenu(){
    cout<<"\n NGVP ATM SYSTEM " <<endl;
    cout<<"\n******MENU******\n" <<endl;
    cout<<"1) Check balance" <<endl;
    cout<<"2) Deposit" <<endl;
    cout<<"3) Withdraw" <<endl;
    cout<<"4) Exit\n" <<endl;
    cout<<"****************\n" <<endl;
}

int main(){
    int option;
    double balance=0;

    do{
    showMenu();
    cout << "Option : ";
    cin >> option;
    system("cls");

    switch(option){
    case 1:cout<<"\nBalance is: "<<"Rs "<<balance<<endl; break;
    case 2:cout<<"\nDeposit Amount: ";
        double depositAmount;
        cin>>depositAmount;
        balance+=depositAmount;
        break;
    case 3:cout<<"\nWithdraw Amount: ";
        double withdrawAmount;
        cin>>withdrawAmount;
        if(withdrawAmount<=balance)
            balance-=withdrawAmount;
        else
            cout<<"\nNot Enough money"<<endl;
        break;
    }
    }while(option!=4);

    system("pause>0");
}


