#include <iostream>
#include <cmath>
using namespace std;

// Nguyên mẫu hàm
double deQuyF(int n, int A, int B, int C);
double hoTroF(int n, int A, int B, int C);  // đệ quy tương hỗ
double deQuyG(int n, int A, int B, int C);
void xuLyDaySo(int n, int A, int B, int C);

// Hàm tính F(n): F gọi hoTroF → hoTroF gọi lại F → đệ quy tương hỗ
double deQuyF(int n, int A, int B, int C) {
    return hoTroF(n, A, B, C);
}

// Hàm phụ trợ hỗ trợ deQuyF: gọi lại deQuyF → tạo vòng lặp tương hỗ
double hoTroF(int n, int A, int B, int C) {
    if (n == 1) return A;
    if (n == 2) return B;
    if (n == 3) return C;

    double Fn1 = deQuyF(n - 1, A, B, C);
    double Fn2 = deQuyF(n - 2, A, B, C);
    double Fn3 = deQuyF(n - 3, A, B, C);

    return (Fn1 + Fn2 * Fn3) / (1 + abs(Fn1 - Fn2) + static_cast<int>(Fn3) % 3);
}

// Hàm tính G(n) theo F(n), làm tròn F để xử lý lẻ/chẵn
double deQuyG(int n, int A, int B, int C) {
    double Fn = deQuyF(n, A, B, C);
    int FnNguyen = static_cast<int>(round(Fn));
    return (FnNguyen % 2 == 0) ? Fn / 2 : Fn * 3 + 1;
}

// Xử lý chuỗi G(n) đến khi <=1 hoặc quá MAX_LAP bước
void xuLyDaySo(int n, int A, int B, int C) {
    int dem = 0;
    double Gn = deQuyG(n, A, B, C);
    const int MAX_LAP = 100;

    while (Gn > 1 && dem < MAX_LAP) {
        cout << "G(" << dem << ") = " << Gn << endl;

        int GnNguyen = static_cast<int>(round(Gn));
        if (GnNguyen % 2 == 0)
            Gn = Gn / 2;
        else
            Gn = Gn * 3 + 1;

        dem++;
    }

    if (Gn <= 1)if (gn <= 1)
        cout << "Giá trị G hội tụ về 1 sau " << dem << " bước lặp." << endl;
    else
        cout << "G không hội tụ sau " << MAX_LAP << " bước lặp. Dừng để tránh vòng lặp vô hạn." << endl;
}

// Hàm chính
int main() {
    int A, B, C, n;
    cout << "Nhập giá trị A, B, C và n: ";
    cin >> A >> B >> C >> n;

    double Fn = deQuyF(n, A, B, C);
    cout << "F(" << n << ") = " << Fn << endl;

    xuLyDaySo(n, A, B, C);

    return 0;
}
