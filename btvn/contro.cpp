#include <iostream>
using namespace std;
int strl(const char a[]) {
    int i=0;
    for (i = 0; a[i] != '\0'; i++);
    return i;
}

void reverse(char a[]) {
    int n = strl(a);
    for (int i = 0; i < n / 2; i++) { 
        char temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void delete_char(char a[], char c) {
    int n = strl(a);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] != c ) {
            a[j++] = a [i] ;
        }
    }
    a[j] = '\0';

}

void pad_right(char a[], int n) {
	int m = strl(a);
	for (int i = m; i < n; i++) {
		a[i] = ' ';
	}
	a[n] = '\0';
}

void pad_left(char a[], int n) {
	int m = strl(a);
	for (int i = m; i < n; i++) {
		a[i] = a[i - m];
	}
	a[n] = '\0';
}

void truncate(char a[], int n) {
	a[n] = '\0';
}

bool is_palindrome(char a[]) {
	int n = strl(a);
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - i - 1]) {
			return false;
		}
	}
	return true;
}

void trim_left(char a[]) {
	int n = strl(a);
	int i = 0;
	while (a[i] == ' ') {
		i++;
	}
	for (int j = 0; j < n - i; j++) {
		a[j] = a[j + i];
	}
	a[n - i] = '\0';
}

void trim_right(char a[]) {
	int n = strl(a);
	int i = n - 1;
	while (a[i] == ' ') {
		i--;
	}
	a[i + 1] = '\0';
}

int main() {
	char a[100];
	cin >> a;
	//reverse(a);
	//delete_char(a, 'a');
	//pad_right(a, 10);
	//pad_left(a, 10);
	//truncate(a, 5);
	//cout << is_palindrome(a);
	//trim_left(a);
	//trim_right(a);
	cout << a;
	return 0;
}

