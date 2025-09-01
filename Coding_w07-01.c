#include <stdio.h>                              // นำเข้า libary Stdio.h (Starndard Input Output Header) มาใช้งานฟังก์ชั่น input,output

int main() {                                    // สร้างฟังก์ชั่นหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงานเมื่อรันโปรแกรม
    float score;                                // ตัวแปรเก็บคะแนนสอบ
    float finalScore;                           // ตัวแปรเก็บคะแนนรวมหลังตรวจเงื่อนไข

    printf("Enter midterm score: ");            // Input: รับค่าคะแนนสอบจากผู้ใช้  
    scanf("%f", &score);                        // Input: รับค่าคะแนนสอบจากผู้ใช้  

    // สร้างเงื่อนไข ถ้า >= 50 ให้บวกเพิ่มอีก 5%
    if (score >= 50) {
        finalScore = score + (score * 0.05);    // หากตรงตามเงื่อนไขให้ score บวกเพิ่ม 5%
    } else {
        finalScore = score;                     // ให้ finalscore มีค่าเป็น score 
    }

    printf("Final Score: %.2f\n", finalScore);  // แสดงค่าของ final score
    printf("End of evaluation\n");              // พิมพ์ข้อความ End of evaluation เพื่อสิ้นสุดการทำงาน

    return 0;                                   // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}