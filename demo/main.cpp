//#include <iostream>
//#include <string>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
#include <iostream>

// Hàm đảo mảng
void daoMang(int mang[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        // Hoán đổi giá trị giữa phần tử i và phần tử (size - i - 1)
        int temp = mang[i];
        mang[i] = mang[size - i - 1];
        mang[size - i - 1] = temp;
    }
}

int main() {
    int mang[] = { 1, 2, 3, 4, 5 };
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    std::cout << "Mang truoc khi dao: ";
    for (int i = 0; i < kichThuoc; ++i) {
        std::cout << mang[i] << " ";
    }
    int b[] = mang;
    daoMang(mang, kichThuoc); // Truyền mảng dưới dạng con trỏ

    std::cout << "\nMang sau khi dao: ";
    for (int i = 0; i < kichThuoc; ++i) {
        std::cout << mang[i] << " ";
    }

    return 0;
}

//
//void exampleOne(int n) {
//	
//	if (n % 3 == 0 && n % 5 == 0 ) {
//		cout << " n chia cho 3 va 5 :" << endl;
//	} else if (n % 5 == 0 ) {
//		cout << " n chia cho 5 : " << endl;
//	} else if (n % 3 == 0) {
//		cout << " n chia  het cho 3 " << endl;
//	}
//}
//
//string reverseString(string s) {
//	int n = s.length();
//	for (int i = n-1; i < 0 ; i--) {
//		
//	}
//	return s;
//}
//
//int* reverseArray(int a[]) {
//	int start = 0;
//	int end = sizeof(a) - 1;
//
//	while (start < end) {
//		// Hoán đổi giá trị của hai phần tử
//		int temp = a[start];
//		a[start] = a[end];
//		a[end] = temp;
//
//		// Di chuyển các con trỏ
//		start++;
//		end--;
//	}
//	return a;
//}
//
//void printArray(int a[]) {
//	for (int i = 0; i < 6; i++) {
//		cout << a[i] << " ";
//	}
//}
//void arangeUp(int a[]) {
//	for (int i = 0; i < 5; i++) {
//		int tmp;
//		for (int j = i + 1; j < 6; j++) {
//			if (a[j] < a[i]) {
//				int tmp = a[j];
//				a[j] = a[i];
//				a[i] = tmp;
//			}
//		}
//
//	}
//
//}
//void arangeDown(int a[]) {
//	for (int i = 0; i < 5; i++) {
//		int tmp;
//		for (int j = i + 1; j < 6; j++) {
//			if (a[j] > a[i]) {
//				int tmp = a[j];
//				a[j] = a[i];
//				a[i] = tmp;
//			}
//		}
//
//	}
//
//}
//
//
//
//
//int main()
//{
//	// bai toan 1: nhap 1 so n, kiem tra xem neu chia het cho 3 thi in ra chia het cho 3
//	// neu chia het cho 5 in ra chia het cho 5
//	// neu chia het cho ca 3 va 5, thi in ra ok
//	// bai2: nhap vao 1 chuoi kiem tra xem chuoi do co phai duoc tao boi 2 chuoi copy khong;
//	// bai 3: nhap vao 1 chuoi viet ham de dao nguoc chuoi lai;
//	// bai 4 : nhap vao 1 mang dao mang, sap xep mang tang dan,giam dan
//
//	/*exampleOne(15);
//	string s = "cuong";
//	reverseString(s);
//	for (int i = 0; i < s.size(); i++) {
//		cout << s[i];
//	}*/
//
//	int a[6] = { 1, 4, 3, 17, 5, 31 };
//	int* b = reverseArray(a);
//	
//	printArray(b);
//
//	/*cout << endl;
//	arangeUp(a);
//	printArray(a);?
//	cout<<endl;
//	arangeDown(a);
//	printArray(a);*/
//
//
//	
//
//	
//
//	return 0;
//}