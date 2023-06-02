/*
 * P1.cpp
 *
 *  Created on: May 3, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;
/*
● Write a code to swap 3 numbers
● Let say we have numbers a = 115, b = 20, c = 301
● We wanna their final values to be: a = 20, b = 301, c = 115
● Challenge: Do it in 4 lines
*/
int main(){

	int num1 , num2 , num3 , temp = -1;

	cin >> num1 >> num2 >> num3;
	int a = num1 , b = num2 , c = num3;

	temp = a + b + c;
	num1 = temp - (a + c);
	num2 = temp - (b + a);
    num3 = temp - (c + b);
    /*
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;
   */
	cout << num1 << " " << num2 << " " << num3 <<"\n";

	return 0;
}




