#include "stdio.h"
#include "conio.h"
#include "graphics.h"
void main() {
 int gd = DETECT, gm;
 int y = 0, x = 10, m[20], k[20], n, a[20], i;
 float b[20];
 initgraph(&gd, &gm, "c:\tc\bgi");
 printf("Generating the Graphsnn");
 printf("nEnter the no. of inputst");
 scanf("%d", &n);
 printf("nEnter the input sizes and corresponding time takenn");
 for (i = 0; i < n; i++) {
  printf("nEnter input sizet");
  scanf("%d", &a[i]);
  
 }
 cleardevice();
 
 getch();
}