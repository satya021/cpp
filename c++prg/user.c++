#include<stdio.h>

#include<conio.h> #include<graphics.h> {

#include<math.h> void main()

float m,x1,y1,x2,y2;

int x,y:

int gdriver=DETECT,gmode,gerror

clrscr();

printf(" PROGRAM FOR THE LINE INTERCEPT

printf("Enter the value of 1^ prime prime ;

scanf("%f",&x1); printf("Enter the value of y1^ prime prime )

scanf("%f" 8y1)

printf("Enter the value of x2^ prime prime ) ;

scanf("%f", 82) ;

printf("Enter the value of y2^ prime prime ) ; scanf( "%f",8y2);

initgraph(&gdriver,&gmode,"C:\TC\BGI"); m=(y2-y1)/(x2-*1) for(x=1;x<=x2; x++)

{

y=m^ * (x-x1)+y^ - ;

putpixel 9l * (x, y, 15)

getch();

closegraph();
}

}