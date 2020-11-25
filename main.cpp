#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

/*
int main() {
	int j = 0;
	//cout << "j = 0" << endl;


	//for (int i = 0; i < 9; i++) {
	//	cout << i + 1 << " ";
	//	
	//}

	int n = 1, res, res2;
	while (true) {
		res = 3 * (n * n * n * n) - 730 * n;
		res2 = pow(2.78, n) - 1000 * log10(n);
		/*if (res > 5) {
			break;
		}
		if (res2 > 10) {
			break;
		}
		//cout << " n = " << n << ", res = " << res << endl;
		cout << " n = " << n << ", res = " << res2 << endl;
		n++;
	}
	//cout << " n = " << n << ", res = " << res << endl;
	cout << " n = " << n << ", res = " << res2 << endl;



	//cout << "After for loop" << endl;

	system("pause");
	return 0;
	*/
/*
int main() {
	int num, sum = 0;
	cout << "Input numbers to sum up: " << endl;


	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		sum += num;
	}
	cout << "Sum = " << sum << endl;

	return 0;
}
*/
/*
int main() {
	srand(time(NULL));

	int randNum, num;
	randNum = rand();
	randNum = randNum % 100;
	while (true) {
		cin >> num;
		if (num == randNum) {
			cout << "Neponyal?" << endl;
			break;
		}
		else if (num > randNum) {
			cout << "Mnogo" << endl;
		}
		else if (num < randNum) {
			cout << "Malo" << endl;
		}
	}


	return 0;
}
*/
/*
int main() {
	int num, fact = 1;
	cout << " Input num to calc factorial: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	cout << "Factorial = " << fact << endl;


	return 0;
}
*/
/*
int main() {
	double a, b, h, x, y;
	cin >> a >> b >> h;
	int n = (b - a) / h + 1;
	for (int i = 0; i < n; i++) {
		x = a + i * h;
		y = sqrt(1 + 2 * x + 3 * x * x * x);
		cout << "x = " << x << ", y = " << y << endl;
	}



	return 0;
}
*/ 
/*
int main() {
	double res = 0;
	for (int k = 0; k <= 1000; k++) {
		//res += pow(-1, k + 1) * 1 / (2 * k + 1);
		if (k % 2 != 0) {
			res += 1.0 / (2 * k - 1);
		}
		else {
			res -= 1.0 / (2 * k - 1);
		}
	}
	cout << "Res loop = " << res << endl;
	cout << "Res = " << 3.14 / 4 << endl;

	return 0;
}
*/
/*
int main() {
	double res = 0;
	for (int k = 0; k <= 1000; k++) {
		res += 1 / (k * k);
	}
	cout << "Res loop = " << res << endl;

	return 0;
}
*/

int fact(int n);

int main() {
	double res = 0;
	double x = 0.25;
	for (int n = 1; n <= 1000; n++) {
		int f = fact(2 * n + 1);
		//res += pow(-1, k + 1) * 1 / (2 * k + 1);
		if (n % 2 == 0) {
			int f = (2 * n + 1);
			res += pow(x, 2 * n + 1) / f;
		}


		else {
			res -= pow(x, 2 * n + 1) / f;
			
		}
	}
	cout << "Res loop = " << res << endl;
	cout << "Res = " << sin(x) << endl;

	return 0;
}

int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}
