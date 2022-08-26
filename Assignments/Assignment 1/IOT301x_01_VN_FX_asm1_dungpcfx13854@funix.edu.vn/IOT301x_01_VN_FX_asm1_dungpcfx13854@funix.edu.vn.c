#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define cach "\n------------------------------------\n\n "
#define htd "Xin vui long nhap toa do diem"
#define PI 3.14159265

float toaDo[6];
float canhGoc[6];
float duongCao[3];
float trungTuyen[3];
float p; //Chu vi


// Ham tinh  duong cao tam giac 
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


// Ham tinh dien tich tam giac
void dientich_tamgiac() {
    p = (canhGoc[2] + canhGoc[1] + canhGoc[0]) / 2;

    //Ap dung cong thuc Heron, tinh dient tich

    float s = sqrt(p * (p - canhGoc[2]) * (p - canhGoc[1]) * (p - canhGoc[0]));
    printf(cach);
    printf("2. Dien tich tam giac la: %2.f", s);
 
}


void tinhcanh() {

// Tinh canh tu toa do da nhap vao

canhGoc[0] = sqrt((toaDo[0] - toaDo[2]) * (toaDo[0] - toaDo[2]) + (toaDo[1] - toaDo[3]) * (toaDo[1] - toaDo[3]));
canhGoc[1] = sqrt((toaDo[0] - toaDo[4]) * (toaDo[0] - toaDo[4]) + (toaDo[1] - toaDo[5]) * (toaDo[1] - toaDo[5]));
canhGoc[2] = sqrt((toaDo[2] - toaDo[4]) * (toaDo[2] - toaDo[4]) + (toaDo[3] - toaDo[5]) * (toaDo[3] - toaDo[5]));



}

void xet_tamgiac()
{
  // Xet tam giac tao duoc tu toa do la tam giac gi
  char dacTinh[4]; // Vuong, tu, can, deu
  if ((canhGoc[3] - 90.0f < 0.000001f) && (canhGoc[3] - 90.0f >= 0.0f) || (canhGoc[3] - 90.0f > -0.000001f) && (canhGoc[3] - 90.0f <= 0.0f))
    dacTinh[0] = 'A';
  else if ((canhGoc[4] - 90.0f < 0.000001f) && (canhGoc[4] - 90.0f >= 0.0f) || (canhGoc[4] - 90.0f > -0.000001f) && (canhGoc[4] - 90.0f <= 0.0f))
    dacTinh[0] = 'B';
  else if ((canhGoc[5] - 90.0f < 0.000001f) && (canhGoc[5] - 90.0f >= 0.0f) || (canhGoc[5] - 90.0f > -0.000001f) && (canhGoc[5] - 90.0f <= 0.0f))
    dacTinh[0] = 'C';
  else
    dacTinh[0] = '0';

  if (canhGoc[3] > 90.0f)
    dacTinh[1] = 'A';
  else if (canhGoc[4] > 90.0f)
    dacTinh[1] = 'B';
  else if (canhGoc[5] > 90.0f)
    dacTinh[1] = 'C';
  else
    dacTinh[1] = '0';

  if (canhGoc[2] == canhGoc[1]) // a = b
    dacTinh[2] = 'C';
  else if (canhGoc[2] == canhGoc[0])
    dacTinh[2] = 'B';
  else if (canhGoc[1] == canhGoc[0])
    dacTinh[2] = 'A';
  else
    dacTinh[2] = '0';

  if (canhGoc[2] == canhGoc[1] && canhGoc[1] == canhGoc[0] && canhGoc[2] == canhGoc[0])
    dacTinh[3] = '1';
  else
    dacTinh[3] = '0';

  if (dacTinh[0] != '0' && dacTinh[2] != '0')
    printf("Tam giac vuong can tai %c\n", dacTinh[0]);
  else if (dacTinh[1] != '0' && dacTinh[2] != '0')
    printf("Tam giac tu va can tai %c", dacTinh[1]);
  else if (dacTinh[0] != '0')
    printf("Tam giac vuong tai %c\n", dacTinh[0]);
  else if (dacTinh[1] != '0')
    printf("Tam giac tu tai %c\n", dacTinh[1]);
  else if (dacTinh[2] != '0')
    printf("Tam giac can tai %c\n", dacTinh[2]);
  else if (dacTinh[3] != '0')
    printf("Tam giac deu\n");
  else
    printf("Tam giac nhon\n");
}
void ingoc() {
      // Tinh goc tu canh
  float cosA = (canhGoc[1] * canhGoc[1] + canhGoc[0] * canhGoc[0] - canhGoc[2] * canhGoc[2]) / (2 * canhGoc[0] * canhGoc[1]);
  float cosB = (canhGoc[2] * canhGoc[2] + canhGoc[0] * canhGoc[0] - canhGoc[1] * canhGoc[1]) / (2 * canhGoc[0] * canhGoc[2]);
  float cosC = (canhGoc[2] * canhGoc[2] + canhGoc[1] * canhGoc[1] - canhGoc[0] * canhGoc[0]) / (2 * canhGoc[2] * canhGoc[1]);
  canhGoc[3] = acos(cosA) * 180 / PI;
  canhGoc[4] = acos(cosB) * 180 / PI;
  canhGoc[5] = acos(cosC) * 180 / PI;
  printf("So do goc B la: %.2f \n", canhGoc[4]);
  printf("So do goc C la: %.2f \n", canhGoc[5]);
  printf("So do goc A la: %.2f \n", canhGoc[3]);
}
void trungtuyen_tamgiac()
{
  // Tinh do dai trung tuyen
  trungTuyen[0] = sqrt((canhGoc[1] * canhGoc[1] + canhGoc[0] * canhGoc[0]) / 2 - (canhGoc[2] * canhGoc[2]) / 4);
  trungTuyen[1] = sqrt((canhGoc[2] * canhGoc[2] + canhGoc[0] * canhGoc[0]) / 2 - (canhGoc[1] * canhGoc[1]) / 4);
  trungTuyen[2] = sqrt((canhGoc[1] * canhGoc[1] + canhGoc[2] * canhGoc[2]) / 2 - (canhGoc[0] * canhGoc[0]) / 4);
  printf("Do dai trung tuyen tu dinh A la: %.2f \n", trungTuyen[0]);
  printf("Do dai trung tuyen tu dinh B la: %.2f\n", trungTuyen[1]);
  printf("Do dai trung tuyen tu dinh C la: %.2f\n", trungTuyen[2]);
}
void tam_tamgiac()
{
  // Tinh toa do trong tam
  float g = (toaDo[0] + toaDo[2] + toaDo[4]) / 3;
  float h = (toaDo[1] + toaDo[3] + toaDo[5]) / 3;

  printf(cach "4. Toa do diem dac biet cua tam giac ABC:\n");
  printf("Toa do trong tam: [%.2f, %.2f]", g, h);
}

void incanh()
{
  printf(cach);
  printf("1. Cac so do co ban cua tam giac:\n");
  printf("Chieu dai cua canh AB la: %.2f \n", canhGoc[0]);
  printf("Chieu dai cua canh BC la: %.2f \n", canhGoc[2]);
  printf("Chieu dai cua canh AC la: %.2f \n", canhGoc[1]);
}





void inketqua()
{
  incanh();
  ingoc();
  xet_tamgiac();
  dientich_tamgiac();
  duongcao_tamgiac();
  trungtuyen_tamgiac();
  tam_tamgiac();
}
int check_tamgiac()
{
  tinhcanh();
  if (canhGoc[2] + canhGoc[1] > canhGoc[0] && canhGoc[2] + canhGoc[0] > canhGoc[1] && canhGoc[1] + canhGoc[0] > canhGoc[2])
  {
    return 1;
  }
  return 0;
}
int main()
{
  do
  {
    printf(cach);
    printf(htd " cua diem A - Ax: ");
    scanf("%f", &toaDo[0]);
    printf(htd " cua diem A - Ay: ");
    scanf("%f", &toaDo[1]);
    printf(htd " cua diem B - Bx: ");
    scanf("%f", &toaDo[2]);
    printf(htd " cua diem B - By: ");
    scanf("%f", &toaDo[3]);
    printf(htd " cua diem C - Cx: ");
    scanf("%f", &toaDo[4]);
    printf(htd " cua diem C - Cy: ");
    scanf("%f", &toaDo[5]);
    printf(cach);
    printf("Toa do diem A da nhap: A(%.2f; %.2f) \n", toaDo[0], toaDo[1]);
    printf("Toa do diem B da nhap: B(%.2f; %.2f) \n", toaDo[2], toaDo[3]);
    printf("Toa do diem C da nhap: C(%.2f; %.2f) \n", toaDo[4], toaDo[5]);
    if (!(check_tamgiac(toaDo[0], toaDo[1], toaDo[2], toaDo[3], toaDo[4], toaDo[5]))) // Neu gia tri tinh duoc cua cac toa do khong bang ham check_tamgiac => khong phai 1 tam giac
    {
      printf(cach "Toa do 3 diem da nhap khong hop thanh 1 tam giac \nXin vui long nhap lai toa do \n"); // Lap lai cac buoc den khi duoc 1 tam giac
    }
  } while (!(check_tamgiac(toaDo[0], toaDo[1], toaDo[2], toaDo[3], toaDo[4], toaDo[5])));
  printf(cach "Toa do 3 diem da nhap tao thanh 1 tam giac \n");
  inketqua(); // Ham in ket qua tu cac ham phu
}
