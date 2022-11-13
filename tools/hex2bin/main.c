#include <stdio.h>
#include <string.h>

int main(int argc, char* args[]) {
  if (argc != 2) {
    printf("num of args is error.\n");
    return -1;
  }

  char hex[17], bin[65] = "";
  int i = 0;

  memcpy(hex, args[1], strlen(args[1]));
  /* Input hexadecimal number from user */
  printf("Enter any hexadecimal number: %s\n", hex);
  // gets(hex);
  int oHexLen = strlen(hex);
  if (strlen(hex) < 8) {
    // format hex 16 bit
    int i;
    for (i = 8; i >= 8 - oHexLen; i--) {
      /* code */
      hex[i] = hex[i - (8 - oHexLen)];
    }
    for (; i >= 0; i--) {
      /* code */
      hex[i] = '0';
    }
  }
  printf("after format: %s\n", hex);

  /* Extract first digit and find binary of each hex digit */
  for (i = 0; hex[i] != '\0'; i++) {
    switch (hex[i]) {
      case '0':
        strcat(bin, "0000");
        break;
      case '1':
        strcat(bin, "0001");
        break;
      case '2':
        strcat(bin, "0010");
        break;
      case '3':
        strcat(bin, "0011");
        break;
      case '4':
        strcat(bin, "0100");
        break;
      case '5':
        strcat(bin, "0101");
        break;
      case '6':
        strcat(bin, "0110");
        break;
      case '7':
        strcat(bin, "0111");
        break;
      case '8':
        strcat(bin, "1000");
        break;
      case '9':
        strcat(bin, "1001");
        break;
      case 'a':
      case 'A':
        strcat(bin, "1010");
        break;
      case 'b':
      case 'B':
        strcat(bin, "1011");
        break;
      case 'c':
      case 'C':
        strcat(bin, "1100");
        break;
      case 'd':
      case 'D':
        strcat(bin, "1101");
        break;
      case 'e':
      case 'E':
        strcat(bin, "1110");
        break;
      case 'f':
      case 'F':
        strcat(bin, "1111");
        break;
      default:
        printf("Invalid hexadecimal input.");
    }
  }

  printf("Hexademial number = %s\n", hex);
  printf("Binary number = %s\n", bin);

  char a[8];
  char b[6];
  char c[6];
  char d[4];
  char e[6];
  char f[8];
  memcpy(a, bin, 7);       // 31-25
  memcpy(b, bin + 7, 5);   // 24-20
  memcpy(c, bin + 12, 5);  // 19-15
  memcpy(d, bin + 17, 3);  // 14-12
  memcpy(e, bin + 20, 5);  // 11-7
  memcpy(f, bin + 25, 7);  // 6-0

  printf("%-10s %-10s %-10s %-10s %-10s %-10s\n", "31-25", "24-20(rs2)", "19-15(rs1)",
         "14-12", "11-7(Rd)", "6-0");
  printf("%-10s %-10s %-10s %-10s %-10s %-10s\n", a, b, c, d, e, f);

  return 0;
}
