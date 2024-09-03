#include <iostream>
#include <cstdlib>  // สำหรับฟังก์ชัน rand() และ srand()
#include <ctime>    // สำหรับฟังก์ชัน time()
using namespace std;
int main() {

    // สุ่มตัวเลขระหว่าง 1 ถึง 100
    int randomNumber = rand() % 100 + 1;

    // แสดงผลลัพธ์
    cout << "Random Numbers: " << randomNumber << endl;

    return 0;
}
