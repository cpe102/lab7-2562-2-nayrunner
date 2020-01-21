//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int age,tall,money;
    string status;
    
    cout<<"what is your ages?: ";
    cin>>age;
    if(age <= 20){
         cout<<"\nhow tall are you?: ";
         cin>>tall;
         if(tall<160){ status = "UNFRIEND";}
         else if(tall<175){ status = "FRIEND";}
              else{
                  cout<<"\nHow about your money: ";
                  cin>> money;
                  if(money>69000000){ status = "MARRIED";}
                  else{ status = "ONE-NIGHT-STAND";}
              }
    }
    else{
        if(age<30){
            cout<<"\nHow about your money: ";
            cin>> money;
            if(money>10000000){ status = "BEST FRIEND";}
            else{ status = "UNFRIEND";}
            }
        else{ status = "UNFRIEND";}
    }

    cout<<"Your status is ..."<<status;

    return 0;       

}