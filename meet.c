/* meet */

[14:37] SAKETH VENKAT NISHANTH SHARMA RACHAKONDA
    yes
​[14:38] Naval Surange
    ok 
​[14:46] Eshika Khandelwal
    in chapter 8 q4 what do they mean by use expression int (size of (a)/size of (a[0])) for array length?
​[14:49] Shashwat Singh
    

 (int)(sizeof(a)/sizeof(a[0])) gives number of elements, you just need to use that somewhere in the program. Maybe in the loop
(1 liked)​[14:49] SAKETH VENKAT NISHANTH SHARMA RACHAKONDA
    You get array size that way
(1 liked)​[14:49] SAKETH VENKAT NISHANTH SHARMA RACHAKONDA
    size of gives space of array a
(1 liked)​[14:50] SAKETH VENKAT NISHANTH SHARMA RACHAKONDA
    and size of (a[0]) give space taken by an element
(1 liked)​[14:50] SAKETH VENKAT NISHANTH SHARMA RACHAKONDA
    hence the size of array when divided
(1 liked)​[14:52] Eshika Khandelwal
    Thanks:)
​[16:55] Sujit Mandava
    

//Calculating the value of pi//
 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 
intmain()
{​​​​​​​​
srand((float)time(NULL));
 
inthist[5] = {​​​​​​​​0}​​​​​​​​;
intface[5] = {​​​​​​​​1000, 10000, 100000, 1000000, 10000000}​​​​​​​​;
floatx, y, dist;
intN;
doubleext1, ext2; //Excess variables needed for modf function
floatp1 = 0, p2 = 0;
floatpi;
inti = 0;
 
for (N = 1000; N < 10000000; 10 * N)
 {​​​​​​​​
for (intj = 0; j < N; j++)
 {​​​​​​​​
x = modf(rand(), &ext1);
y = modf(rand(), &ext2);
 
dist = (x * x) + (y * y);
 
if (dist <= 1)
 {​​​​​​​​
p1++;
 }​​​​​​​​
 
p2++;
 }​​​​​​​​
 
pi = (p1 / p2) * 4;
hist[i] = pi;
i++;
 }​​​​​​​​
for (inti = 0; i < 5; i++)
 {​​​​​​​​
printf("%d\t", face[i]);
 }​​​​​​​​
printf("\n");
for (inti = 0; i < 5; i++)
 {​​​​​​​​
printf("%d\t", hist[i]);
 }​​​​​​​​
printf("\n");
}​​​​​​​​

<https://teams.microsoft.com/l/message/19:fee757fbeedd434eb6199f4e76c461a3@thread.tacv2/1603184850213?tenantId=031a3bbc-cf7c-4e2b-96ec-867555540a1c&amp;groupId=3af9a7ac-04a6-4d52-a1e9-9fd8b4e68a2d&amp;parentMessageId=1603184335246&amp;teamName=CP20A Group 7&amp;channelName=General&amp;createdTime=1603184850213>