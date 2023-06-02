/*
 * P2.cpp
 *
 *  Created on: May 3, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;
/*
Problem #2: Print Me
● Write a program that reads 2 integers A, B
○ B is either -1 or 1
■ If -1, print 2*A+1
■ If 1, print A*A
● Hint
○ You need to think in a simple 1 line formula for the output
*/
int main(){

	int A , B;

	cin >> A >> B;

	int Equ_Is_one  = A * A;
	int Equ_Is_neg_one = 2*A+1;

	int Is_one      = (B + 1)/2;
	int Is_neg_one  = (B - 1)/2;

	cout << Is_one * Equ_Is_one - Is_neg_one * Equ_Is_neg_one <<"\n";

	return 0;
}




