#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    // Nhập hệ số a, b, c từ người dùng
    cin >> a >> b >> c;

    // Tính delta
    double delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                // Phương trình có vô số nghiệm
                cout << "Phuong trinh co vo so nghiem";
            } else {
                // Phương trình vô nghiệm
                cout << "Phuong trinh vo nghiem";
            }
        } else {
            // Phương trình có một nghiệm
            double x = -c / b;
            cout << "Phuong trinh co mot nghiem";
        }
    } else {
        if (delta > 0) {
            // Phương trình có hai nghiệm phân biệt
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet";
        } else if (delta == 0) {
            // Phương trình có một nghiệm (nghiệm kép)
            double x = -b / (2 * a);
            cout << "Phuong trinh co mot nghiem";
        } else {
            // Phương trình vô nghiệm
            cout << "Phuong trinh vo nghiem";
        }
    }

    return 0;
}
