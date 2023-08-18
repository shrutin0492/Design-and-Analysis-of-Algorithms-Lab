#include <stdio.h>
#include <time.h>
int s = 0;
void Hanoi(int n,char beg, char aux,char end)
{
    if(n==1)
    {
        printf("\nStep %d. Move Disk %d from %c to %c",++s,n,beg,end);
        return;
    }
    Hanoi(n-1,beg,end,aux);
    printf("\nStep %d. Move Disk %d from %c to %c",++s,n,beg,end);
    Hanoi(n-1,aux,beg,end);
}
int main()
{   
    int n; 
    double clock_start,clock_end;
    printf("Enter the number of disks to be moved: ");
    scanf("%d", &n);
    clock_t start = clock();
    Hanoi(n,'A','B','C');
    clock_t end = clock();
    printf("\n\nStart time %lf",(double)start);
    printf("\nEnd time %lf",(double)end);
    printf("\nTotal time taken %lf",(double)(end-start));
    return 0;
}
