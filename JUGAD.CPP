#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>

int initmouse();
void showmouseptr();
void hidemouseptr();
void getmousepos(int*,int*,int*);
union REGS i,o;


main ()
{
int c3=0,i,j,z;

int m,l,ii,k1;

int k,flag,gd = DETECT ,flag1=0, gm, status, button ,x ,y ,tempx ,tempy;

char array[50],a[5];
j1111:
int crt1=1,crt2=8,crt3=0,crt4=0,crt5=0,crt7=0;

clrscr();


j11:



  int non=0,y2,y3=0,q6199,new333=0;

  int gd1 = DETECT,gm1,left=100,top=100,right=200,bottom=200,x1= 300,y1=150,radius=50;

   initgraph(&gd1, &gm1, "C:\\TC\\BGI");
initgraph(&gd,&gm,"C:\\TC\\BGI");
//setbkcolor(3);

j1234:
crt1=1,crt2=8,crt3=0,crt4=0,crt5=0,crt7=0;
j123:


y3=0;
c3=0;
int y4=0;
if(new333!=0)
{
for(j=0;j<=1700;j++)
{



setcolor(BLACK);
rectangle(0,j,800,200);
setcolor(15);
}}
else
{
new333++;
}




setcolor(crt1);

if(crt4==0)
{
for(i=0,j=0;i<=1150,j<=1150;i++,j++)
{
line(i,0,0,j);
i+=4;
j+=4;
}

for(i=645,j=0;i>=0,j<=645;i--,j++)
{
line(i,0,645,j);
i-=4;
j+=4;
}
for(i=645,j=0;i>=0,j<=645;i--,j++)
{
line(0,i,j,645);
i-=4;
j+=4;
}


 }
//int i123=2;
j1:
/*setbkcolor(i123);
i123++;
*/
z=0;
y2=0;


	int q;

	if(crt4==1)
     {     setbkcolor(BLACK);



for(j=0;j<=1700;j++)
{



setcolor(15);
rectangle(0,j,800,200);
setcolor(15);
}

	for(q6199=490;q6199>=45;q6199--)
		    {
		    circle(407,q6199,3);

		if(q6199%2!=0)
		{

		setcolor(WHITE);
		delay(5);
		}
		if(q6199%2==0)
		{

		setcolor(WHITE);

		delay(4);
		}
		    }
		    for(q=0;q<=400;q++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    delay(1);
		    }

for(j=0;j<=500;j++)
{
circle(j,400,600);

if(j%2!=0)
{

setcolor(GREEN);
delay(2);
}
if(j%2==0)
{

setcolor(RED);
delay(2);
}

}
}



      if(crt4==0)
      {



 for(i=660;i>=460;i--)
{



setfillstyle(1,4);


	  circle(i,57+27,10);

circle(i,117+7,10);
circle(i,147+7,10);


circle(i,177+7,10);
circle(i,207+7,10);

circle(i,237+7,10);
circle(i,267+7,10);


circle(i,297+7,10);
circle(i,327+7,10);

circle(i,357+7,10);

	   circle(i,394,10);

	   circle(i,424,10);






if(i%2!=0)
{

setcolor(BLACK);

}
if(i%2==0)
{

setcolor(BLACK);

}


}





}

for(i=660;i>=460;i--)
{



setfillstyle(1,4);

circle(i,80,10);

circle(i,120,10);
circle(i,150,10);


circle(i,180,10);
circle(i,210,10);

circle(i,240,10);
circle(i,270,10);


circle(i,300,10);
circle(i,330,10);

circle(i,360,10);

	   circle(i,390,10);


	     circle(i,420,10);






if(i%2!=0)
{
if(crt4==1)
setcolor(15);
else
setcolor(crt1);

}
if(i%2==0)
{
if(crt4==1)
setcolor(15);
else
setcolor(crt2);

}








}









 if(c3==0){

	 c3++;

for(j=0;j<=400;j++)
{
circle(j,44,2);

if(j%2!=0)
{

setcolor(crt1);
delay(1);
}
if(j%2==0)
{

setcolor(crt2);
delay(1);
}

}
setcolor(crt1);







for(j=10,i=110;j<=35,i<=140;j++,i++)
{

circle(120,j,2);
circle(130,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}
for(i=110;i<=140;i++)
{
circle(i,17,2);
circle(i,30,2);
if(i%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=150;j<=165;j++)
{
circle(j,10,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}
for(j=10;j<=38;j++)
{
circle(157.5,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}
for(j=150;j<=290;j++)
{
circle(j,38,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=38;j>=10;j--)
{
circle(290,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=290;j>=275;j--)
{
circle(j,10,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}


for(j=32;j>=10;j--)
{
circle(175,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=175;j<=190;j++)
{
circle(j,10,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}
for(j=10;j<=32;j++)
{
circle(190,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=215;j>=200;j--)
{
circle(j,10,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=32;j>=10;j--)
{
circle(200,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=200;j<=215;j++)
{
circle(j,32,2);

if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=10;j<=32;j++)
{
circle(225,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=225;j<=240;j++)
{
circle(j,32,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=10;j<=32;j++)
{
circle(250,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=250;j<=265;j++)
{
circle(j,32,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=32;j>=10;j--)
{
circle(265,j,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}

for(j=300,i=300;j<=317,i<=317;j++,i++)
{
circle(j,10,2);
circle(i,24,2);
circle(j,38,2);
if(j%2==0)
{
setcolor(crt1);
delay(1);
}
else
{
setcolor(crt2);
delay(1);
}
}


}




for(i=0;i<=200;i++)
{



setfillstyle(1,4);


circle(i,105,15);

     circle(i,205,15);

		 circle(i,305,15);

			   circle(i,405,15);

if(i%2!=0)
{

setcolor(BLACK);
delay(1);
}
if(i%2==0)
{

setcolor(BLACK);
delay(1);
}

}

for(i=0;i<=200;i++)
{



setfillstyle(1,4);


circle(i,100,15);







if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}

}
 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"PROGRAMS");
  outtextxy(40,93, a);











for(i=0;i<=200;i++)
{
circle(i,200,15);
if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}


}

  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"SYNTAX");
  outtextxy(40,193, a);
for(k1=0;k1<=200;k1++)
{
circle(k1,300,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}


 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"  Q/A  ");
  outtextxy(40,293, a);

for(k1=0;k1<=200;k1++)
{
circle(k1,400,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}



 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"ABOUT US");
  outtextxy(40,393, a);

for(m=560,l=560;m>=490,l<=590;m--,l++)
{
circle(m,15,10);
circle(l,15,10);
if(m%2!=0&&l%2!=0)
{

setcolor(crt1);
delay(1);
}
if(m%2==0&&l%2==0)
{

setcolor(crt2);
delay(1);
}

}

 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(WHITE);

   sprintf(a," Theme ");
  outtextxy(533,12, a);

for(m=560,l=560;m>=490,l<=590;m--,l++)
{
circle(m,470,10);
circle(l,470,10);
if(m%2!=0&&l%2!=0)
{

setcolor(crt1);
delay(1);
}
if(m%2==0&&l%2==0)
{

setcolor(crt2);
delay(1);
}

}
  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(WHITE);

   sprintf(a," Back ");
  outtextxy(535,468, a);



  textcolor(5);
settextstyle(DEFAULT_FONT, 0, 2);

status = initmouse();

if(status==0)
printf("Mouse support is not avilable : \n");
else
{

showmouseptr();
getmousepos(&button,&x,&y);
tempx =x;
tempy =y;

k=0;

while(!kbhit())
{



getmousepos(&button,&x,&y);




if(x==1&&y>=470&&y<=490)
{
   goto j123;
}

if(x==1&&y>=10&&y<=30&&crt4==1)
{
      cctv:
     goto j1234;

     }
if(x==1&&y>=10&&y<=30&&crt4==0)
{          cchd:
     crt1=5;
     crt2=6;
     crt4=1;
     crt3=15;
     goto j123;




 /*   for(j=700;j>=530;j--)
{
     circle(320,j,80);
circle(180,j,80);
circle(40,j,80);

if(j%2!=0)
{

setcolor(crt2);
delay(1);
}
if(j%2==0)
{

setcolor(crt1);
delay(1);
}

}
   */ }

/*button 2 starts  */
if(button == 2 || button == 1)
{







	if((x==1&&y>=70&&y<=120&&k==0)||(x==2&&y<=120&&y>=70&&k>=0))
	{

	jp:



	 for(i=0;i<=200;i++)
	     {
	      setfillstyle(1,4);
	      circle(i,100,15);
		if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(i%2==0)
	     {

		setcolor(crt2);
		delay(1);
	     }

       }
	    settextjustify(16,20);
	    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	    setcolor(YELLOW);

	    sprintf(a,"PROGRAMS");
	    outtextxy(40,93, a);

		for(i=0;i<=200;i++)
		{
		   circle(i,200,15);
		       if(i%2!=0)
		   {

		   setcolor(crt1);
		   delay(1);
		   }
		      if(i%2==0)
	       {

		  setcolor(crt2);
		  delay(1);
	       }


		}
		/*second mahesh */
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(WHITE);

		sprintf(a,"SYNTAX");
		outtextxy(40,193, a);
		for(k1=0;k1<=200;k1++)
			{
			circle(k1,300,15);
			if(k1%2!=0)
			{

		setcolor(crt1);
		delay(1);
			}
			if(k1%2==0)
	    {

				setcolor(crt2);
			delay(1);
				}

			}


		 settextjustify(16,20);
		 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		 setcolor(WHITE);

		 sprintf(a,"  Q/A  ");
		 outtextxy(40,293, a);

		for(k1=0;k1<=200;k1++)
			{
		circle(k1,400,15);
		if(k1%2!=0)
			  {

		setcolor(crt1);
		delay(1);
			  }
		if(k1%2==0)
		{

		setcolor(crt2);
		delay(1);
		}

	}


		/*third mahesh*/
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(WHITE);

		 sprintf(a,"ABOUT US");
		outtextxy(40,393, a);





		settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"PROGRAMS");
		 outtextxy(40,93, a);

	     k++;





	/*sub menu*/
       for(i=650,j=640;i>=460,j>=460;i--,j--)
		{
			if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
			if(i%2==0)
			{

		setcolor(crt2);
		delay(1);
			}



		setfillstyle(1,4);




			circle(i,80,10);

		circle(i,120,10);


		circle(i,150,10);
		circle(i,180,10);
		circle(i,210,10);

		circle(i,240,10);
		circle(i,270,10);


		circle(i,300,10);
		circle(i,330,10);

		circle(i,360,10);

		circle(i,390,10);

			circle(i,420,10);

			setcolor(YELLOW);
	circle(j,83,10);





		}



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		    sprintf(a,"PROGRAM");
		 outtextxy(500,75, a);
				 setcolor(15);


		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);
		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);

		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);
				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW+BLINK);

		     sprintf(a,"-------->>>");
		 outtextxy(500,415, a);

			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);


		   y2=1;



		}



		 /*sub-block*/

		if(x==1&&y>=120&&y<=140&&y2==1&&y3==0)
		 {


		 c31:



			settextjustify(16,20);


			//	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);




			  setcolor(YELLOW);
		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);
		 setcolor(15);
		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);

		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);
				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);









		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }





		settextjustify(16,20);
		settextstyle(10,0,1);
		  setcolor(WHITE);

		  sprintf(a,"    Armstrong");
		 outtextxy(40,60, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"int main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int a,n,b=0,t;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter the no:'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&n);");

		 outtextxy(20,205, a);



				  sprintf(a,"t=n;");
		 outtextxy(20,220, a);


		  sprintf(a,"while(n>0) {");
		 outtextxy(20,235, a);
		  sprintf(a,"a=n%10;");
		 outtextxy(20,250, a);

		  sprintf(a,"b=b+a*a*a;");
		 outtextxy(20,265, a);
		  sprintf(a,"n=n/10;}");
		 outtextxy(20,280, a);

		  sprintf(a,"if(b==t) {");
		 outtextxy(20,295, a);
		  sprintf(a,"printf(''Its an Armstrong number'');}");
		 outtextxy(20,310, a);

		  sprintf(a,"else {");
		 outtextxy(20,325, a);
		  sprintf(a,"printf(''Its not an Armstrong number''); }");
		 outtextxy(20,340, a);
		  sprintf(a,"getch();");
		 outtextxy(20,355, a);
		  sprintf(a,"return 0;}");
		 outtextxy(20,370, a);

		 sprintf(a,"________________________________________________");
		 outtextxy(20,375, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,390, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter the number:   153");
		 outtextxy(20,410, a);
		  sprintf(a,"Its an Armstrong number");
		 outtextxy(20,425, a);




		 }














			if((x==1&&y>=135&&y<=155&&y2==1&&y3==1&&y4==0)||(x==1&&y>=450&&y<=480&&y2==1&&y3==1&&y4==0))
		 {
			  y4=1;

		 c311:






		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }


					for(m=560,l=560;m>=490,l<=590;m--,l++)
{
circle(m-200,450,10);
circle(l-200,450,10);
if(m%2!=0&&l%2!=0)
{

setcolor(crt1);
delay(1);
}
if(m%2==0&&l%2==0)
{

setcolor(crt1);
delay(1);
}

}
  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(YELLOW);

   sprintf(a," -->> ");
  outtextxy(335,448, a);



		settextjustify(16,20);
		settextstyle(10,0,1);
		  setcolor(WHITE);

		  sprintf(a,"Add complex no.");
		 outtextxy(40,60, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include <stdio.h>");
		 outtextxy(20,110, a);

		     sprintf(a,"#include <conio.h>");
		 outtextxy(20,125, a);
				  sprintf(a,"#include <stdlib.h>");
		 outtextxy(20,140, a);

		  sprintf(a,"srtuct complex {");
		 outtextxy(20,155, a);
		  sprintf(a,"int real,img; };");
		 outtextxy(20,170, a);

		     sprintf(a,"int main() {");
		 outtextxy(20,185, a);
		 sprintf(a,"            srtuct complex a,b,c;");
		 outtextxy(20,200, a);


		  sprintf(a,"printf(''enter a and b'');");
		 outtextxy(60,215, a);
		  sprintf(a,"printf(''\ n a='');");
		 outtextxy(60,230, a);

		  sprintf(a,"scanf(''% d'',&a.real);");
		 outtextxy(60,245, a);
		  sprintf(a,"printf(''d='');");
		 outtextxy(60,260, a);

		  sprintf(a,"scanf(''% d'',&a.img);");
		 outtextxy(60,275, a);
		  sprintf(a,"printf(''enter c and d'');}");
		 outtextxy(60,290, a);
		 sprintf(a,"printf(''\ n c='');");
		 outtextxy(60,305, a);
		  sprintf(a,"scanf(''% d'',&b.real);");
		 outtextxy(60,320, a);
		  sprintf(a,"printf(''d='');");
		 outtextxy(60,335, a);
		  sprintf(a,"scanf(''% d'',&b.img);");
		 outtextxy(60,350, a);

		 sprintf(a,"c.real=a.real+b.real;");
		 outtextxy(60,365, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"c.img=a.img=b.img");
		 outtextxy(60,380, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"if(c.img>=0)");
		 outtextxy(60,395, a);
		  sprintf(a,"printf(''sum ='/,d='/,di'',c.real,c.img);");
		 outtextxy(60,410, a);
		 }





			if(x==1&&y>=450&&y<=480&&y2==1&&y3==1&&y4==1)
		 {
			  y4=0;

		 c3111:






		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt1);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }


					for(m=560,l=560;m>=490,l<=590;m--,l++)
{
circle(m-200,450,10);
circle(l-200,450,10);
if(m%2!=0&&l%2!=0)
{

setcolor(crt1);
delay(1);
}
if(m%2==0&&l%2==0)
{

setcolor(crt2);
delay(1);
}

}
  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(YELLOW);

   sprintf(a," <<-- ");
  outtextxy(335,448, a);



		settextjustify(16,20);
		settextstyle(10,0,1);
		  setcolor(WHITE);

		  sprintf(a,"Add complex no.");
		 outtextxy(40,60, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"else");
		 outtextxy(60,110, a);

		     sprintf(a,"printf(''sum ='/,d='/,di'',c.real,c.img);");
		 outtextxy(60,125, a);
				  sprintf(a,"getch();");
		 outtextxy(60,140, a);

		  sprintf(a,"return 0;");
		 outtextxy(60,155, a);
		  sprintf(a,"}");
		 outtextxy(60,170, a);

		     sprintf(a,"___________________________________________");
		 outtextxy(20,185, a);
		 setcolor(YELLOW);
		 sprintf(a,"Output:");
		 outtextxy(20,200, a);

		 setcolor(15);
		  sprintf(a,"Enter a and b");
		 outtextxy(60,215, a);
		  sprintf(a,"a=100");
		 outtextxy(60,230, a);

		  sprintf(a,"1");
		 outtextxy(60,245, a);
		  sprintf(a,"b=12");
		 outtextxy(60,260, a);

		  sprintf(a,"Enter c and d");
		 outtextxy(60,275, a);
		  sprintf(a,"c=12");
		 outtextxy(60,290, a);
		 sprintf(a,"a=1");
		 outtextxy(60,305, a);
		  sprintf(a,"sum=112+13i");
		 outtextxy(60,320, a);

		 }














		 if(x==1&&y>=150&&y<=160&&y2==1&&y3==0)
		 {   c32:




			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);

		   setcolor(YELLOW);

		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);
				 setcolor(15);
		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);
				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);



		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }






		    settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(15);

		  sprintf(a,"        Fibonacci");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"void main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int a,b,c,i,n;");
		 outtextxy(20,175, a);
		  sprintf(a,"a=0");
		 outtextxy(20,190, a);

		     sprintf(a,"b=1");

		 outtextxy(20,205, a);



				  sprintf(a,"printf(''Enter the no to define the length);");
		 outtextxy(20,220, a);


		  sprintf(a,"scanf('' `/,d'',&n);");
		 outtextxy(20,235, a);
		  sprintf(a,"printf(''The series is: '');");
		 outtextxy(20,250, a);

		  sprintf(a,"printf('' `/,3d`/,3d'',a,b);");
		 outtextxy(20,265, a);
		  sprintf(a,"for(i=0;i<n;i++){");
		 outtextxy(20,280, a);

		  sprintf(a,"c=a+b;");
		 outtextxy(20,295, a);
		  sprintf(a,"a=b;");
		 outtextxy(20,310, a);

		  sprintf(a,"b=c");
		 outtextxy(20,325, a);
		  sprintf(a,"printf('' `/,d '',c); }");
		 outtextxy(20,340, a);
		  sprintf(a,"getch();");
		 outtextxy(20,355, a);


		 sprintf(a,"________________________________________________");
		 outtextxy(20,360, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,375, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter a number to define the length");
		 outtextxy(20,390, a);
		  sprintf(a,"The series is :        ");
		 outtextxy(20,405, a);
		  sprintf(a,"0   1   1   2   3");
		 outtextxy(20,430,a);

		 }




















			 if(x==1&&y>=105&&y<=125&&y2==1&&y3==1)
		 {   c321:






		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }






		    settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"Vowel or not");
		 outtextxy(60,75, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include <stdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"main() {");
		 outtextxy(20,145, a);
				  sprintf(a,"char ch;");
		 outtextxy(60,160, a);

		  sprintf(a,"printf(''Enter a character'')");
		 outtextxy(60,175, a);
		  sprintf(a,"scanf('''/, c'',&ch);");
		 outtextxy(60,190, a);

		     sprintf(a,"if(ch==\'a\'||ch==\'A\'||ch==\'e\')");

		 outtextxy(60,205, a);



				  sprintf(a,"||ch==\'E\'||ch==\'i\'||ch==\'I\'");
		 outtextxy(60,220, a);


		  sprintf(a,"||ch=='\o\'||ch=='\O\'||ch==\'u\'||ch=='\U\')");
		 outtextxy(60,235, a);
		  sprintf(a,"printf('' '/,c=vowel '',ch);");
		 outtextxy(60,250, a);
		  sprintf(a,"else");
		  outtextxy(60,265, a);
		  sprintf(a,"printf('' `/,3c is not vowel'',ch);");
		 outtextxy(60,280, a);
		  sprintf(a,"return 0;");
		 outtextxy(60,295, a);

		  sprintf(a,"}");
		 outtextxy(60,305, a);
		  sprintf(a,"_______________________________________");
		 outtextxy(0,315, a);
		 setcolor(YELLOW);
		  sprintf(a,"Output :");
		 outtextxy(20,330, a);
		  setcolor(15);
		   sprintf(a,"Enter a character");
		 outtextxy(20,345, a);
		  sprintf(a,"w");
		 outtextxy(20,360, a);
		  sprintf(a,"w is not a vowel");
		 outtextxy(20,375,a);

		 }










			      /*jaldi karna hai n beeeee........27 - 3.52am*/


				if(x==1&&y>=170&&y<=180&&y2==1&&y3==0)
		 {  c33:








			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);

		  setcolor(YELLOW);

		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);

		  setcolor(15);
				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);



		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }




		    settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(15);

		  sprintf(a,"        Factorial");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"long int factorial(int n)");
		 outtextxy(20,145, a);
				  sprintf(a,"int main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int n;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter the no:'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&n);");

		 outtextxy(20,205, a);

				  //aa mushkile tu aa...sar pe kato ke taj saja....

				  sprintf(a,"Factorial of `/,d is `/,d,n,factorial(n)");
		 outtextxy(20,220, a);


		  sprintf(a,"getch(); }");
		 outtextxy(20,235, a);
		  sprintf(a,"long int factorial(int n) {");
		 outtextxy(20,250, a);

		  sprintf(a,"if (n<=1) {");
		 outtextxy(20,265, a);
		  sprintf(a,"return (1) }");
		 outtextxy(20,280, a);

		  sprintf(a,"else {");
		 outtextxy(20,295, a);
		  sprintf(a,"n=n*factorial(n-1);");
		 outtextxy(20,310, a);

		  sprintf(a,"return(n); } }");
		 outtextxy(20,325, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,340, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,355, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter the number:   3");
		 outtextxy(20,370, a);
		  sprintf(a,"Factorial of 3 is 6 number");
		 outtextxy(20,385, a);



		 }








			if(x==2&&y>=370&&y<=420)
		 {  cccc:










		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0;q<=650;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,450);
		 //   line(w,70,w,890);
		    delay(1);
		    }/*
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }
		    */



		    settextjustify(16,100);
		settextstyle(1,0,3);

		// rectangle(30,80,600,120);
		  setcolor(0);
		  for(q=50;q<=620;q++)
		  {
		  line(q,100,q,140);
		  }
		  setcolor(10);
		  for(q=30;q<=600;q++)
		  {
		  line(q,80,q,120);
		  }
		  setcolor(4);

		 sprintf(a,"    J D College of Engineering & Management");
		 outtextxy(20,85, a);
		 settextjustify(16,100);
		settextstyle(6,HORIZ_DIR,3);
		  setcolor(15);

		  sprintf(a,"     ");
		 outtextxy(20,130, a);
		settextstyle(1,0,1.5);
		      setcolor(0);
		  for(q=240;q<=410;q++)
		  {
		  line(q,180,q,205);
		  }
		  setcolor(10);
		  for(q=225;q<=395;q++)
		  {
		  line(q,165,q,190);
		  }
		setcolor(4);
		     sprintf(a,"                         PRESENTED BY ");
		 outtextxy(20,165, a);

		setcolor(10);
				  sprintf(a,"              Mahesh Kariya        Ratan Hiwale");
		 outtextxy(20,220, a);

				  sprintf(a,"              Ashish Talankar      Sachin Pawar");
		 outtextxy(20,250, a);
		  sprintf(a,"");
		 outtextxy(20,190, a);
		  setcolor(0);
		  for(q=260;q<=385;q++)
		  {
		  line(q,315,q,340);
		  }
		  setcolor(10);
		  for(q=245;q<=370;q++)
		  {
		  line(q,300,q,325);
		  }
		     setcolor(4);
		     sprintf(a,"                           GUIDED BY ");

		 outtextxy(20,300, a);
				setcolor(0);
		  for(q=75;q<=245;q++)
		  {
		  line(q,370,q,395);
		  }
		  setcolor(10);
		  for(q=60;q<=230;q++)
		  {
		  line(q,355,q,380);
		  }
				  //aa mushkile tu aa...sar pe kato ke taj saja....
			setcolor(4);
				  sprintf(a,"      Prof.S.V.Sonekar");
		 outtextxy(20,355, a);

			setcolor(0);
		  for(q=405;q<=585;q++)
		  {
		  line(q,370,q,395);
		  }
		  setcolor(10);
		  for(q=390;q<=570;q++)
		  {
		  line(q,355,q,380);
		  }
			 setcolor(4);
		  sprintf(a,"                 Prof.Kemal Koche");
		 outtextxy(250,355, a);
	       /*	  sprintf(a,"");
		 outtextxy(20,250, a);

		  sprintf(a,"");
		 outtextxy(20,265, a);
		  sprintf(a,"");
		 outtextxy(20,280, a);

		  sprintf(a,"");
		 outtextxy(20,295, a);
		  sprintf(a,"");
		 outtextxy(20,310, a);

		  sprintf(a,"");
		 outtextxy(20,325, a);
		  sprintf(a,"");
		 outtextxy(20,340, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


		  sprintf(a,"else {");
		 outtextxy(20,355, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"flag=0");
		 outtextxy(20,370, a);
		  sprintf(a,"printf(''Enter binary no. '');");
		 outtextxy(20,385, a);

		 sprintf(a,"break; } }");
		 outtextxy(20,400, a);
		  sprintf(a,"if(flag==1) {");
		 outtextxy(20,415, a);
		 sprintf(a,"printf(''the binary no is='/,d \ n'',bnum);");
		 outtextxy(20,430, a);

		 */


		 }



		if(x==1&&y>=210&&y<=230&&y2==1&&y3==0)
		 {   c34:



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);
		      setcolor(YELLOW);

				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  setcolor(15);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);








		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }



		    settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Leap Year");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"int main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int year;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter a year to check'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&year);");

		 outtextxy(20,205, a);



				  sprintf(a,"if(year%400==0)");
		 outtextxy(20,220, a);


		  sprintf(a,"printf('' `/,d is leap year'',year);");
		 outtextxy(20,235, a);
		  sprintf(a,"else if(year%100==0)");
		 outtextxy(20,250, a);

		  sprintf(a,"printf('' `/,d is not a leap year'',year);");
		 outtextxy(20,265, a);
		  sprintf(a,"else if(year%4==0)");
		 outtextxy(20,280, a);

		  sprintf(a,"printf('' `/,d is a leap year'',year);");
		 outtextxy(20,295, a);
		  sprintf(a,"else");
		 outtextxy(20,310, a);

		  sprintf(a,"printf('' `/,d is not a leap year'',year)");
		 outtextxy(20,325, a);
		  sprintf(a,"return 0;");
		 outtextxy(20,340, a);
		  sprintf(a,"}");
		 outtextxy(20,355, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,360, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,375, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter a year to check");
		 outtextxy(20,390, a);
		  sprintf(a,"2022");
		 outtextxy(20,405, a);

		 sprintf(a,"2022 is not a leap year");
		 outtextxy(20,420,a);

		 }






		    //mahol hai bhaiiiiii.....chage karna padta ab sab...






			if(x==1&&y>=230&&y<=240&&y2==1&&y3==0)
		 {  c35:







			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);
		     setcolor(YELLOW);


		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);


		  setcolor(15);



		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);



		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }



		    settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Pattern 1");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"int main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int n,c,k;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter the no of rows'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&n);");

		 outtextxy(20,205, a);



				  sprintf(a,"for(c=1;k<=c;k++) {");
		 outtextxy(20,220, a);


		  sprintf(a,"for(k=1;k<=c;k++)");
		 outtextxy(20,235, a);
		  sprintf(a,"printf(''*'');");
		 outtextxy(20,250, a);

		  sprintf(a,"printf('' \ n'');");
		 outtextxy(20,265, a);
		  sprintf(a,"}");
		 outtextxy(20,280, a);

		  sprintf(a,"return 0;");
		 outtextxy(20,295, a);
		  sprintf(a,"}");
		 outtextxy(20,310, a);

		 sprintf(a,"________________________________________________");
		 outtextxy(20,315, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,330, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter the no of rows  6");

		 outtextxy(20,355, a);


		  sprintf(a,"*");
		 outtextxy(20,395, a);


		  sprintf(a,"**");
		 outtextxy(20,405, a);


		  sprintf(a,"***");
		 outtextxy(20,415, a);

		 outtextxy(20,425, a);
		  sprintf(a,"****");
		 outtextxy(20,435, a);
		  sprintf(a,"*****");
		 outtextxy(20,445, a);
		  sprintf(a,"******");
		 outtextxy(20,455, a);




		 }



		if(x==1&&y>=270&&y<=290&&y2==1&&y3==0)
		 {   c36:









			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);



		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);

		     setcolor(YELLOW);




		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);


		  setcolor(15);
		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);








		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Pattern 2");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int n,c,k,space,count=1;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter the no of rows'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&n);");

		 outtextxy(20,205, a);

		    sprintf(a,"space=n");
		 outtextxy(20,220,a);
				  sprintf(a,"for(c=1;k<space;c++) {");
		 outtextxy(20,235, a);


		  sprintf(a,"for(k=1;k<space;k++)");
		 outtextxy(20,250, a);
		  sprintf(a,"printf('' '');");
		 outtextxy(20,265, a);

		  sprintf(a,"for(k=1;k<=c;k++ {)");
		 outtextxy(20,280, a);
		  sprintf(a,"printf(''*'');");
		 outtextxy(20,295, a);

		  sprintf(a,"if(c>1&&count<c) {");
		 outtextxy(20,305, a);
		  sprintf(a,"printf(''A'')");
		 outtextxy(20,320, a);
		  sprintf(a,"count++; } }");
		 outtextxy(20,335, a);
		  sprintf(a,"printf(''\ n'')");
		 outtextxy(20,350, a);
		  sprintf(a,"space--;");
		 outtextxy(20,365, a);
		  sprintf(a,"count=1 }");
		 outtextxy(20,380, a);
		  sprintf(a,"return 0; }");
		 outtextxy(20,395, a);

		 sprintf(a,"________________________________________________");
		 outtextxy(20,405, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,420, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter the no of rows  4");

		 outtextxy(20,435, a);


		  sprintf(a,"    *");
		 outtextxy(220,420, a);


		  sprintf(a,"   *A*");
		 outtextxy(220,435, a);


		  sprintf(a,"  *A*A*");
		 outtextxy(220,450, a);


		  sprintf(a," *A*A*A*");
		 outtextxy(220,465, a);




		 }











			      /*jaldi karna hai n beeeee........27 - 3.52am*/


				if(x==1&&y>=300&&y<=320&&y2==1&&y3==0)
		 {  c37:






			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);



		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);






		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     setcolor(YELLOW);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);

		  setcolor(15);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);





		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }






		       settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Even/Odd");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);
				  sprintf(a,"main() {");
		 outtextxy(20,145, a);

		  sprintf(a,"int n;");
		 outtextxy(20,160, a);
		  sprintf(a,"printf(''Enter an integer'');");
		 outtextxy(20,175, a);

		     sprintf(a,"scanf('' `/,d '',&year);");

		 outtextxy(20,190, a);



				  sprintf(a,"if((n/2)*2==n)");
		 outtextxy(20,205, a);


		  sprintf(a,"printf(''Even'');");
		 outtextxy(20,220, a);
		  sprintf(a,"else ");
		 outtextxy(20,235, a);

		  sprintf(a,"printf(''Odd'');");
		 outtextxy(20,250, a);
		 sprintf(a,"return 0;");
		 outtextxy(20,265, a);
		  sprintf(a,"}");
		 outtextxy(20,280, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,290, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,305, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter an integer");
		 outtextxy(20,320, a);
		  sprintf(a,"7");
		 outtextxy(20,335, a);

		 sprintf(a,"Odd");
		 outtextxy(20,350,a);




		 }



		if(x==1&&y>=330&&y<=350&&y2==1&&y3==0)
		 {   c38:






			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);



		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);






		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);



		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);


		  setcolor(YELLOW);

				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);

		  setcolor(15);
		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);











		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(crt1);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }





		       settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Reverce of no.");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);


				  sprintf(a,"int main() {");
		 outtextxy(20,145, a);

		  sprintf(a,"int n,reverce=0;");
		 outtextxy(20,160, a);
		  sprintf(a,"printf(''Enter a number to reverce'');");
		 outtextxy(20,175, a);

		     sprintf(a,"scanf('' `/,d '',&n);");

		 outtextxy(20,190, a);



				  sprintf(a,"while(n!=0)}");
		 outtextxy(20,205, a);


		  sprintf(a,"reverce=reverce*10;");
		 outtextxy(20,220, a);
		  sprintf(a,"reverce=reverce+n%10;");
		 outtextxy(20,235, a);

		  sprintf(a,"n=n/10");
		 outtextxy(20,250, a);
		  sprintf(a,"}");
		 outtextxy(20,265, a);

		  sprintf(a,"printf(''The reverce is='');");
		 outtextxy(20,280, a);
		 sprintf(a,"return 0;");
		 outtextxy(20,295, a);
		  sprintf(a,"}");
		 outtextxy(20,410, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,420, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,435, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter a number to reverce");
		 outtextxy(20,450, a);
		  sprintf(a,"345");
		 outtextxy(20,465, a);

		 sprintf(a,"Reverce is =543");
		 outtextxy(20,480,a);





		 }














			if(x==1&&y>=360&&y<=380&&y2==1&&y3==0)
		 {  c39:








			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);



		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);






		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);



		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);




				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);
		  setcolor(YELLOW);

		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);


		  setcolor(15);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);

		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }
		       settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Sum up to n");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include &ltstdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include &ltstdlib.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"int main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"int year;");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter a year to check'');");
		 outtextxy(20,190, a);

		     sprintf(a,"scanf('' `/,d '',&year);");

		 outtextxy(20,205, a);



				  sprintf(a,"if(year%400==0)");
		 outtextxy(20,220, a);


		  sprintf(a,"printf('' `/,d is leap year'',year);");
		 outtextxy(20,235, a);
		  sprintf(a,"else if(year%100==0)");
		 outtextxy(20,250, a);

		  sprintf(a,"printf('' `/,d is not a leap year'',year);");
		 outtextxy(20,265, a);
		  sprintf(a,"else if(year%4==0)");
		 outtextxy(20,280, a);

		  sprintf(a,"printf('' `/,d is a leap year'',year);");
		 outtextxy(20,295, a);
		  sprintf(a,"else");
		 outtextxy(20,310, a);

		  sprintf(a,"printf('' `/,d is not a leap year'',year)");
		 outtextxy(20,325, a);
		  sprintf(a,"return 0;");
		 outtextxy(20,340, a);
		  sprintf(a,"}");
		 outtextxy(20,355, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,360, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,375, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter a year to check");
		 outtextxy(20,390, a);
		  sprintf(a,"2022");
		 outtextxy(20,405, a);

		 sprintf(a,"2022 is not a leap year");
		 outtextxy(20,420,a);

		 }

			if(x==1&&y>=420&&y<=450&&y2==1&&y3==0)
		 {   c401:


		       for(i=650;i>=460;i--)
		{



		setfillstyle(1,4);

			circle(i,80,10);

		circle(i,120,10);


		circle(i,150,10);
		circle(i,180,10);
		circle(i,210,10);

		circle(i,240,10);
		circle(i,270,10);


		circle(i,300,10);
		circle(i,330,10);

		circle(i,360,10);

		circle(i,390,10);

			circle(i,420,10);
		if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
			if(i%2==0)
			{

		setcolor(crt2);
		delay(1);
			}



		}



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(YELLOW);
		 sprintf(a,"PROGRAMS");
		 outtextxy(500,80, a);
		  setcolor(15);

		    sprintf(a,"Add Complex No");
		 outtextxy(500,145, a);

		    sprintf(a,"Vowel Or Not");
		 outtextxy(500,115, a);

	    //	  sprintf(a,"Binary to Decimal");
	      //	 outtextxy(500,115, a);
	 //	  sprintf(a,"Celsius 2 Fahrenheit");
	  // outtextxy(500,145, a);

		     sprintf(a,"Copy String");
		 outtextxy(500,175, a);
				  sprintf(a,"File Example");
		 outtextxy(500,205, a);

		  sprintf(a,"File Operation");
		 outtextxy(500,235, a);
		  sprintf(a,"Linked List");
		 outtextxy(500,265, a);

		     sprintf(a,"Perfect No");
		 outtextxy(500,295, a);
				  sprintf(a,"Binary Search");
		 outtextxy(500,325, a);


		  sprintf(a,"Linear Search");
		 outtextxy(500,355, a);
		  sprintf(a,"Bubble Sort");
		 outtextxy(500,385, a);


			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		     sprintf(a,"<<<--------");
		 outtextxy(500,415, a);

					settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		   y2=1;
		   y3=1;





		 }








		/*ab y3==1 hai to fir se mai pagal ho gya beeee... */


			if(x==1&&y>=420&&y<=450&&y2==1&&y3==1)
		 {   c4011:


		       for(i=650;i>=460;i--)
		{



		setfillstyle(1,4);

			circle(i,80,10);

		circle(i,120,10);


		circle(i,150,10);
		circle(i,180,10);
		circle(i,210,10);

		circle(i,240,10);
		circle(i,270,10);


		circle(i,300,10);
		circle(i,330,10);

		circle(i,360,10);

		circle(i,390,10);

			circle(i,420,10);
		if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
			if(i%2==0)
			{

		setcolor(crt2);
		delay(1);
			}



		}



			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);
		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);

		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);
				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);

		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);
		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);

		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);
				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);

			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		     sprintf(a,"-------->>>");
		 outtextxy(500,415, a);
					settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);


		   y2=1;
		   y3=0;





		 }

		 /*y3==1 matlab ki dusare wale option selected h*/

		if(x==1&&y>=390&&y<=410&&y2==1&&y3==0)
		 {   c40:




			settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);



		  sprintf(a,"1. Armstrong");
		 outtextxy(500,115, a);



		  sprintf(a,"2. Fibbonanci");
		 outtextxy(500,145, a);



		     sprintf(a,"3. Factorial");
		 outtextxy(500,175, a);


				  sprintf(a,"4. Leap Year");
		 outtextxy(500,205, a);



		  sprintf(a,"5. Pattern 1");
		 outtextxy(500,235, a);






		  sprintf(a,"6. Pattern 2");
		 outtextxy(500,265, a);



		     sprintf(a,"7. Even / Odd");
		 outtextxy(500,295, a);




				  sprintf(a,"8. Reverse of No");
		 outtextxy(500,325, a);


		  sprintf(a,"9. Sum up 2 n");
		 outtextxy(500,355, a);
		  setcolor(YELLOW);


		  sprintf(a,"0. Palindrome");
		 outtextxy(500,385, a);



		  setcolor(15);



		    int q;
		    for(q=0;q<=400;q++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(407,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		       for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,70,qq,250);

		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    delay(1);
		    }






		       settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"        Palindrome");
		 outtextxy(20,85, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"#include <stdio.h>");
		 outtextxy(20,130, a);

		     sprintf(a,"#include <conio.h>");
		 outtextxy(20,145, a);
				  sprintf(a,"main() {");
		 outtextxy(20,160, a);

		  sprintf(a,"char a[100],b[100];");
		 outtextxy(20,175, a);
		  sprintf(a,"printf(''Enter the string to check'');");
		 outtextxy(20,190, a);

		     sprintf(a,"gets(a);");

		 outtextxy(20,205, a);



				  sprintf(a,"strcpy(b,a);");
		 outtextxy(20,220, a);


		  sprintf(a,"strrev(b);");
		 outtextxy(20,235, a);
		  sprintf(a,"if (strcmp(a,b)==0)");
		 outtextxy(20,250, a);

		  sprintf(a,"printf(''the string is palindrome'');");
		 outtextxy(20,265, a);
		  sprintf(a,"else");
		 outtextxy(20,280, a);

		  sprintf(a,"printf(''the string is not polindrome'');");
		 outtextxy(20,295, a);

		  sprintf(a,"return 0;");
		 outtextxy(20,320, a);
		  sprintf(a,"}");
		 outtextxy(20,335, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,350, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"Output:");
		 outtextxy(20,365, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		 sprintf(a,"Enter the string to check");
		 outtextxy(20,380, a);
		  sprintf(a,"nitin");
		 outtextxy(20,395, a);

		 sprintf(a,"the string is polindrome");
		 outtextxy(20,405,a);






		 }














		if((x==1&&y>=170&&y<=220&&k==0)||(x==2&&y>=170&&y<=220&&k>=0))
       {

       js:
		for(i=0;i<=200;i++)
		{



		setfillstyle(1,4);


		circle(i,100,15);







		if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(i%2==0)
	{

		setcolor(crt2);
		delay(1);
	}

	}
	  settextjustify(16,20);
	  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	setcolor(WHITE);

	sprintf(a,"PROGRAMS");
	 outtextxy(40,93, a);
		for(i=0;i<=200;i++)
			{
		circle(i,200,15);
		if(i%2!=0)
				{

		setcolor(crt1);
		delay(1);
				}
		if(i%2==0)
			{

		setcolor(crt2);
		delay(1);
	}


	}

		settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		  setcolor(YELLOW);

		  sprintf(a,"SYNTAX");
		 outtextxy(40,193, a);
		for(k1=0;k1<=200;k1++)
			{
		circle(k1,300,15);
		if(k1%2!=0)
				{

		setcolor(crt1);
		delay(1);
				}
		if(k1%2==0)
			{

		setcolor(crt2);
		delay(1);
			}

	}


	 settextjustify(16,20);
	   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	setcolor(WHITE);

	 sprintf(a,"  Q/A  ");
	outtextxy(40,293, a);

	for(k1=0;k1<=200;k1++)
  {
	circle(k1,400,15);
	if(k1%2!=0)
	{

	setcolor(crt1);
	delay(1);
	}
	if(k1%2==0)
	{

	setcolor(crt2);
	delay(1);
	}

  }



	settextjustify(16,20);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	 setcolor(WHITE);

	  sprintf(a,"ABOUT US");
	  outtextxy(40,393, a);






     settextjustify(16,20);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(YELLOW);

   sprintf(a,"SYNTAX");
	 outtextxy(40,193, a);





//printf(array,"Left Button clicked x =%d y=%d",x,y);
//outtext(array);

	     k++;




















	/*sub menu*/
			 for(i=650,j=640;i>=460,j>=460;i--,j--)
		{
			if(i%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
			if(i%2==0)
			{

		setcolor(crt2);
		delay(1);
			}



		setfillstyle(1,4);




			circle(i,80,10);

		circle(i,120,10);


		circle(i,150,10);
		circle(i,180,10);
		circle(i,210,10);

		circle(i,240,10);
		circle(i,270,10);


		circle(i,300,10);
		circle(i,330,10);

		circle(i,360,10);

		circle(i,390,10);

			circle(i,420,10);

			setcolor(YELLOW);
	circle(j,83,10);





		}

		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


		 setcolor(YELLOW);
		 sprintf(a," SYNTAX ");
		 outtextxy(500,75, a);
		  setcolor(15);

		  sprintf(a,"1. If Statement");
		 outtextxy(500-20,115, a);
		  sprintf(a,"2. If else statement");
		 outtextxy(500-20,145, a);

		     sprintf(a,"3. Nested if else");
		 outtextxy(500-20,175, a);
				  sprintf(a,"4. Switch statement");
		 outtextxy(500-20,205, a);

		  sprintf(a,"5. While statement");
		 outtextxy(500-20,235, a);
		  sprintf(a,"6. Do statement");
		 outtextxy(500-20,265, a);

		     sprintf(a,"7. For statement");
		 outtextxy(500-20,295, a);
				  sprintf(a,"8. Structures");
		 outtextxy(500-20,325, a);


		  sprintf(a,"9. Unions");
		 outtextxy(500-20,355, a);
		  sprintf(a,"0. Pointer");
		 outtextxy(500-20,385, a);


   y2=2;


}

 }




	if(x==1&&y>=120&&y<=140&&y2==2)
		 {


		 c41:

		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		  //  for(q=0,w=200;q<=200,w<=400;q++,w++)
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);

		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		     //  for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)

		       for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);

		 /*   line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);

		   */
		    delay(1);
		    }





		settextjustify(16,20);

		  setcolor(15);
		  line(310,120,310,160);
		//  line(250,100,250,400);
		  line(310,160,260,200);
		  line(310,160,360,200);
		  line(310,160,305,155);
		  line(310,160,315,155);

		  line(260,200,310,240);
		  line(360,200,310,240);
		  line(310,240,310,280);
		  line(310,280,305,275);
		  line(310,280,315,275);

		  rectangle(260,280,360,300);
		  line(310,300,310,340);

		  rectangle(260,340,390,360);
		  line(360,200,400,200);
		  line(400,200,400,240);

		  rectangle(330,240,430,260);
		  line(360,290,400,290);

		  line(400,260,400,290);



		  settextstyle(10,0,2);
		  sprintf(a,"     If Statement");
		 outtextxy(20,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(YELLOW);

		  sprintf(a,"The general form is ");
		 outtextxy(20,100, a);
		 setcolor(10);
		 sprintf(a,"if (test expression)");
		 outtextxy(30,125, a);
				  sprintf(a," {");
		 outtextxy(30,140, a);

		  sprintf(a,"statement-block;");
		 outtextxy(30,155, a);
		  sprintf(a,"}");
		 outtextxy(30,170, a);

		     sprintf(a,"statement-x;");
		 outtextxy(30,195, a);
		 setcolor(15);
		 sprintf(a,"test");
		 outtextxy(295,192,a);
		 sprintf(a,"expression");
		 outtextxy(272,200,a);
		 sprintf(a,"?");
		 outtextxy(310,210,a);

		 setcolor(15);
		 sprintf(a,"_____________________________");
		 outtextxy(20,205,a);
		 setcolor(10);
				  sprintf(a,"  The 'statement-block'");
		 outtextxy(40,220, a);


		  sprintf(a,"may be the single statement");
		 outtextxy(20,235, a);
		  sprintf(a,"or  a group  of statements.");
		 outtextxy(20,250, a);
		 setcolor(15);
		 sprintf(a,"False");
		 outtextxy(240,250,a);
		 setcolor(15);
		 sprintf(a,"statement");
		 outtextxy(340,242,a);
		 sprintf(a,"-block");
		 outtextxy(340,252,a);
		 setcolor(10);
		  sprintf(a,"If the  test  expression is");
		 outtextxy(20,265, a);
		  sprintf(a,"true , the  statement-block");
		 outtextxy(20,280, a);
		    setcolor(15);
		  sprintf(a,"statement-x");

		 outtextxy(269,286,a);
		 setcolor(10);
		  sprintf(a,"will be executed; otherwise");
		 outtextxy(20,295, a);
		  sprintf(a,"the statement-block will be");
		 outtextxy(20,310, a);

		  sprintf(a,"skipped  and  the execution");
		 outtextxy(20,325, a);
		  sprintf(a,"will jump to the statement-x");
		 outtextxy(20,340, a);
		 setcolor(15);
		  sprintf(a,"Next statement");
		 outtextxy(269,345,a);
		 setcolor(10);

		  sprintf(a,"Remember,when the condition");
		 outtextxy(20,355, a);
		  sprintf(a,"is true both the statement");
		 outtextxy(20,370, a);

		 sprintf(a,"-block and the statement-x");
		 outtextxy(20,385, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(10);

		  sprintf(a,"are executed in sequence.");
		 outtextxy(20,400, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


		 sprintf(a,"This is illustreted in Fig");
		 outtextxy(20,415, a);
		 setcolor(15);
		  sprintf(a,"Entry");
		 outtextxy(315,125, a);
		 sprintf(a,"True");
		 outtextxy(360,192,a);
		 setcolor(YELLOW);
		 sprintf(a,"Flowchart of If control");
		 outtextxy(250,375,a);



		 }



		if(x==1&&y>=150&&y<=160&&y2==2)
		 {   c42:

		    int q;
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		 /*   for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    */
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		      // for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		      for(qq=0;qq<=435;qq++)

		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);

		  /*  line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }


		   setcolor(15);
		  line(340,120,340,160);
		   sprintf(a,"Entry");
		  outtextxy(345,130,a);
		     sprintf(a,"test");
		  outtextxy(325,180,a);
		     sprintf(a,"expression");
		  outtextxy(300,195,a);
		     sprintf(a,"?");
		  outtextxy(335,210,a);
		      sprintf(a,"True");
		  outtextxy(265,185,a);
		     sprintf(a,"False");
		  outtextxy(390,185,a);
		    sprintf(a,"True-block");
		  outtextxy(245,260,a);
		     sprintf(a,"statement");
		  outtextxy(245,270,a);
		     sprintf(a,"False-block");
		  outtextxy(335,320,a);
		     sprintf(a,"statement");
		  outtextxy(335,330,a);
		     sprintf(a,"statement-x");
		  outtextxy(295,375,a);
		  setcolor(YELLOW);
		     sprintf(a,"Flowchart of if....else");
		  outtextxy(240,440,a);
		     setcolor(15);
		//  line(250,100,250,400);
		  line(340,160,290,200);
		  line(340,160,390,200);
		  line(340,160,335,155);
		  line(340,160,345,155);

		  line(290,200,340,240);
		  line(390,200,340,240);
		//  line(310,240,310,280);
		//  line(310,280,305,275);


		  rectangle(290,370,390,390);
		  line(340,390,340,430);
		  line(290,200,260,200);
		  line(390,200,420,200);
		  line(260,200,260,250);
		  line(420,200,420,310);
		  rectangle(240,250,340,290);
		  rectangle(330,310,430,350);
		  line(260,290,260,380);
		  line(420,350,420,380);
		  line(260,380,290,380);
		  line(420,380,390,380);

		    settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"If else statement");
		 outtextxy(50,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form is :");
		 outtextxy(20,98, a);
		 setcolor(10);
		     sprintf(a,"If (test expression)");
		 outtextxy(20,115, a);
				  sprintf(a,"{");
		 outtextxy(50,130, a);

		  sprintf(a,"True block statement(s)");
		 outtextxy(60,145, a);
		  sprintf(a,"}");
		 outtextxy(50,160, a);

		     sprintf(a,"else");

		 outtextxy(20,175, a);



		 sprintf(a,"{");
		 outtextxy(50,190, a);


		  sprintf(a,"False-Block statements");
		 outtextxy(60,205, a);
		  sprintf(a,"}");
		 outtextxy(50,220, a);

		  sprintf(a,"statement-x");
		 outtextxy(20,235, a);
		  sprintf(a,"___________________________");
		 outtextxy(20,242, a);

		  sprintf(a,"If the test expression is");
		 outtextxy(20,265, a);
		  sprintf(a,"true, then the true-block");
		 outtextxy(20,280, a);

		  sprintf(a,"statement(s), immediately ");
		 outtextxy(20,295, a);
		  sprintf(a,"following the if statements");
		 outtextxy(18,310, a);
		  sprintf(a,"are executed; otherwise,the");
		 outtextxy(18,325, a);


		 sprintf(a,"false-block statements are");
		 outtextxy(18,340, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


		  sprintf(a,"executed in either case,");
		 outtextxy(18,355, a);

		 sprintf(a,"either true-block or false");
		 outtextxy(18,370, a);
		  sprintf(a,"-block will be executed");
		 outtextxy(20,385, a);
		  sprintf(a,"not both.this is illustrated");
		 outtextxy(17,400,a);
		  sprintf(a,"in fig.");
		 outtextxy(20,415,a);

		 }











			      /*jaldi karna hai n beeeee........27 - 3.52am*/


				if(x==1&&y>=170&&y<=180&&y2==2)
		 {  c43:
		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		   // for(q=0,w=200;q<=200,w<=400;q++,w++)
		      for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);

		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		    //   for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		      for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
	      /*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }

		    setcolor(15);
		     line(48,120,25,120);


		     line(25,120,25,290);
		     line(25,290,68,290);
		     line(215,170,245,170);
		     line(245,170,245,335);
		     line(245,335,150,335);
		     line(215,230,225,230);
		     line(225,230,225,335);
		     line(190,305,210,305);
		     line(210,305,210,335);
		     line(85,150,55,150);
		     line(55,150,55,215);
		     line(55,215,108,215);
		    settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"Nested if else");
		 outtextxy(100,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form is :");
		 outtextxy(20,98, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

		 setcolor(10);
		     sprintf(a,"if  (test condition-1)");
		 outtextxy(50,115, a);
				  sprintf(a,"{");
		 outtextxy(70,130, a);

		  sprintf(a,"if  (test condition-2)");
		 outtextxy(90,145, a);
		  sprintf(a,"{");
		 outtextxy(100,160, a);

		     sprintf(a,"statement-1;");

		 outtextxy(120,165, a);



				  sprintf(a,"}");
		 outtextxy(100,180, a);


		  sprintf(a,"else");
		 outtextxy(90,195, a);
		  sprintf(a,"{");
		 outtextxy(110,210, a);

		  sprintf(a,"statement-2;");
		 outtextxy(120,225, a);
		  sprintf(a,"}");
		 outtextxy(110,240, a);

		  sprintf(a,"}");
		 outtextxy(70,255, a);
		  sprintf(a,"else");
		 outtextxy(50,270, a);

		  sprintf(a,"{");
		 outtextxy(70,285, a);
		  sprintf(a,"statement-3;");
		 outtextxy(90,300, a);
		 sprintf(a,"}");
		 outtextxy(70,315, a);
		 sprintf(a,"statement-x;");
		 outtextxy(50,330, a);
		  sprintf(a,"____________________________________________________");
		 outtextxy(20,345, a);
		  sprintf(a,"If the condition-1 is false the statement-3 will be");
		 outtextxy(20,360, a);
		  sprintf(a,"executed; otherwise it continues to perform the 2nd");
		 outtextxy(20,375, a);
		 sprintf(a,"test.If the condition-2 is true,the statement-1 will");
		 outtextxy(20,390, a);
		 sprintf(a,"be evaluated ; otherwise the statement-2 will be ");
		 outtextxy(20,405, a);

		 sprintf(a,"evaluated and then the control is transferred");
		 outtextxy(20,420, a);
		 sprintf(a,"to the statement-x.");
		 outtextxy(20,435, a);


		 }



		if(x==1&&y>=210&&y<=230&&y2==2)
		 {   c44:

		    int q;
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		  /*
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    */
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }


		      // for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		       for(qq=0;qq<=435;qq++)

		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		  /*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }

		   setcolor(15);
		  line(310-30,100,310-30,120);
		  sprintf(a,"Entry");
		  outtextxy(285,110,a);
		  sprintf(a,"Switch");
		  outtextxy(260,145,a);
		   sprintf(a,"expression");
		  outtextxy(240,158,a);
		    sprintf(a,"Expression=value-1");
		  outtextxy(290,205,a);
		     sprintf(a,"Expression=value-2");
		  outtextxy(236,285,a);
		    sprintf(a,"block1");
		  outtextxy(310,235,a);
		    sprintf(a,"block2");
		  outtextxy(310,265,a);
			    sprintf(a,"defualt");
		  outtextxy(305,305,a);
			     sprintf(a,"block");
		  outtextxy(305,315,a);
		    sprintf(a,"statement-x");
		  outtextxy(325,340,a);
			sprintf(a,"default");
		  outtextxy(236,320,a);

		  //  line(250,100,250,400);
		  line(310-30,120,260-30,160);
		  line(310-30,120,360-30,160);
		  line(310-30,120,305-30,115);
		  line(310-30,120,315-30,115);

		  line(260-30,160,310-30,200);
		  line(360-30,160,310-30,200);
		  line(310-30,200,310-30,220);
		  line(310-30,220,305-30,215);
		  line(310-30,220,315-30,215);
		  line(330,220,230,220);
		  line(330,220,330,230);
		  rectangle(300,230,360,250);
		  line(360,240,380,240);
		  line(380,240,380,265);
		  line(290,220,290,270);
		  line(290,270,300,270);
		  rectangle(300,260,360,280);
		  line(360,270,375,270);
		   circle(380,270,5);
		   rectangle(300,300,360,330);
		   line(360,315,375,315);
		   circle(380,315,5);
		   line(380,320,380,335);
		   rectangle(320,335,420,355);
		   line(380,275,380,310);
		   line(230,220,230,315);
		   line(230,315,300,315);
		   line(250,220,250,250);
		   line(270,220,270,250);
		   line(380,355,380,363);



		    settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"Switch statement");
		 outtextxy(100,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form is :");
		 outtextxy(20,100, a);
		setcolor(10);
		     sprintf(a,"switch (expression)");
		 outtextxy(20,125, a);
				  sprintf(a,"{");
		 outtextxy(30,140, a);

		  sprintf(a,"case value-1:");
		 outtextxy(40,155, a);
		  sprintf(a,"block-1");
		 outtextxy(80,170, a);

		     sprintf(a,"break;");

		 outtextxy(80,185, a);



				  sprintf(a,"case value-2:");
		 outtextxy(40,200, a);


		  sprintf(a,"block-2");
		 outtextxy(80,215, a);
		  sprintf(a,"break;");
		 outtextxy(80,230, a);

		  sprintf(a,"......");
		 outtextxy(20,245, a);
		  sprintf(a,"......");
		 outtextxy(20,260, a);

		  sprintf(a,"default:");
		 outtextxy(20,275, a);
		  sprintf(a,"default-block");
		 outtextxy(80,290, a);

		  sprintf(a,"break;");
		 outtextxy(80,305, a);
		  sprintf(a,"}");
		 outtextxy(30,320, a);
		  sprintf(a,"statement-x;");
		 outtextxy(20,335, a);
		  sprintf(a,"________________________________________________");
		 outtextxy(20,360, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


		  sprintf(a,"The switch statement tests the value of a given");
		 outtextxy(20,375, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(10);

		 sprintf(a,"variable against a list of case values and when a");
		 outtextxy(20,390, a);
		  sprintf(a,"match is found, a block of statements associated");
		 outtextxy(20,405, a);

		 sprintf(a,"with that case is executed.The selection process ");
		 outtextxy(20,420,a);
		 sprintf(a,"of switch statement is illustrated  in the  flow ");
		 outtextxy(20,435,a);
		 sprintf(a,"chart shown in Fig");
		 outtextxy(20,450,a);



		 }






		    //mahol hai bhaiiiiii.....chage karna padta ab sab...






			if(x==1&&y>=230&&y<=240&&y2==2)
		 {  c45:
		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		  //  for(q=0,w=200;q<=200,w<=400;q++,w++)
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);

		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		    //   for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		      for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		   /*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }



		    settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"While statement");
		 outtextxy(70,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The basic format is :");
		 outtextxy(20,100, a);
		 setcolor(10);
		     sprintf(a,"while (test condition)");
		 outtextxy(70,115, a);
				  sprintf(a,"{");
		 outtextxy(90,130, a);

		  sprintf(a,"body of the loop");
		 outtextxy(120,145, a);
		  sprintf(a,"}");
		 outtextxy(90,160, a);

		     sprintf(a,"___________________________________________________");

		 outtextxy(20,175, a);



				  sprintf(a,"The while is an entry-controlled loop statement.The");
		 outtextxy(20,190, a);


		  sprintf(a,"test-condition is evaluated and if the condition is");
		 outtextxy(20,205, a);
		  sprintf(a,"true, then the body of the loop is  executed. After ");
		 outtextxy(20,220, a);

		  sprintf(a,"execution  of the body , the test-condition is once ");
		 outtextxy(20,235, a);
		  sprintf(a,"again evaluated and if it is true,the body is ");
		 outtextxy(20,250, a);

		  sprintf(a,"executed once again.This process of repeated executi-");
		 outtextxy(15,265, a);
		  sprintf(a,"n of the body continues until the test-condition is");
		 outtextxy(20,280, a);

		 sprintf(a,"finally becomes false and the control is transferred");
		 outtextxy(20,295, a);
		 settextjustify(16,20);


		  sprintf(a,"out of the loop.");
		 outtextxy(20,310, a);
		 settextjustify(16,20);

		 sprintf(a,"On exit , the program continues with  the statement");

		 outtextxy(20,325, a);


		  sprintf(a,"immediately after the body of the loop.");
		 outtextxy(20,340, a);
		 sprintf(a,"___________________________________________________");
		 outtextxy(20,347,a);
		  setcolor(15);
		  sprintf(a,"Example:");
		 outtextxy(20,357, a);
		  setcolor(10);
		 sprintf(a,"=========");
		 outtextxy(80,368, a);

		  sprintf(a,"sum = 0;");
		 outtextxy(80,380, a);
		  sprintf(a,"n = 1;");
		 outtextxy(80,395, a);
		  sprintf(a,"while(n <= 10)");
		 outtextxy(80,410, a);
		  sprintf(a," {");
		 outtextxy(80,420, a);
		  sprintf(a,"    sum = sum + n * n;");
		 outtextxy(80,422, a);
		  sprintf(a,"    n = n+1;");
		 outtextxy(80,437, a);
		  sprintf(a," }");
		 outtextxy(80,448, a);
		  sprintf(a,"printf(''sum = '/, d \ n'',sum);");
		 outtextxy(80,460, a);
		 sprintf(a,"========");
		 outtextxy(80,470, a);




		 }



		if(x==1&&y>=270&&y<=290&&y2==2)
		 {   c46:

		    int q;
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		    delay(1);
		    }

			     //kya be ratan data kab dalega beeeeeeee..........hat beeeeee   3:44 am    chay bna raha hu...........


		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		  /*
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    */
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		     //  for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		      for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		/*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }



			settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"  Do statement");
		 outtextxy(70,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The simple form is:");
		 outtextxy(20,100, a);
		  setcolor(10);
		     sprintf(a,"do");
		 outtextxy(70,115, a);
				  sprintf(a," {");
		 outtextxy(70,130, a);

		  sprintf(a,"    body of the loop");
		 outtextxy(70,145, a);
		  sprintf(a," }");
		 outtextxy(70,160, a);

		     sprintf(a,"while(test condition);");

		 outtextxy(70,175, a);

		    sprintf(a,"____________________________________________________");
		 outtextxy(20,185,a);
				  sprintf(a,"  On reaching the do statement,the program proceeds");
		 outtextxy(20,200, a);


		  sprintf(a,"to  evaluate the body of the loop first. At the end");
		 outtextxy(20,215, a);
		  sprintf(a,"of the loop, the test-condition in  while statement");
		 outtextxy(20,230, a);

		  sprintf(a,"is evaluated.If the condition is true, The program");
		 outtextxy(20,245, a);
		  sprintf(a,"continues to  evaluate the  body of the loop  once");
		 outtextxy(20,260, a);

		  sprintf(a,"again.This process  continues as long as condition");
		 outtextxy(20,275, a);
		  sprintf(a,"is true.When the condition becomes false, the loop");
		 outtextxy(20,290, a);
		  sprintf(a,"will  be  terminated and  the control  goes to the");
		 outtextxy(20,305, a);
		  sprintf(a,"statement that appears immediately after the while");
		 outtextxy(20,325, a);
		  sprintf(a,"statement.");
		 outtextxy(20,340, a);
		  sprintf(a,"_____________________________________________________");
		  outtextxy(10,345,a);

		  sprintf(a,"A simple example of a do...while loop is:");
		 outtextxy(20,360, a);
		  sprintf(a,"     -----------");
		 outtextxy(20,375, a);

		 sprintf(a,"       do");
		 outtextxy(20,390, a);



		  sprintf(a,"        {");
		 outtextxy(20,405, a);

		 sprintf(a,"              printf (''Input a number \ n'');");

		 outtextxy(20,420, a);


		  sprintf(a,"        }");
		 outtextxy(20,435, a);


		  sprintf(a,"       while (number > 0);");
		 outtextxy(20,440, a);


		  sprintf(a,"       -----------");
		 outtextxy(20,455, a);







		 }











			      /*jaldi karna hai n beeeee........27 - 3.52am*/


				if(x==1&&y>=300&&y<=320&&y2==2)
		 {  c47:
		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		  //  for(q=0,w=200;q<=200,w<=400;q++,w++)

		     for(q=0;q<=435;q++)

		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		   // line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		      // for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
			for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		/*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);

		    */
		    delay(1);
		    }






		       settextjustify(16,20);
		settextstyle(10,HORIZ_DIR,2);
		  setcolor(15);

		  sprintf(a,"        For statement");
		 outtextxy(20,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form of the loop is:");
		 outtextxy(20,100, a);
		 setcolor(10);
		 sprintf(a,"for (initialization ; test-condition ;increment)");
		 outtextxy(20,115, a);

		  sprintf(a,"   {");
		 outtextxy(20,130, a);
		  sprintf(a,"        body of the loop");
		 outtextxy(20,145, a);

		     sprintf(a,"   }");

		 outtextxy(20,160, a);



				  sprintf(a,"____________________________________________________");
		 outtextxy(20,172, a);


		  sprintf(a,"1. Initialization of  the control  variables is done");
		 outtextxy(20,190, a);
		  sprintf(a,"first, using assignment statements such as i=1 and" );
		 outtextxy(20,205, a);

		  sprintf(a,"this variable  is known as  loop control variable. ");
		 outtextxy(20,218, a);
		 sprintf(a,"2. Value of control variable  is tested using  test ");
		 outtextxy(20,242, a);
		  sprintf(a,"condition.If the condition is true,body of loop is");
		 outtextxy(20,259, a);
		  sprintf(a,"executed,otherwise it is terminated and execution ");
		 outtextxy(20,275, a);



		  sprintf(a,"continues from next statement follows the loop.");
		 outtextxy(20,288, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(10);

		 sprintf(a,"3. Once loop is executed , control is transferred ");
		 outtextxy(20,315, a);
		  sprintf(a,"back to for statement after evaluating last state-");
		 outtextxy(20,330, a);

		 sprintf(a,"ment.Now control variable is incremented using an ");
		 outtextxy(20,345,a);
		 sprintf(a,"assignment statement such as i = i + 1 and the new");
		 outtextxy(20,360,a);
		 sprintf(a,"value of the control variable is again tested to ");
		 outtextxy(20,375,a);
		 sprintf(a,"see whether it satisfies the loop condition.if the ");
		 outtextxy(20,390,a);
		 sprintf(a,"condition is  satisfied , the body  of the loop is   ");
		 outtextxy(20,405,a);

		 sprintf(a,"again executed this process  is continues till the ");
		 outtextxy(20,420,a);
		 sprintf(a,"value of control variable false to satisfy condition");
		 outtextxy(20,435,a);
		 sprintf(a,"____________________________________________________");
		 outtextxy(20,450, a);



		 }



		if(x==1&&y>=330&&y<=350&&y2==2)
		 {   c48:

		    int q;
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
			//for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		       for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		  /*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		  */
		    delay(1);
		    }





		       settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"        Structure");
		 outtextxy(20,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form is:");
		 outtextxy(20,97, a);

		  setcolor(10);
				  sprintf(a,"  struct         tag_name");
		 outtextxy(20,115, a);

		  sprintf(a,"    {");
		 outtextxy(20,130, a);
		  sprintf(a,"       data_type        member1;");
		 outtextxy(20,145, a);

		  sprintf(a,"       data_type        member2;");

		 outtextxy(20,160, a);



		  sprintf(a,"       ---------        --------");
		 outtextxy(20,175, a);


		  sprintf(a,"       ---------        --------");
		 outtextxy(20,190, a);
		  sprintf(a,"  };");
		 outtextxy(20,205, a);

		  sprintf(a,"____________________________________________________");
		 outtextxy(20,220, a);


		  sprintf(a,"1. The template is terminated with a semicolon.                                                    ");
		 outtextxy(20,235, a);
		 sprintf(a, "2. While the entire defination is considerd as a ");
		 outtextxy(20,260, a);
		  sprintf(a,"statement, each member is declare independently for");
		 outtextxy(20,275, a);
		  sprintf(a,"its name and type in a separate statement inside the");
		 outtextxy(20,290, a);
		  sprintf(a,"template.");
		 outtextxy(20,305,a);

		  sprintf(a,"3. The tag name such as book_bank can be used to");
		 outtextxy(20,330, a);


		  sprintf(a,"declare structure variables of its type,later in the ");
		 outtextxy(20,345, a);
		  sprintf(a,"program.");
		 outtextxy(20,360,a);

		  sprintf(a,"_____________________________________________________");
		 outtextxy(20,375, a);

		 sprintf(a,"Example:        struct book_bank");
		 outtextxy(20,390,a);
		 sprintf(a,"                  {");
		 outtextxy(20,405,a);
		 sprintf(a,"                        char  title[20];");
		 outtextxy(20,410,a);
		 sprintf(a,"                        char  author[15];");
		 outtextxy(20,425,a);
		 sprintf(a,"                        int   pages;");
		 outtextxy(20,440,a);

		 sprintf(a,"                        float price;");
		 outtextxy(20,455,a);
		 sprintf(a,"                   };");
		 outtextxy(20,458,a);
		 sprintf(a,"                struct book_bank book1,book2,book3;   ");
		 outtextxy(20,470,a);




		 }














			if(x==1&&y>=360&&y<=380&&y2==2)
		 {  c49:
		    int q,w,qq,ww,q1,q2,q3,q4,q5,q6;
		   // for(q=0,w=200;q<=200,w<=400;q++,w++)
		      for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		   // line(w,70,w,490);
		    delay(1);
		    }
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		      // for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		       for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		/*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		    */
		    delay(1);
		    }
		       settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"        Unions");
		 outtextxy(20,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general form is:");
		 outtextxy(20,100, a);
		   setcolor(10);
		     sprintf(a,"                          union  item");
		 outtextxy(20,115, a);
				  sprintf(a,"        {");
		 outtextxy(20,130, a);

		  sprintf(a,"                    int m;");
		 outtextxy(20,145, a);
		  sprintf(a,"                    float x;");
		 outtextxy(20,160, a);

		     sprintf(a,"                    char c;");

		 outtextxy(20,175, a);



				  sprintf(a,"        }");
		 outtextxy(20,190, a);


		  sprintf(a,"                     code");
		 outtextxy(20,205, a);
		  sprintf(a,"____________________________________________________");
		 outtextxy(20,220, a);

		  sprintf(a,"The union has the same syntax as structures.There is");
		 outtextxy(20,235, a);
		  sprintf(a,"major distinction between them in terms  of storage.");
		 outtextxy(20,250, a);

		  sprintf(a,"In structure,each member has its own storage location");
		 outtextxy(18,265, a);
		  sprintf(a,"whereas all members of union  use  the same location.");
		 outtextxy(20,280, a);

		  sprintf(a,"_____________________________________________________");
		 outtextxy(20,295, a);
		  sprintf(a,"                storage of 4 bytes");
		 outtextxy(20,330, a);
		  sprintf(a,"          1000    1001    1002    1004");
		 outtextxy(20,355, a);
		  sprintf(a,"            c");
		 outtextxy(20,410, a);


		  sprintf(a,"            m");
		 outtextxy(20,435, a);

		  sprintf(a,"                            x");
		 outtextxy(20,445,a);



		 }



		if(x==1&&y>=390&&y<=410&&y2==2)
		 {   c50:

		    int q;
		    for(q=0;q<=435;q++)
		    {
		    setcolor(WHITE);
		    line(q,50,q,490);
		    delay(1);
		    }




		     int w,qq,ww,q1,q2,q3,q4,q5,q6;
		/*    for(q=0,w=200;q<=200,w<=400;q++,w++)
		    {
		    setcolor(WHITE);
		    line(q,70,q,490);
		    line(w,70,w,490);
		    delay(1);
		    }
		  */
		    for(q=45;q<=490;q++)
		    {
		    circle(440,q,3);

		if(q%2!=0)
		{

		setcolor(crt1);
		delay(1);
		}
		if(q%2==0)
		{

		setcolor(crt2);

		delay(1);
		}
		    }
		     //  for(qq=0,ww=80,q1=160,q2=240,q3=320,q=80,w=160,q4=240,q5=320,q6=400;qq<=80,ww<=160,q1<=240,q2<=320,q3<=400,q>=0,w>=80,q4>=160,q5>=240,q6>=320;qq++,ww++,q1++,q2++,q3++,q--,w--,q4--,q5--,q6--)
		       for(qq=0;qq<=435;qq++)
		    {
		    if(qq%2==0)
		    {
		    setcolor(crt1);
		    }
		    else
		    {
		    setcolor(crt2);
		    }

		    line(qq,50,qq,490);
		  /*
		    line(ww,70,ww,250);

		    line(q1,70,q1,250);
		    line(q2,70,q2,250);
		     line(q3,70,q3,250);

		    line(q4,70,q4,250);

		    line(q,250,q,490);

		    line(w,250,w,490);

		    line(q4,250,q4,490);

		    line(q5,250,q5,490);

		    line(q6,250,q6,490);

		    line(q4,250,q4,490);
		   */
		    delay(1);
		    }






		       settextjustify(16,20);
		settextstyle(10,0,2);
		  setcolor(15);

		  sprintf(a,"        Pointers  ");
		 outtextxy(20,45, a);
		 settextjustify(16,20);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		  setcolor(15);

		  sprintf(a,"The general syntax is:");
		 outtextxy(20,100, a);
		  setcolor(10);
		     sprintf(a,"                      data_type * pt_name;");
		 outtextxy(20,115, a);
				  sprintf(a,"___________________________________________________");
		 outtextxy(20,130, a);

		  sprintf(a,"This tells the compiler three thing about pt_name.");
		 outtextxy(20,145, a);
		  sprintf(a,"1. The asterisk(*) tells that the variable pt_name");
		 outtextxy(20,160, a);

		  sprintf(a,"is a pointer variable.");

		 outtextxy(20,180, a);



		  sprintf(a,"2. pt_name needs a memory location.");
		 outtextxy(20,200, a);


		  sprintf(a,"3. pt_name points to a variable of data_type.");
		 outtextxy(20,220, a);
		  sprintf(a,"____________________________________________________");
		 outtextxy(20,235, a);

		  sprintf(a,"For example:");
		 outtextxy(20,250, a);
		  sprintf(a,"                 int *p;  /* integer pointer */");
		 outtextxy(20,265, a);

		  sprintf(a,"                 float *x; /* float pointer */");
		 outtextxy(20,280, a);

		  sprintf(a,"int *p;");
		 outtextxy(20,295, a);
		  sprintf(a,"              p  ?                  ?"   );
		 outtextxy(20,320, a);
		  sprintf(a,"            contains           points to       ");
		 outtextxy(20,335, a);

		  sprintf(a,"             garbage        unknown location");
		 outtextxy(20,345, a);


		 sprintf(a,"____________________________________________________");
		 outtextxy(20,360, a);

		 sprintf(a,"Pointer declaration style:");
		 outtextxy(20,375, a);
		  sprintf(a,"       int*         p;        /*style1*/");
		 outtextxy(20,390, a);

		 sprintf(a,"       int         *p;        /*style2*/ ");
		 outtextxy(20,405, a);


		 sprintf(a,"       int         * p;       /*style3*/");
		 outtextxy(20,420, a);

		 }


if((x==2&&y>=270&&y<=320&&k>=0)||(x==1&&y>=270&&y<=320&&k==0))
{
jq:
      for(i=0;i<=200;i++)
{

setfillstyle(1,4);


circle(i,100,15);
if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}

}
 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"PROGRAMS");
  outtextxy(40,93, a);

for(i=0;i<=200;i++)
{
circle(i,200,15);
if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}


}

  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"SYNTAX");
  outtextxy(40,193, a);
for(k1=0;k1<=200;k1++)
{
circle(k1,300,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}


 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"  Q/A  ");
  outtextxy(40,293, a);

for(k1=0;k1<=200;k1++)
{
circle(k1,400,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}



 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"ABOUT US");
  outtextxy(40,393, a);



 for(i=0;i<=60;i++)
{
circle(i,300,15);
if(i%2!=0)
{

setcolor(crt2);
delay(1);
}
if(i%2==0)
{

setcolor(crt1);
delay(1);
}

}


     settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(15);

   sprintf(a,"  Q/A  ");
  outtextxy(40,293, a);







	     k++;




















/*sub menu 3*/


for(i=650;i>=460;i--)
{



setfillstyle(1,4);



circle(i,120,10);
circle(i,150,10);


circle(i,180,10);
circle(i,210,10);

circle(i,240,10);
circle(i,270,10);


circle(i,300,10);
circle(i,330,10);

circle(i,360,10);

	   circle(i,390,10);









if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}












}  button =-1;
   if(button==1)
{
     if(button>0&&y>=100&&y<=510)
     goto j1;

     button=-1;
      }

 }
 if((x==2&&y>=370&&y<=420&&k>=0)||(x==1&&y>=370&&y<=420&&k==0))
{
jsp:
      for(i=0;i<=200;i++)
{

setfillstyle(1,4);


circle(i,100,15);

if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}

}
 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"PROGRAMS");
  outtextxy(40,93, a);
for(i=0;i<=200;i++)
{
circle(i,200,15);
if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}


}

  settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"SYNTAX");
  outtextxy(40,193, a);
for(k1=0;k1<=200;k1++)
{
circle(k1,300,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}


 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"  Q/A  ");
  outtextxy(40,293, a);

for(k1=0;k1<=200;k1++)
{
circle(k1,400,15);
if(k1%2!=0)
{

setcolor(crt1);
delay(1);
}
if(k1%2==0)
{

setcolor(crt2);
delay(1);
}

}



 settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);

   sprintf(a,"ABOUT US");
  outtextxy(40,393, a);



 for(i=0;i<=60;i++)
{
circle(i,400,15);
if(i%2!=0)
{

setcolor(crt2);
delay(1);
}
if(i%2==0)
{

setcolor(crt1);
delay(1);
}

}


     settextjustify(16,20);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(15);

   sprintf(a,"ABOUT US");
  outtextxy(40,393, a);







	     k++;
   /*sub menu 4*/

for(i=650;i>=460;i--)
{



setfillstyle(1,4);



circle(i,120,10);
circle(i,150,10);


circle(i,180,10);
circle(i,210,10);

circle(i,240,10);
circle(i,270,10);


circle(i,300,10);
circle(i,330,10);

circle(i,360,10);

	   circle(i,390,10);









if(i%2!=0)
{

setcolor(crt1);
delay(1);
}
if(i%2==0)
{

setcolor(crt2);
delay(1);
}
}
  }


 }


 }
/*29-aug*/
int zit=getch();
if(zit!=27)
{
	if(zit==13)
	{


	goto j1;
	}

	else if(zit== 110)
	{

	goto j1;
	}
	else if(zit==49&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c31;

	}
	else if(zit==50&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c32;
	}
	else if(zit==51&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c33;
	}
	else if(zit==52&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c34;
	}

	else if(zit==53&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c35;

	}
	else if(zit==54&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c36;
	}
	else if(zit==55&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c37;
	}
	else if(zit==56&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c38;
	}

	else if(zit==57&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c39;

	}
	else if(zit==48&&y2==1)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c40;
	}




		else if(zit==49&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c41;

	}
	else if(zit==50&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c42;
	}
	else if(zit==51&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c43;
	}
	else if(zit==52&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c44;
	}

	else if(zit==53&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c45;

	}
	else if(zit==54&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c46;
	}
	else if(zit==55&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c47;
	}

	else if(zit==56&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c48;
	}

	else if(zit==57&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c49;

	}
	else if(zit==48&&y2==2)
	{
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
	goto c50;
	}
      else if(zit==112)
	{

       sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(180);

	nosound();
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(280);

	nosound();
	goto jp;

	}


		else if(zit==115)
	{

       sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(180);

	nosound();
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(280);

	nosound();
	goto js;

	}
		else if(zit==113)
	{

       sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(180);

	nosound();
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(280);

	nosound();
	goto jq;

	}

		else if(zit==97)
	{
	goto cccc;
	}
		else if(zit==111)
	{

       sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(180);

	nosound();
		sound(1630);
	delay(180);

	nosound();
		sound(830);
	delay(180);

	nosound();
		sound(1230);
	delay(280);

	nosound();
	goto jsp;

	}
}

else
{

cleardevice();


//delay(1000);

clrscr();
delay(1000);
		  settextjustify(16,20);
		settextstyle(10,0,2);
		setcolor(0);

		for(q=215;q<=465;q++)
		{
		line(q,240,q,290);
		}
		setcolor(10);
		for(q=200;q<=450;q++)
		{
		line(q,225,q,275);
		}

		  setcolor(4);

		  sprintf(a,"THANK YOU!!!");
		 outtextxy(220,225, a);
	       //	 settextjustify(16,20);
	       //	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		 // setcolor(15);

	      //	  sprintf(a,"#include <stdio.h>");
	       //	 outtextxy(20,130, a);

		 delay(1500);

exit(0);

}
}

int initmouse()
{
i.x.ax =0;
int86(0X33,&i,&o);
return(o.x.ax);
}
void showmouseptr()
{
i.x.ax = 1;
int86(0X33,&i,&o);
}
void getmousepos(int *button,int *x,int *y)
{
i.x.ax =3;
int86(0X33,&i,&o);
*button = o.x.bx;
*x = o.x.bx;
*y = o.x.dx;
}


