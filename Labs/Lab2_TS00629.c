#include <stdio.h>

//CÂU 1: Tổng Hiệu 2 số.

void sumAndSub() 
{
    printf("Type nummbers here: ");
    //Khai báo biến theo cú pháp <kiểu dữ liệu> <tên biến>;.
    int numb1, numb2;
    //Hàm nhập dữ liệu, %<loại dữ liệu> để nhập, &<biến> để chọn biến nhập.
    scanf("%d%d", &numb1, &numb2);
    int sum, sub;
    //Hàm in, %<loại dữ liệu> để xuất, khai báo biến phía sau %<loại dữ liệu>.
    printf("Sum: %d\nSub: %d", numb1+numb2, numb1-numb2);
    return 0;
}

//CÂU 2: Chu vi Diện tích HCN.

void perimeterAndArea1()
{
    printf("Type length and width: ");
    float numb3, numb4;
    scanf("%f%f", &numb3, &numb4);
    printf("Perimeter: %f\nArea: %f", (numb3+numb4)*2, numb3*numb4);
    return 0;
}

//CÂU 3: Chu vi Diện tích Hình tròn.

//Khai báo hằng theo cú pháp const <kiểu dữ liệu> <tên biến>=<dữ liệu>;.
const float pi=3.14;

void perimeterAndArea2()
{
    printf("Type radius: ");
    float numb5;
    scanf("%f", &numb5);
    printf("Perimeter: %f\nArea: %f", numb5*2*pi, numb5*numb5*pi);
    return 0;
}

//CÂU 4: Điểm trung bình.

int main()
{
    printf("Type your grade of Math, Physics and Chemistry: ");
    float numb6, numb7, numb8;
    scanf("%f%f%f", &numb6, &numb7, &numb8);
    printf("Average: %f", ((numb6*3)+(numb7*2)+numb8)/6);
    return 0;
}