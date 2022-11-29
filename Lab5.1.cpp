#include <iostream>

using namespace std;

void checkValidInput() {//checking for valid input
    if (cin.fail()) {
        throw "Incorrect input";
    }
}

void checkValidParams(int n, int x) { //checking for valid params
    if (x < 0)
    {
        if (n < 2) {
            throw "Input correct data";
        }
    }
    else
    {
        if (n < 1) {
            throw "Input correct data";
        }
    }
}

int first(int n, int x) //first part of eq
{
    int k = 1;
    for (int i = 0; i <= n - 2; i++)
    {
        k = k * (i + i);
    }
    return (k);
}
int second(int n, int x) //second part of eq
{
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int k = 1;
        for (int j = 0; j <= n - 1; j++)
        {
            k *= (x + j) / (i + j + 1);
        }
        sum += k;
    }
    return (sum);

}

int y(int n, int x)//calculation
{
    if (x < 0)
    {
        return (first(n, x));
    }
    else
    {
        return (second(n, x));
    }
}

int main()
{
    int n, x = { 0 };
    try {
        cout << "Enter n & x: ";
        cin >> n >> x;
        //checking for errors and invalid parametrs
        checkValidParams(n, x);
        checkValidInput();
        cout << "y = " << y(n, x);
    }
    catch (const char* ex) {
        cout << ex << endl;
        return -1;
    }
    catch (...) {
        cout << "Unknown error";
    }
}
