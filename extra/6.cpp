#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void c_look() {
 int queue[20], n, head, i, j, k, seek = 0, diff, temp, queue1[20], queue2[20], temp1 = 0, temp2 = 0;
 printf("Enter the initial head position\n");
 scanf("%d", & head);
 printf("Enter the size of queue request\n");
 scanf("%d", & n);
 printf("Enter the queue of disk positions to be read\n");
 for (i = 0; i < n; i++) {
   scanf("%d", & temp);
   if (temp >= head) {
     queue1[temp1] = temp;
     temp1++;
   } else {
     queue2[temp2] = temp;
     temp2++;
   }
 }
 for (i = 0; i < temp1 - 1; i++) {
   for (j = i + 1; j < temp1; j++) {
     if (queue1[i] > queue1[j]) {
       temp = queue1[i];
       queue1[i] = queue1[j];
       queue1[j] = temp;
     }
   }
 }
 for (i = 0; i < temp2 - 1; i++) {
   for (j = i + 1; j < temp2; j++) {
     if (queue2[i] > queue2[j]) {
       temp = queue2[i];
       queue2[i] = queue2[j];
       queue2[j] = temp;
     }
   }
 }
 for (i = 1, j = 0; j < temp1; i++, j++)
   queue[i] = queue1[j];
 for (j = 0; j < temp2; i++, j++)
   queue[i] = queue2[j];
 queue[0] = head;
 for (j = 0; j < n; j++) {
   diff = abs(queue[j + 1] - queue[j]);
   seek += diff;
   printf("Disk head moves from %d to %d with seek %d\n", queue[j], queue[j +
     1], diff);
 }
 printf("Total seek time is %d\n", seek);
}
void look() {
 int queue[20], n, head, i, j, k, seek = 0, diff, temp, queue1[20], queue2[20], temp1 = 0, temp2 = 0;
 printf("Enter the initial head position\n");
 scanf("%d", & head);
 printf("Enter the size of queue request\n");
 scanf("%d", & n);
 printf("Enter the queue of disk positions to be read\n");
 for (i = 1; i <= n; i++) {
   scanf("%d", & temp);
   if (temp >= head) {
     queue1[temp1] = temp;
     temp1++;
   } else {
     queue2[temp2] = temp;
     temp2++;
   }
 }
 for (i = 0; i < temp1 - 1; i++) {
   for (j = i + 1; j < temp1; j++) {
     if (queue1[i] > queue1[j]) {
       temp = queue1[i];
       queue1[i] = queue1[j];
       queue1[j] = temp;
     }
   }
 }
 for (i = 0; i < temp2 - 1; i++) {
   for (j = i + 1; j < temp2; j++) {
     if (queue2[i] < queue2[j]) {
       temp = queue2[i];
       queue2[i] = queue2[j];
       queue2[j] = temp;
     }
   }
 }
 for (i = 1, j = 0; j < temp1; i++, j++)
   queue[i] = queue1[j];
 for (j = 0; j < temp2; i++, j++)
   queue[i] = queue2[j];
 queue[0] = head;
 for (j = 0; j < n; j++) {
   diff = abs(queue[j + 1] - queue[j]);
   seek += diff;
   printf("Disk head moves from %d to %d with seek %d\n", queue[j], queue[j +
     1], diff);
 }
 printf("Total seek time is %d\n", seek);
}
int main() {
 int opt;
 while (1) {
   printf("NAME: ARSHAN AHMAD\t ROLL NO.: 18BCS075\n");
   printf("Choose an option\n1. LOOK\n2. C-LOOK\n3. EXIT\nEnter choice- ");
   scanf("%d", & opt);
   switch (opt) {
   case 1:
     look();
     break;
   case 2:
     c_look();
     break;
   case 3:
     exit(0);
   }
 }
}
