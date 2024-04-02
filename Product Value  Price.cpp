/*A mail order house sells five different products whose retail prices are:
product 1 — BDT 200.75, product 2—345.50, product 3— BDT 775.75, product 4— BDT 400.35 and product 5— BDT 1200.75.
Write a program that reads a series of pairs of numbers as follows:
a. product number. (Hint: 1, 2, 3.. etc. are product number)
b. quantity sold.
Your program should calculate and display the total retail value of products sold.*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int X,Y;
    float P1,P2,P3,P4,P5;
    cout<<"1. Product 1 BDT 200.75" <<endl;
    cout<<"2. Product 2 BDT 345.50" <<endl;
    cout<<"3. Product 3 BDT 775.75" <<endl;
    cout<<"4. Product 4 BDT 400.35" <<endl;
    cout<<"5. Product 5 BDT 1200.75" <<endl;

    cout<<"Which product do you need = ";
    cin>>X;
    cout<<"What is the quantity of the product = ";
    cin>>Y;

    P1=Y*200.75;
    P2=Y*345.50;
    P3=Y*775.75;
    P4=Y*400.35;
    P5=Y*1200.75;

         if(Y>0,X==1)cout<<"Total cost of 1st product you want is = "<<P1<<endl;
    else if(Y>0,X==2)cout<<"Total cost of 2nd product you want is = "<<P2<<endl;
    else if(Y>0,X==3)cout<<"Total cost of 3rd product you want is = "<<P3<<endl;
    else if(Y>0,X==4)cout<<"Total cost of 4th product you want is = "<<P4<<endl;
    else if(Y>0,X==5)cout<<"Total cost of 5th product you want is = "<<P5<<endl;
    else
        cout<<"Invalid Product. Choose the given products though we have. Thanks"<<endl;
    return 0;
}
