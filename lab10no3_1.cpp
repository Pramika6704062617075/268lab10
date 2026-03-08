#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books CBook) ; 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d\n", &ComputerBook.BookID); 
    printf("Enter Book Title :");   
    fgets(ComputerBook.BookTitle, 50, stdin);
    DisplayData(ComputerBook); 
    return 0; 
} 

void DisplayData(struct Books CBook) {

    printf("Book ID : %d \n", CBook.BookID);
    printf("Book Title : %s \n", CBook.BookTitle);
}

// void DisplayData(struct Books CBook) คือ การประกาศฟังก์ชันที่มีหน้าที่แสดงข้อมูลของหนังสือ โดยรับค่าแบบ Pass by Value
// พารามิเตอร์ที่รับเข้ามาคือ ตัวแปรชื่อ CBook ซึ่งมีชนิดข้อมูลเป็นโครงสร้าง struct Books
