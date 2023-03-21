

#include <iostream>
#include <string>
using namespace std;

Задача 1 от Георги
int lenght(int number, int arr[]) {
   int count = 0;
   int counter = 0;
   int n = number;
   while (n > 0) {
       count++;
       n /= 10;
   }
   for (int i = 0; i < count; i++) {
       arr[i] = number % 10;;
       number /= 10;
   }
   for (int i = 0; i < count; i++) {
       if (arr[i] % 2 == 0) { // 1
           counter++;
       }
   }
   return counter;
}

int main(){
   int number;
   cin >> number;
   int array[10];
   cout<<lenght(number, array);
   return 0;
}


 Задача номер 2 от Георги
int function(double num, double n) {
	int count =0;
	int sum = 0;
	int arr[50];
	double number = num / n;
	while (number != int(number)) {
		number *= 10;
		count++;
	}
	int num1 = int(number);
	for (int i = 0; i < count; i++) {
		arr[i] = num1 % 10;
		num1 /= 10;
	}
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	double num, n;
	cin >> num >> n;
	cout<<function(num, n);
}


// Задача номер 3 от Георги
void Convert(int sec) {
   int hours;
   int mins;
   int more;
   int secs;
   hours = sec / 3600;
   more = sec - hours * 3600;

   mins = more / 60;
   secs = more - mins * 60;

   if (hours < 10 && mins < 10 && secs < 10) {
       cout << "0" << hours << ":" << "0" << mins << ":" << "0" << secs;
   }
   else if (hours >= 10 && mins < 10 && secs < 10) {
       cout << hours << ":" << "0" << mins << ":" << "0" << secs;
   }
   if (hours < 10 && mins >= 10 && secs < 10) {
       cout << "0" << hours << ":" << mins << ":" << "0" << secs;
   }
   if (hours < 10 && mins < 10 && secs >= 10) {
       cout << "0" << hours << ":" << "0" << mins << ":" << secs;
   }
   if (hours >= 10 && mins >= 10 && secs < 10) {
       cout << hours << ":" << mins << ":" << "0" << secs;
   }
   if (hours < 10 && mins >= 10 && secs >= 10) {
       cout << "0" << hours << ":" <<  mins << ":" << secs;
   }
   if (hours >= 10 && mins < 10 && secs >= 10) {
       cout <<  hours << ":" << "0" << mins << ":" << secs;
   }
   if (hours >= 10 && mins >= 10 && secs >= 10) {
       cout <<  hours << ":" << mins << ":" << secs;
   }
}
int main() {
   int sec;
   cin >> sec;
   Convert(sec);
   return 0;
}


Задача 4

int main() {

}


Задача 5 
int Time(int arr[], int k) {
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < k; i++) {
		if (arr[i + 1] > arr[i] && arr[i + 1] > arr[i + 2]) {
			sum += arr[i + 1];
		}
		if (arr[i + 1] < arr[i] && arr[i + 1] < arr[i + 2]) {
			counter += arr[i + 1];
		}
		
	}
	sum -= counter;
	return sum;
}
int main() {
	int k;
	cin >> k;
	int arr[150];
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}
	cout<<Time(arr, k);
	return 0;
}



Задача 6
int function(int n, int k, int size, int arr[]) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % n == k) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	int n, k, size;
	cin >> n >> k >> size; 
	int arr[50];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	function(n, k, size, arr);
	return 0;

}




Задача 7
int function(int num, int d) {
	int arr[50];
	int count = 0, counter = 0;
	int n = num;
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < count; i++) {
		if (arr[i] == d) {
			counter++;
		}
	}
	return counter;
}

int main() {
	int num, d;
	cin >> num >> d;
	cout << function(num, d);
	return 0;
}




Задача 8
int function(int arr[], int k) {
	int arr2[50];
	int count = 0;
	for (int i = 0; i < k; i++) {
		if (arr[i + 1] > arr[i] && arr[i + 1] > arr[i + 2]) {
			arr2[count] = arr[i + 1];
			count++;
		}
	}
	int min = arr2[0];
	for (int i = 0; i < count; i++) {
		if (min >= arr2[i]) {
			min = arr2[i];
		}
	}
	return min;
}

int main() {
	int arr[50];
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}
	cout<<function(arr, k);
}



Задача 10
int function(int num, int k) {
	int arr[50];
	int sum = 0, sum2=0;
	int n=num, count = 0;
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < k; i++) {
		sum += arr[i];
	}
	for (int i = count-1; i >= k; i--) {
		sum2 += arr[i];
	}
	return sum2;
}

int main() {
	int num, k;
	cin >> num >> k;
	cout<<function(num, k);
}




Задача 9
int function(int num, int k) {
	int arr[50];
	int count = 0; 
	int n = num;
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	//return arr[k - 1];
	return arr[count - k];
}

int main() {
	int num, k; 
	cin >> num >> k;
	cout << function(num, k);
}




Задача 11
int function(int num, int k, int q) {
	int n = num, count = 0;
	int sum = 0;
	int arr[50];
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	if (k <= count && q <= count) {
		for (int i = q-1; i >= k-1; i--) {
			sum += arr[i];
		}
		return sum;
	}
	return -1; 
}

int main() {
	int num, k, q;
	cin >> num >> k >> q;
	cout << function(num, k, q);
}




Задача 12
void function(int num) {
	int count = 0;
	int n = num;
	int arr[50];
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < count; i++) {
		cout << arr[i];
	}
}

int main() {
	int num;
	cin >> num;
	function(num);
	return 0;
}



Задача 13
void function(int num, int k) {
	int count = 0;
	int n = num;
	int arr[50];
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = k;
	}
	for (int i = 0; i < count; i++) {
		cout << arr[i];
	}
}

int main() {
	int number, k;
	cin >> number >> k;
	function(number, k);
}




// Задача 14
int function(int arr[][50], int r) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		sum += arr[i][i];					//Главен
	}
	for (int i = 0; i < r; i++) {
		sum += arr[r - i - 1][r - i - 1];  //Вторичен 
	}
	for (int i = 0; i < r-1; i++) {
		for (int j = r-1; j >= i+1; j--) {   // Елементи над главния диагонал
			sum += arr[i][j];
		}
		
	}
	for (int i = 1; i < r; i++) {
		for (int j = 0; j < i; j++) {     // Елементи под главния диагонал
			sum += arr[i][j];
		}
	}
	for (int i = 0; i < r - 1; i++) {
		for (int j = r - i - 2; j >= 0; j--) {     // Елементи над втори диагонал
			sum += arr[i][j];
		}
	}
	for (int i = r - 1; i > 0; i--) {
		for (int j = r - 1 - (i - r + 2); j < r; j++) {  // Елементи под втори диагонал
			sum += arr[i][j];
		}
	}
	return sum;
}

int main() {
	int arr[50][50];
	int r;
	cin >> r ;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			cin >> arr[i][j];
		}
	}
	cout<<function(arr, r);
	return 0;
}




Задача 1
int function(int k, int arr[]) {
	int max = arr[0];
	for (int i = 0; i < k; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int main() {
	int k, arr[50]{};
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}
	cout << function(k, arr);
	return 0;
}



 Задача 2
void function(int& secs, int& hours, int& mins) {
	int more;
	hours = secs / 3600;
	more = secs - hours * 3600;
	mins = more / 60;
}

int main() {
	int secs, hours, mins ;
	cin >> secs;
	if (secs >= 0 && secs <= 86000) {
		function(secs, hours, mins);
		if (hours < 10 && mins < 10) {
			cout << "0" << hours << ":" << "0" << mins;
		}
		if (hours >= 10 && mins < 10) {
			cout << hours << ":" << "0" << mins;
		}
		if (hours < 10 && mins >= 10) {
			cout << "0" << hours << ":" << mins;
		}
		if (hours >= 10 && mins>= 10) {
			cout << hours << ":" << mins;
		}
	}
	else {
		return -1;
	}
}



Задача 3
void function(double arr[], int size, double& sum) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			sum += arr[i];
		}
	}
}

int main() {

	double sum1 = 0;
	double arr1[]{-2};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	function(arr1, size1, sum1);

	double sum2 = 0;
	double arr2[]{ 1, -3.5, -1.75 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	function(arr2, size2, sum2);

	double sum3 = 0;
	double arr3[]{ -2, -3.89, -7.904, -8.76 };
	int size3 = sizeof(arr3) / sizeof(arr3[0]);
	function(arr3, size3, sum3);

	cout << sum1 << endl;
	cout << sum2 << endl;
	cout << sum3 << endl;
}


Задача 4
void function(int num, double& temp) {
	int count = 0;
	int  sum = 0;
	double sum1 = 0;
	int n = num;
	int arr[50];
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	sum1 = sum / count;
	temp = sum1;
}

int main() {
	int num1 = 2;
	double temp1 = 0;
	function(num1, temp1);

	int num2 = 45;
	double temp2 = 0;
	function(num2, temp2);

	int num3;
	double temp3 = 0;
	cin >> num3;
	function(num3, temp3);

	cout << temp1 << endl;
	cout << temp2 << endl;
	cout << temp3 << endl;
}



Задача 5
void function(int arr[], int size, int& sum) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
}

int main() {
	int sum1 = 0;
	int arr1[] = { -2 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	function(arr1, size1, sum1);

	int sum2 = 0;
	int arr2[] = { -2, 5, 6 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	function(arr2, size2, sum2);

	int sum3 = 0;
	const int size = 50;
	int arr3[size];
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> arr3[i];
	}
	function(arr3, k, sum3);

	cout << sum1 << endl;
	cout << sum2 << endl;
	cout << sum3 << endl;
	return 0;
}



Задача 6
void function(int num, int &sum) {
	int sum1 = 0;
	int count = 0;
	int n = num;
	int arr[50];
	while (n > 0) {
		count++;
		n /= 10;
	}
	for (int i = 0; i < count; i++) {
		arr[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < count; i++) {
		sum1 += arr[i];
	}
	sum = sum1;
}

int main() {
	int sum1 = 0;
	int num1;
	cin >> num1;
	function(num1, sum1);

	int num2;
	int sum2 = 0;
	cin >> num2;
	function(num2, sum2);

	int num3;
	int sum3 = 0;
	cin >> num3;
	function(num3, sum3);

	cout << sum1 << endl;
	cout << sum2 << endl;
	cout << sum3 << endl;
}


Задача 1
int function(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int arr[] = { 2,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}


Задача 2
int function(const int arr[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	const int arr[] = { 1, 2, 3,4,5,6,7,8,9,10,12,14 };
	const int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
}





Задача 3
int function(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[] = { 1,2,3,4,2,3,7,3,68,5,3,4,6,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}



Задача 4
int function(int arr[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 1 && arr[i]>max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[] = { 2,4,6,8,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}




Задача 5   ////////////////////////////////////////////////////////////////////////////////////////////

int function(int arr[], int size) {
	int min = 1;
		for (int i = 0; i < size; i++) {
			if (min > arr[i]) {
				if (arr[i] % 2 == 0) {
					min = arr[i];
				}
			}
		}
	return min;
}

int main() {
	int arr[] = { 3,4,4,5,7,4,54,15,24,36 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
}



Задача 6
int function(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	int arr[] = { 1,3,5,6,2,8,5,4,6,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}



Задача 7
int function(int arr[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0 && arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[] = { 1,2,34,6,8,5,6,4,74,7,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}



Задача 8
int function(int arr[], int size) {
	if (size == 0) return 0;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 1) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	int arr[] = { 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}



Задача 9
int function(int arr[], int size) {
	/*int sum = arr[0] + arr[size - 1];
	return sum;*/


	int num1 = 0, num2 =0, sum=0;
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			num1 = arr[i];
		}
		if (i == size - 1) {
			num2 = arr[i];
		}
	}
	sum = num1 + num2;
	return sum;
}

int main() {
	int arr[] = { 1,3,5,6,6,7,3,5,34 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}




Задача 10
bool function(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1]) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int arr[] = { 1,3,4,5,5,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}




Задача 11
void function(int arr[], int size) {
	int arr2[50];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		arr[i] = arr2[size - i - 1];
	}
}

int main() {
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	function(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	return 0;
}



Задача 12
bool function(int arr[], int size) {
	int count = 0;
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 1) {
			counter++;
		}
	}
	if (count > counter) return 1;
	return 0;
}

int main() {
	int arr[] = { 1,3,5,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}




Задача 13
bool function(int arr[], int size) {
	bool flag = 0;
	for (int i = 0; i < size -1; i++) {
		if (arr[i] > arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}



Задача 14
bool function(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (arr[i] < arr[i + 1]) return 0;
	}
	return 1;
}

int main() {
	int arr[] = { 9,8,0,6,5,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size);
	return 0;
}




Задача 15
bool function(int arr[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) return 1;
	}
	return 0;
}

int main() {
	int num;
	cin >> num;
	int arr[] = { 1,3,45,67,3,5,3,67,2,6,57,16};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << function(arr, size, num);
}




Задача 16
void function(char str[], int& size) {
	int count = 0;
	while (str[count++] != '\0');
	count--;
	size = count;
}

int main() {
	int size = 0;
	char str[] = "abcd";
	function(str, size);
	cout << size;
}


Задача 17
void strlen1(char str[], int& size) {
	int count = 0;
	while (str[count++] != '\0');
	count--;
	size = count;
}

void function(char str[], int size) {
	for (int i = 0; i < size; i++) {
		if (str[i] == '+') {
			str[i] = '-';
		}
	}
}

int main() {
	char str[] = "abgd+agdj+";
	int size = 0;
	strlen1(str, size);
	function(str, size);
	cout << str;
}



Задача 18
bool function(char str[]) {
	int count = 0;
	int counter = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'U') {
			count++;
		}
		if (str[i] == 'P') {
			counter++;
		}
	}
	if (count > 0 && counter > 0) return 1;
	return 0;
}

int main() {
	char str[] = "UASDJFP";
	cout << function(str);
	return 0;
}


Задача 19
void function(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] += ('a' - 'A');
	}
}

int main() {
	char str[] = "ADDE";
	function(str);
	cout << str;
	return 0;
}


Задача 20
void swap1(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
}

void function(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < arr[i + 1]) {
			swap1(arr[i], arr[i + 1]);
		}
	}
}

int main() {
	int arr[] = { 1,2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	function(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}


Задача 21
void swap1(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
}

void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) swap1(arr[i], arr[j]);
		}
	}
}
bool chack(int* arr, int size, int* arr2, int size2) {
	if (size == size2) {
		for (int i = 0; i < size; i++) {
			if (arr[i] != arr2[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int main() {
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int size2;
	cin >> size2;
	int* arr2 = new int[size2];
	for (int i = 0; i < size; i++) {
		cin >> arr2[i];
	}


	bubbleSort(arr, size);
	bubbleSort(arr2, size2);
	cout << chack(arr, size, arr2, size2);
	delete[] arr;
	delete[] arr2;
	return 0;
}




int function(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			if (min < arr[i]) {
				min = arr[i];
			}
		}
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
	}
	return min;
}


int main() {
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << function(arr, size);
	delete[] arr;
	return 0;
}


int main() {
	int size;
	cin >> size;
	char* str = new char[size];
	for (int i = 0; i < size-1; i++) {
		cin >> str[i];
		
	}
	str[size-1] = '\0';
	cout << str;
	delete[] str;
	return 0;

}