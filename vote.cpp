#include<iostream>
using namespace std;
int main()
{
    int age;
    char iscitizen;
    cout << "Enter Age : "<< endl;
    cin >> age;
    cout << "Are you a citizen?" <<endl;
    cin >> iscitizen;
    if(age>=18 && iscitizen == 'y'){
        cout << "You are eligible for vote";

    }
    else{
        cout << "you are not eligible";

    }
return 0;
}