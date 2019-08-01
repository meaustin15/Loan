#include <iostream>

using namespace std;

int main()
{
    char emp, grad, y;
    cout << "Are you employed? y or n ";
    cin >> emp;
    cout << "Are you a college graduate? y or n ";
    cin >> grad;

    if (emp == y){
        if (grad == y){
            cout << "Loan is approved";
        } else
            cout << "No Loan. You must be a graduate";
    }
    else
        cout << "No Loan. You must be employed";
}
