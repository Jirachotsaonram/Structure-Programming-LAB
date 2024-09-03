#include <iostream>
using namespace std;

int main() {
    int sum = 0; // กำหนดค่าเริ่มต้นของผลรวมเป็น 0
    for (int i = 0; i <= 10; ) { // วนลูปตั้งแต่ i=1 จนถึง i=10
     ++i;
        sum += i; // เพิ่มค่า i เข้าไปในผลรวม
    }
    cout << "The sum of numbers from 1 to 10 is: " << sum << endl; // แสดงผลรวม
    return 0;
}
