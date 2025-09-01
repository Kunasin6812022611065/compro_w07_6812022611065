#include <stdio.h>                                              // นำเข้า libary Stdio.h (Starndard Input Output Header) มาใช้งานฟังก์ชั่น input,output

int main() {                                                    // สร้างฟังก์ชั่นหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงานเมื่อรันโปรแกรม
    int x, y;                                                   // ตัวแปรเก็บค่าตัวเลขจากผู้ใช้
    int result;                                                 // ตัวแปรสำหรับเก็บผลการเปรียบเทียบ

    printf("Enter first number (x): ");                         // แสดงที่หน้าจอเพื่อ รับค่า x จากแป้นพิมพ์
    scanf("%d", &x);                                            // รับค่า x จากแป้นพิมพ์

    printf("Enter second number (y): ");                        // แสดงที่หน้าจอเพื่อ รับค่า y จากแป้นพิมพ์
    scanf("%d", &y);                                            // รับค่า y จากแป้นพิมพ์

    // เปรียบเทียบค่าแล้วกำหนด result
    if (x > y) {
        result = 1;                                             // x มากกว่า y
    } else if (x < y) {
        result = 2;                                             // x น้อยกว่า y
    } else {
        result = 0;                                             // x เท่ากับ y
    }

    // ใช้ switch-case เพื่อจำแนกค่า result ให้เป็นแต่ละความเป็นไปได้
    switch (result) {
        case 1:
            printf("x (%d) is greater than y (%d)\n", x, y);    // เมื่อ result เป็น 1 จะแสดง x มากกว่า y
            break;
        case 2:
            printf("x (%d) is less than y (%d)\n", x, y);       // เมื่อ result เป็น 2 จะแสดง x น้อยกว่า y
            break;
        case 0:
            printf("x (%d) is equal to y (%d)\n", x, y);        // เมื่อ result เป็น 0 จะแสดง x เท่ากับ y
            break;
        default:
            printf("Error in comparison\n");                    // หากไม่ตรงกับเงื่อนไขใดๆจะแสดงผลว่า Error in comparison
    }

    return 0;                                                   // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}
