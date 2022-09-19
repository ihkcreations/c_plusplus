/*
A supermarket has launched a campaign offering a 15% discount on 3 items.
Write a program that takes the total price for every purchase as input and outputs the relevant discount.

Sample Input
15000
4000
6700

Sample Output
2250
600
1005

Explanation
2250 represents a 15% discount for a 15000 purchase; 600 for 4000 and 1005 for 6700 accordingly.
*/

#include<iostream>
using namespace std;

int main(){

    int purchaseAmount = 0;
    double totalPrice = 0;

    int x = 1;

    do{

        cout << "";
        cin >> purchaseAmount;

        totalPrice = purchaseAmount * 0.15;

        cout << totalPrice << endl;

        x++;

    }while(x<=3);

}
