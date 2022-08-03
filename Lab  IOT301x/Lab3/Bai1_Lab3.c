#include <stdio.h>

int main() {
    /*
    - This is lab 3.1, created by phancd.dev
    - Date of creation: 21/07/2022
    - Date of modified: 21/07/2022
    - Goal of this project: Input and output data using scanf and printf
    */
    
double chieuDai = 10;
double chieuRong = 5;

double chuVi = 2*(chieuDai + chieuRong);
double dienTich = chieuDai * chieuRong;

printf("Chu vi cua hinh chu nhat co chieu dai %g va chieu rong %g la %g \n", chieuDai, chieuRong, chuVi );
printf("Dien tich cua hinh chu nhat co chieu dai %g va chieu rong %g la %g", chieuDai, chieuRong, dienTich);

}