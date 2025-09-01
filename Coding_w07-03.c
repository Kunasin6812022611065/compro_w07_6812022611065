#include <stdio.h>                                          // นำเข้า libary Stdio.h (Starndard Input Output Header) มาใช้งานฟังก์ชั่น input,output

int main() {                                                // สร้างฟังก์ชั่นหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงานเมื่อรันโปรแกรม
    int level;                                              // ประกาศตัวแปรเก็บค่าระดับ (level) ที่ผู้ใช้กรอก

    printf("Enter level: ");  
    scanf("%d", &level);                                    // รับค่าจากผู้ใช้แล้วเก็บในตัวแปร level

    // ตรวจสอบเงื่อนไข level ที่ไม่ต้องการก่อน
    if (level <= 0) {
        printf("The level below 1 is not allowed\n");       // ถ้า level <= 0 แสดงข้อความเตือนว่า The level below 1 is not allowed
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");       // ถ้า level > 4 แสดงข้อความเตือนว่า The level above 4 is not allowed
    } else {
        
        // สร้างเงื่อนไขถ้าอยู่ในช่วง 1 - 4 จะเข้าสู่ switch case
        switch(level) {
            case 1:                                         // กรณีที่ level มีค่าเป็น 1
                printf("Level 1: Beginner\n");              // แสดง Level 1: Beginner
                break;                                      // จบการทำงานของ Switch case
            case 2:                                         // กรณีที่ level มีค่าเป็น 2
                printf("Level 2: Intermediate\n");          // แสดง Level 2: Intermediate
                break;                                      // จบการทำงานของ Switch case
            case 3:                                         // กรณีที่ level มีค่าเป็น 3
                printf("Level 3: Advanced\n");              // แสดง Level 3: Advanced
                break;                                      // จบการทำงานของ Switch case
            case 4:                                         // กรณีที่ level มีค่าเป็น 4
                printf("Level 4: Expert\n");                // แสดง Level 4: Expert
                break;                                      // จบการทำงานของ Switch case
            default:                                        // ในกรณีที่ไม่ตรงกับ case ไหนเลย
                printf("Invalid level\n");                  // แสดง Invalid level
        }
    }

    return 0;                                               // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}
