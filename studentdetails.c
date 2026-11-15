#include<stdio.h>
int main()
{
    int rollno;
    float percentage;
    char grade;
    printf("student details");
    printf("enter the roll no:");
    scanf(" Roll Number:%d\n",&rollno);
    printf("enter the percentage:");
    scanf(" Percentage:%.2f\n",&percentage);
    printf("enter the grade:");
    scanf(" Grade:%c\n",&grade);
    return 0;
}