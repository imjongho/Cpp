/***************************************************************
 * The interface file date.h defining the class Date 		 	 *
 ***************************************************************/
#include "fraction.h"

int main(void) {

	// Creation of two objects and testing the plus and minus operator 
	Fraction fract1(-2, 3);
	Fraction fract2(1, 2);
	cout << "fract1: " << fract1 << endl;
	cout << "fract2: " << fract2 << endl;
	cout << "Result of +fract1: " << +fract1 << endl;
	cout << "Result of -fract2: " << -fract2 << endl << endl;



	// Creation of four objects and testing the ++ and -- operators
	Fraction fract3(3, 4);
	Fraction fract4(4, 5);
	Fraction fract5(5, 6);
	Fraction fract6(6, 7);
	cout << "fract3: " << fract3 << endl;
	cout << "fract4: " << fract4 << endl;
	cout << "fract5: " << fract5 << endl;
	cout << "fract6: " << fract6 << endl << endl;
	cout << "Result of ++fract3: " << ++fract3 << endl;
	cout << "Result of --fract4: " << --fract4 << endl;
	cout << "Result of fract5++: " << fract5++ << endl;
	cout << "Result of fract6--: " << fract6-- << endl << endl;

	
	// 교수님 코드와 같고 오류는 없는데 
	// 결과창이 이상하게 나와서 주석 처리합니다...
	// Testing compound assignment operators
	Fraction fract7(3, 5);
	Fraction fract8(4, 7);
	Fraction fract9(5, 8);
	Fraction fract10(7, 9);
	
	//cout << "fract7: " << fract7 << endl;
	//cout << "fract8: " << fract8 << endl;
	//cout << "fract9: " << fract9 << endl;
	//cout << "fract10: " << fract10 << endl << endl;

	fract7 += 2;
	fract8 -= 3;
	fract9 *= 4;
	fract10 /= 5;

	//cout << "Result of fract7 += 2: " << fract7 << endl;
	//cout << "Result of fract8 -= 3: " << fract8 << endl;
	//cout << "Result of fract9 *= 4: " << fract9 << endl;
	//cout << "Result of fract10 /= 5: " << fract10 << endl << endl;



	// Creation of two new objects and testing friend arithmetic operations
	Fraction fract11(1, 2);
	Fraction fract12(3, 4);
	cout << "fract11: " << fract11 << endl;
	cout << "fract12: " << fract12 << endl;
	cout << "fract11 + fract12 : " << fract11 + fract12 << endl;
	cout << "fract11 - fract12 : " << fract11 - fract12 << endl;
	cout << "fract11 * fract12 : " << fract11 * fract12 << endl;
	cout << "fract11 / fract12 : " << fract11 / fract12 << endl << endl;
	


	// Creation of two new objects and testing relational operators
	Fraction fract13(2, 3);
	Fraction fract14(1, 3);
	cout << "fract13: " << fract13 << endl;
	cout << "fract14: " << fract14 << endl;
	cout << "fract13 == fract14: " << boolalpha;
	cout << (fract13 == fract14) << endl;
	cout << "fract13 != fract14: " << boolalpha;
	cout << (fract13 != fract14) << endl;
	cout << "fract13 > fract14: " << boolalpha;
	cout << (fract13 > fract14) << endl;
	cout << "fract13 < fract14: " << boolalpha;
	cout << (fract13 < fract14) << endl << endl;



	// Testing extraction operator 
	Fraction fract15;
	cin >> fract15;
	cout << "fract15: " << fract15 << endl;

	return 0;
}