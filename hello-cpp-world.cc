#include <iostream>
using namespace std;

int main() {
    int userInputNum1;
    int userInputNum2;
    char userInputOperator;
    int result;
    cout << "Welcome to the calculator." << endl;
    cout << "Enter the first number: ";
    cin >> userInputNum1;
    cout << "Enter the second number: ";
    cin >> userInputNum2;
    cout << "Enter the operation: ";
    cin >> userInputOperator;
    if (userInputOperator == '-'){
        result = userInputNum1 - userInputNum2;
    }else if (userInputOperator == '+'){
        result = userInputNum1 + userInputNum2;
    }else if (userInputOperator == '*'){
        result = userInputNum1 * userInputNum2;
    }else if (userInputOperator == '/'){
        result = userInputNum1 / userInputNum2;
    }else if (userInputOperator == '^'){
        result = userInputNum1;
        for (int i = 1; i < userInputNum2; i++){
            result = result * userInputNum1;
        }
    }else {
        cout << "Please use only + or - for this calculator";
        exit;
    }
    cout << "The result of " << userInputNum1 << " " << userInputOperator << " " << userInputNum2 << " is " << result << endl;
}
