/**I.Trắc nghiệm(3 điểm)
Câu 1. Cho đoạn mã sau :
int a = 5;
int x = 2;
a += (x > 0 ? 1 : 0);
cout << a;
Kết quả in ra màn hình là gì ?
● A) 1
● B) 2
● C) 5
● D) 6
 answer: D (vì x=2>0 nên a = 5 + 1 = 6)
Câu 2. Cho hàm sau :
void towerOfHanoi(int n, char from_rod, char to_rod, char
	aux_rod) {
	if (n == 1) {
		cout << "Move disk 1 from rod " << from_rod << " to rod
			" << to_rod << endl;
			return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod << "
		to rod " << to_rod << endl;
		towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
	1
}
Số lượng bước cần thiết để chuyển 3 đĩa từ A sang C là bao nhiêu ?
● A) 3
● B) 5
● C) 7
● D) 9
 answer: B (vì n=3 thì số bước cần thiết là  2^3 - 1 = 8 - 1 = 7)
Câu 3. Cho hàm sau :
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
Khi gọi printArray(arr, 5) với arr là { 1, 2, 3, 4, 6 }, kết quả sẽ là gì ?
● A) 1 2 3 4 5
● B) 5 4 3 2 1
● C) 1 2 3 4
● D) 2 3 4 5
 answer: C 
Câu 4.
Giả sử có một mảng arr = { 5, 1, 4, 2, 8 }. Bạn được yêu cầu sắp xếp mảng tăng
dần bằng phương pháp nổi bọt, sau lần sắp xếp đầu tiên, mảng sẽ trông như thế nào ?
● A) {1, 2, 4, 5, 8}
● B) {5, 1, 4, 2, 8}
● C) {1, 4, 2, 5, 8}
● D) {1, 5, 4, 2, 8}
 answer: C 
Câu 5.
Điều kiện của vòng lặp nào sau đây sẽ làm vòng lặp chạy vô hạn ?
x = -1;
while (condition) {
	// code
}
● A) condition = true
● B) condition = false
2
● C) condition = (x > 0)
● D) condition = (x == 10)
 answer: A (vì x=-1 nên x>0 là false)
Câu 6. Cho hàm sau :
int factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
Giá trị của factorial(4) là bao nhiêu ?
● A) 4
● B) 12
● C) 24
● D) 16
 answer: C (vì 4!=24)
Câu 7.
Hàm tìm kiếm nhị phân trả lại vị trí của key trong mảng hoặc trả về - 1. Giả sử có một
mảng đã sắp xếp arr = { 1, 3, 5, 7, 9 }. Chúng ta cần tìm kiếm giá trị 2. Giá trị trả
về của hàm tìm kiếm nhị phân là gì ?
● A) 1
● B) 0
● C) - 1
● D) 2
 answer: C (vì 2 không có trong mảng nên trả về -1)
Câu 8. Cho hàm sau :
void changeValue(int& x) {
	x = 10;
}
Nếu gọi hàm changeValue(a) với a là 5, giá trị của a sau khi gọi hàm sẽ là bao nhiêu ?
3
● A) 5
● B) 10
● C) Không xác định
● D) Lỗi biên dịch
 answer: B (vì tham chiếu đến a nên a=10)
Câu 9.
void incrementByValue(int x) {
	x++;
}
void incrementByReference(int& x) {
	x++;
}
Nếu gọi hàm incrementByValue(a) và incrementByReference(b) với a và b đều
là 5, giá trị của a và b sau khi gọi hàm sẽ lần lượt là bao nhiêu ?
● A) 5, 5
● B) 6, 6
● C) 5, 6
● D) 6, 5
 answer: C 
Câu 10.
int fibonacci(int n) {
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
Giá trị của fibonacci(6) là bao nhiêu ?
● A) 5
● B) 8
● C) 13
● D) 21 answer: B (vì fibonacci(6) = fibonacci(5) + fibonacci(4) = 5 + 3 = 8) **/ /**Câu 1 
 * 
Cho một mảng N số nguyên và một số nguyên K. Nhiệm vụ của bạn là tìm tất cả các cặp phần tử
trong mảng có tổng bằng K.
Đầu vào:
Dòng đâu tiên chứa số N là độ dài của dãy;
Dòng tiếp theo chứa N số nguyên
Dòng cuối cùng chứa số 𝐾 ≤ 10


#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int* a = new int[n];  

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}

	delete[] a; 
	return 0;


}

Câu 3 
Viết lại thuật toán bubble sort, nêu ưu và nhược điểm của thuật toán này với các thuật toán
selection sort và insertion sort

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

Ưu điểm so selection sort và insertion sort là
-bubble sort dễ hiểu và cài đặt, dễ sử dụng, dễ debug
-bubble sort ổn định, không làm thay đổi vị trí của các phần tử có cùng giá trị
-bubble sort có thể sắp xếp mảng theo thứ tự giảm dần bằng cách thay đổi dấu so sánh

Nhược điểm so với selection sort và insertion sort là
-bubble sort không hiệu quả với dữ liệu đã sắp xếp
-bubble sort không hiệu quả với dữ liệu lớn
-bubble sort không hiệu quả với dữ liệu có phân phối không đồng đều
-bubble sort không hiệu quả với dữ liệu có phần tử trùng lặp
-bubble sort không hiệu quả với dữ liệu có phần tử lớn



Câu 4 
Trình bày thuật toán tìm kiếm nhị phân bằng đệ quy
int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x) {
			return mid;
		}
		if (arr[mid] > x) {
			return binarySearch(arr, l, mid - 1, x);
		}
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

**/

