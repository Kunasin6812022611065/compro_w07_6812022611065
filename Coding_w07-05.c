#include <stdio.h>                                                                                          // นำเข้า library stdio.h (Standard Input Output Header) สำหรับใช้งานฟังก์ชัน input และ output

int main() {                                                                                                // สร้างฟังก์ชันหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงาน
    int age, level;                                                                                         // ประกาศตัวแปรเก็บอายุ (age) และระดับ VIP (level)
    float amount, discount = 0.0;                                                                           // ประกาศตัวแปรเก็บยอดซื้อ (amount) และส่วนลด (discount) กำหนดค่าเริ่มต้นเป็น 0.0

    // ----------------------------- รับข้อมูลจากผู้ใช้งาน -----------------------------
    printf("Enter age: ");                                                                                  // แสดงข้อความให้กรอกอายุ
    scanf("%d", &age);                                                                                      // รับค่าอายุจากผู้ใช้งาน
    printf("Enter VIP level (1-5): ");                                                                      // แสดงข้อความให้กรอก VIP level
    scanf("%d", &level);                                                                                    // รับค่าระดับ VIP จากผู้ใช้งาน
    printf("Enter purchase amount: ");                                                                      // แสดงข้อความให้กรอกยอดซื้อ
    scanf("%f", &amount);                                                                                   // รับค่ายอดซื้อจากผู้ใช้งาน

    // ----------------------------- ตรวจสอบเงื่อนไขการให้ส่วนลด -----------------------------
    if (age > 60 || (level >= 3 && level <= 4)) {                                                           // กรณีอายุมากกว่า 60 ปี หรือ VIP ระดับ 3-4 ได้ส่วนลด 20%
        discount = 0.20;
    } else if (age >= 30 && age <= 40 && amount > 2000) {                                                   // กรณีอายุระหว่าง 30-40 ปี และยอดซื้อเกิน 2000 บาท ได้ส่วนลด 15%
        discount = 0.15;
    } else if (age >= 20 && age <= 25 && amount > 1500) {                                                   // กรณีอายุระหว่าง 20-25 ปี และยอดซื้อเกิน 1500 บาท ได้ส่วนลด 10%
        discount = 0.10;
    } else if (level == 5 && amount > 50000) {                                                              // กรณีเป็น VIP ระดับ 5 และยอดซื้อเกิน 50,000 บาท ได้ส่วนลด 25%
        discount = 0.25;
    } else {                                                                                                // กรณีไม่เข้าเงื่อนไขใด ๆ จะไม่ได้รับส่วนลด
        discount = 0.0;
    }

    // ----------------------------- แสดงผลลัพธ์ -----------------------------
    printf("\n--- Customer Info ---\n");                                                                    // แสดงหัวข้อข้อมูลลูกค้า
    printf("Age: %d\n", age);                                                                               // แสดงอายุ
    printf("VIP Level: %d\n", level);                                                                       // แสดงระดับ VIP
    printf("Purchase Amount: %.2f THB\n", amount);                                                          // แสดงยอดซื้อ (ทศนิยม 2 ตำแหน่ง)

    if (discount > 0) {                                                                                     // ถ้าได้รับส่วนลด
        printf("Discount received: %.0f%%\n", discount * 100);                                              // แสดงเปอร์เซ็นต์ส่วนลด
        printf("Final Price: %.2f THB\n", amount - (amount * discount));                                    // แสดงราคาสุทธิหลังหักส่วนลด
    } else {                                                                                                // ถ้าไม่ได้รับส่วนลด
        printf("No discount applied\n");                                                                    // แสดงข้อความว่าไม่มีส่วนลด
    }

    printf("Thank you for shopping with us!\n");                                                            // แสดงข้อความขอบคุณ

    return 0;                                                                                               // คืนค่า 0 เพื่อสิ้นสุดการทำงานของโปรแกรม
}
