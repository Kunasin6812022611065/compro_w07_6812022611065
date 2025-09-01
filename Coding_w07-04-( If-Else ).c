#include <stdio.h>                                                                                      // นำเข้า libary Stdio.h (Starndard Input Output Header) มาใช้งานฟังก์ชั่น input,output

int main() {                                                                                            // สร้างฟังก์ชั่นหลักของโปรแกรม เพื่อเป็นจุดเริ่มต้นการทำงานเมื่อรันโปรแกรม
    int level;                                                                                          // ตัวแปรเก็บระดับสมาชิก

    printf("Enter membership level (1-4): ");                                                           // แสดงข้อตวามเพื่อให้กรอกระดับสมาชิกของผู้ใช้
    scanf("%d", &level);                                                                                // กรอกระดับสมาชิกของผู้ใช้

    // สร้างเงื่อนไขมาเพื่อตรวจสอบระดับการเป็นสามาชิกด้วย if - else if
    if (level == 1) {                                                                                   // ถ้าหาก Level มีค่าเป็น 1
        printf("Silver Member: 5%% discount\n");                                                        // แสดงผลลัพธ์ว่า Silver Member: 5% discount
    } else if (level == 2) {                                                                            // ถ้าหาก Level มีค่าเป็น 2
        printf("Gold Member: 10%% discount + Reward points\n");                                         // แสดงผลลัพธ์ว่า Gold Member: 10% discount + Reward points
    } else if (level == 3) {                                                                            // ถ้าหาก Level มีค่าเป็น 3
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");                     // แสดงผลลัพธ์ว่า Platinum Member: 15% discount + Reward points + Birthday gift
    } else if (level == 4) {                                                                            // ถ้าหาก Level มีค่าเป็น 4
        printf("Diamond Member: 20%% discount + Reward points + Birthday gift + VIP events\n");         // แสดงผลลัพธ์ว่า Diamond Member: 20% discount + Reward points + Birthday gift + VIP events
    } else {                                                                                            // ถ้าหากไม่ตรงกับเงื่อนไขใดเลย
        printf("Invalid membership level\n");                                                           // แสดงผลลัพธ์ว่า Invalid membership level
    }

    return 0;                                                                                           // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}

/// อภิปราย เปรียบเทียบการเขียนทั้ง 2 วิธี: 
/// หากใช้ if-else       เงื่อนไขหลากหลายกว่า เช่น >, <, >=, <=, ==, != สามารถใช้ ช่วงค่า ได้ เช่น if (x >= 1 && x <= 5) เหมาะกับ เงื่อนไขซับซ้อนที่ต้องตรวจหลายอย่างพร้อมกัน (&&, ||) แต่โค้ดอาจจะดูยาวและอ่านยากขึ้นถ้ามีเงื่อนไขหลายกรณีฃ
/// หากใช้ switch case   ใช้ได้เฉพาะกับ ค่าที่แน่นอน (exact value) เช่น 1, 2, 3 แต่ไม่สามารถใช้ช่วงค่า หรือเงื่อนไขซับซ้อนโดยตรงได้ เหมาะกับกรณีที่มี หลายค่าแน่นอน เช่น เมนูตัวเลือก, ระดับสมาชิก และโค้ดอ่านง่าย เป็นระเบียบมากกว่าถ้ากรณีไม่ซับซ้อน

/// วิเคราะห์ ใช้ switch-case จะดีกว่า เพราะตรวจสอบค่าระดับสมาชิกที่เป็นตัวเลขแน่นอน (1–4) ทำให้โค้ดกระชับและอ่านง่าย และยังสามารถเพิ่มระดับสสมาชิกได้ง่าย แต่หากในอานาคตจะเพิ่มเงื่อนไขที่ซับซ้อนมากขึ้นใช้ if else จะมีประสิทธิภาพมากกว่า