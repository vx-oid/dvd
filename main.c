#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define W w.ws_col
#define H w.ws_row
#define T TIOCGWINSZ
#define P printf("\033[2J\033[%d;%dH[DVD]",y,x)
#define B(p,m,d) if(p+d>=m||p+d<2)d=-d

int main(){ /*D*/    /*V*/         /*V*/   struct/* DVD */
winsize      /* */w   ;int        x=2      ,y=2,      a/* */=
1,b=1;        /* */    while     (1)       {ioctl      /* */
(1,T,&w)      /* */     ;P;     fflush     (0);        /* */
usleep(      /* */       100000);B         (x,W,a)    /* */
;B(y,H,b); /*D */         ;x+=a;y+=b;      }return   (0);}
/*DVD*/ /*DVD*/            /*V*/           /*V*/ /*DVD*/
