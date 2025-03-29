
/**Câu lệnh nào sau đây thực hiện gán giá trị của n cho con trỏ* p
int n = 5; int* p;
i.p = n;
ii.p = &n;
iii.* p = n;
iv.* p = &n;
 answer: ii

Câu lệnh nào sau đây thực hiện chỉ con trỏ* p1 vào vị trí con trỏ* p2 đang chỉ
i.* p1 = p2;
ii.p1 = *p2;
iii.p1 = p2;
iv.* p1 = *p2
 answer: iii

Đối với phép toán con trỏ, phát biểu nào sau đây có ý nghĩa lập trình
i.Phép nhân trên con trỏ kiểu int
ii.Phép cộng trừ trên con trỏ kiểu int
iii.Phép gán với con trỏ kiểu int
iv.Tất cả các phép toán với con trỏ kiểu int
 answer: iv

Phát biểu nào sau đây chính xác
i.Phép cộng trừ với các con trỏ ở mảng khác nhau
ii.Phép cộng trừ với các con trỏ ở cùng mảng
iii.Tất cả các phép toán với các con trỏ ở cùng mảng(trong giới hạn mảng)
iv.Tất cả các phát biểu trên
 answer: iii


Phát biểu nào sau đây đúng với con trỏ tới hàm
i.Có thể được truyền vào trong trong
ii.Có thể được trả về bới hàm
iii.Có thể được lưu trong mảng
iv.Tất cả các phát biểu trên
 answer: iv


Khai báo hàm nào sau đây không đúng
i.	void bubble(int[], const int, bool (*) (int, int));
ii.	void bubble(int[], const int, bool* (int, int));
iii.	void bubble(int[], const int, (bool*)(int, int));
iv.	void bubble(int[], const int, bool(*(int, int)));
 answer: iii

Kết quả đoạn mã sau là gì :
int a[6] = { 1, 2, 3 };
int* b; b = &a[0];
for (int i = 0; i < 3; i++)
	switch (i % 3) {
	case 0: *(b + i) = a[i]; break;
	case 1: *(b++) = a[i]; break;
	case 2: *(++b) = a[i]++; break;
	}
for (int i = 0; i < 3; i++) cout << a[i] << " ";
i.	0 2 3
ii.	2 2 0
iii.	2 2 3
iv.	3 0 3
 answer: iii
 
 **/


