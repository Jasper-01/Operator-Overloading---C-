#include "Matrix.h"

int main() {
	srand(static_cast<unsigned int>(time(NULL)));

	Matrix A(2, 3), B(2, 3), C(2, 3), AT(3, 2), BT(3, 2), D(3, 2), E(2, 2), F(2, 2);
	AT = A.transpose();
	BT = B.transpose();
	cout << "A" << endl;
	A.show();
	cout << "=========" << endl;
	cout << "B" << endl;
	B.show();
	cout << "=========" << endl;
	cout << endl << "A " << (A == B ? "==" : "!=") << " B" << endl << endl << endl;

	C = A + B;
	cout << "C = A + B" << endl;
	C.show();
	cout << "=========" << endl;
	D = AT + BT;
	cout << "D = AT + BT" << endl;
	D.show();
	cout << endl << "C " << (C == D.transpose() ? "==" : "!=") << " Transpose of D" << endl << endl << endl;

	E = A * BT;
	cout << "E = A * BT" << endl;
	E.show();
	cout << "=========" << endl;
	F = B * AT;
	cout << "F = B * AT" << endl;
	F.show();
	cout << endl << "E " << (E == F.transpose() ? "==" : "!=") << " Transpose of F" << endl << endl << endl;

	return 0;
}