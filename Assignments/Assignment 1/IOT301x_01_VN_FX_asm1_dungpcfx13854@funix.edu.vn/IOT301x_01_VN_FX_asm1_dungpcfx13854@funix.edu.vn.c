#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define cach "\n------------------------------------\n\n "
#define htd "Xin vui long nhap toa do diem"
float toaDo[6];
float canhGoc[6];
float duongCao[3];
float trungTuyen[3];
float p;

void duongcao_tamgiac() {
    //Tinh nua chu vi
    p = canhGoc[0] + canhGoc[1] + canhGoc[2] / 2; 


    // Ap dung cong thuc heron, tinh do dai cua duong cao tam giac (duongCao)
    duongCao[0] = ((2 * (sqrt(p * (p - canhGoc[0]) * (p - canhGoc[1]) * (p - canhGoc[2])))) / canhGoc[2]);
    duongCao[0] = ((2 * (sqrt(p * (p - canhGoc[0]) * (p - canhGoc[1]) * (p - canhGoc[2])))) / canhGoc[1]);
    duongCao[0] = ((2 * (sqrt(p * (p - canhGoc[0]) * (p - canhGoc[1]) * (p - canhGoc[2])))) / canhGoc[0]);

    //Print 
    printf(cach);
    printf("3. So do nang cao tam giac ABC: \n");
    printf("Do dai duong cao tu dinh A la: %.2f ", duongCao[0]); //%.2f có nghĩa là lấy 2 số lẻ sau dấu”.” ví dụ: 1.65 hay 1.74
    printf("Do dai duong cao tu dinh B la: %.2f ", duongCao[1]); 
    printf("Do dai duong cao tu dinh B la: %.2f ", duongCao[2]); 
    
    }

void dienttich_tamgiac() {
    p = (canhGoc[2] + canhGoc[1] + canhGoc[0]) / 2;

    //Ap dung cong thuc Heron, tinh dient tich

    float s = sqrt(p * (p - canhGoc[2]) * (p - canhGoc[1]) * (p - canhGoc[0]));
    printf(cach);
    printf("2. Dien tich tam giac la: %2.f", s);
 
}


void tinhcanh() {

//Tinh canh tu toa do da nhap vao

canhGoc[0] = sqrt((toaDo[0] - toaDo[2]) * (toaDo[0] - toaDo[2]) + (toaDo[1] - toaDo[3]) * (toaDo[1] - toaDo[3]));
canhGoc[1] = sqrt((toaDo[0] - toaDo[4]) * (toaDo[0] - toaDo[4]) + (toaDo[1] - toaDo[5]) * (toaDo[1] - toaDo[5]));
canhGoc[2] = sqrt((toaDo[2] - toaDo[4]) * (toaDo[2] - toaDo[4]) + (toaDo[3] - toaDo[5]) * (toaDo[3] - toaDo[5]));



}

int main()
{
    return 0;
}
