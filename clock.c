#include<stdio.h>
#include<time.h>
#include<graphics.h>
int main()
{
   int gd= DETECT, gm;
   initgraph(&gd, &gm, "c:\\TC\\BGI"); //Initializing Graphics mode//
   time_t rawTime;
   struct tm * currentTime;
   char a[50];
      while(1)
    {
  rawTime = time(NULL);
  currentTime = localtime(&rawTime);
  strftime(a,50,"%I : %M : %S %p", currentTime);
  setcolor(BLUE);
  int x=110;
  circle(90+x,120,3);
  circle(90+x,160,3);
  x=240;
  circle(90+x,120,3);
  circle(90+x,160,3);
  switch(a[0])
   {
   case '0' :
    line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    line(90,145,90,175);
    line(90,135,90,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    //line(95,180,125,180);
    //line(90,145,90,175);
    //line(90,135,90,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95,100,125,100);
    line(130,105,130,135);
    //line(130,145,130,175);
    line(95,180,125,180);
    line(90,145,90,175);
    //line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '9':
    line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '4':
    //line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    //line(95,180,125,180);
    //line(90,145,90,175);
    line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '5' :
    line(95,100,125,100);
    //line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    //line(90,145,90,175);
    line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '6':
    line(95,100,125,100);
    //line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    line(90,145,90,175);
    line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '7':
    line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    //line(95,180,125,180);
    //line(90,145,90,175);
    //line(90,135,90,105);
    //line(95,140,125,140);
    break;
    case '8': 
    line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    line(90,145,90,175);
    line(90,135,90,105);
    line(95,140,125,140);
    break;
    case '3':
    line(95,100,125,100);
    line(130,105,130,135);
    line(130,145,130,175);
    line(95,180,125,180);
    //line(90,145,90,175);
    //line(90,135,90,105);
    line(95,140,125,140);
    break;
    }
    x=50;
     switch(a[1])
   {
   case '0' :
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    //line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '9':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    case '4':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '5' :
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '6':
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '7':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '8':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '3':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    }
     x=130;
     switch(a[5])
   {
   case '0' :
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    //line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '9':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(95+x,140,125+x,140);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '4':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '5' :
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '6':
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '7':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '8':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '3':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    }
     x=180;
     switch(a[6])
    {
   case '0' :
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    //line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    // //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
   line(95+x,140,125+x,140);
    break;
    case '9':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
     //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    line(95+x,140,125+x,140);
    case '4':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '5' :
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '6':
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '7':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '8':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '3':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
   // line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    }
     x=260;
     switch(a[10])
   {
   case '0' :
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    //line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '9':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
   line(95+x,140,125+x,140);
    case '4':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '5' :
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '6':
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    case '7':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '8':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '3':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    }
     x=310;
     switch(a[11])
   {
   case '0' :
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '1':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '2':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    //line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '9':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    case '4':
    //line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '5' :
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '6':
    line(95+x,100,125+x,100);
    //line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '7':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
    //line(95,140,125,140);
    break;
    case '8':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    case '3':
     line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
    line(130+x,145,130+x,175);
    line(95+x,180,125+x,180);
    //line(90+x,145,90+x,175);
    //line(90+x,135,90+x,105);
   line(95+x,140,125+x,140);
    break;
    }
     x=400;
     switch(a[13])
   {
   case 'A':
    line(110+x,100,90+x,175);
    line(110+x,100,130+x,175);
    line(100+x,140,120+x,140);
    break;
    case 'P':
    line(95+x,100,125+x,100);
    line(130+x,105,130+x,135);
   // line(130+x,145,130+x,175);
    //line(95+x,180,125+x,180);
    line(90+x,145,90+x,175);
    line(90+x,135,90+x,105);
    line(95+x,140,125+x,140);
    break;
    }

    line(530,100,530,175);
    line(530,100,550,140);
    line(570,100,550,140);
    line(570,100,570,175);
    
   delay(100);
   cleardevice();
}
   sleep(20);
   closegraph();
}
