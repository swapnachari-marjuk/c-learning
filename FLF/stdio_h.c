#include <stdio.h>

int main() {
    int roll;
    char grade;

    // printf এবং scanf এর ব্যবহার
    printf("আপনার রোল নম্বর লিখুন: ");
    scanf("%d", &roll);
    
    // বাফার ক্লিয়ার করার জন্য (scanf এর পর getchar ব্যবহারের আগে এটি প্রয়োজন হয়)
    while (getchar() != '\n'); 

    // getchar এবং putchar এর ব্যবহার
    printf("আপনার গ্রেড (A/B/C) লিখুন: ");
    grade = getchar();

    printf("\n--- ফলাফল ---\n");
    printf("রোল নম্বর: %d\n", roll);
    printf("প্রাপ্ত গ্রেড: ");
    putchar(grade);
    printf("\n");

    return 0;
}
