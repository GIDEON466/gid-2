#include <iostream>

using namespace std;

int main()
{
    int score;
    score=100;
    cout <<"ARE YOU READY TO KNOW YOUR GRADE YOU HAD IN EACH COURSE?"<<endl;
    cout<<"OOH REALLY?, THEN I AM READY LETS KICK OFF"<<endl;
    cout << "PLEASE ENTER YOUR SCORE"<<endl;
    cin >>score;
    if(score>=80&&score<=100){
        cout <<"you had an A"<<endl;
    }
    else if(score>=75&&score<=79){
        cout <<"very good B+"<<endl;
    }
    else if(score<=74&&score>=70){
        cout <<"good B";
    }
    else if(score>=65&&score<=69){
        cout<<"you had C+";
    }
     else if(score<=64&&score>=60){
        cout <<"C";
     }
     else if(score<=59&&score>=55){
        cout <<"D+"<<endl;
     }
     else if(score>=50&&score<=54){
        cout <<"D";
     }
     else if(score<=49&&score>=45){
        cout <<"E";
     }
     else if(score<=44&&score>=0){
        cout <<"F";
     }
     else{
        cout <<"you did not take part in the exams";
     }
    return 0;
}
