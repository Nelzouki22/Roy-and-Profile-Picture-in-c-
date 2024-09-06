#include <iostream>
using namespace std;

int main() {
    int L, N;

    // قراءة قيمة L
    cin >> L;

    // قراءة عدد الصور N
    cin >> N;

    for (int i = 0; i < N; i++) {
        int W, H;
        cin >> W >> H;  // قراءة أبعاد الصورة

        if (W < L || H < L) {
            cout << "UPLOAD ANOTHER" << endl;
        }
        else if (W == H) {
            cout << "ACCEPTED" << endl;
        }
        else {
            cout << "CROP IT" << endl;
        }
    }

    return 0;
}
