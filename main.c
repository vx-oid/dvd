#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define W w.ws_col
#define H w.ws_row
#define T TIOCGWINSZ
#define D ;
#define V
#define ffl fflush
#define D_D
#define dVd ;
#define O_o ;
#define o_o ;
#define o_O ;
#define O_O ;
#define dvD ;
#define L_k_k
#define p_T_R
#define O_o_P
#define P printf("\033[2J\033[%d;%dH[DVD]",y,x)
#define B(p,m,d) if(p+d>=m||p+d<2)d=-d

int main(){ o_O      dVd           dVd     struct V D_D
winsize     D_D w     ;int        x=2      ,y=2,      a V=
1,b=1;        p_T_R    while     (1)       {ioctl       D_D
(1,T,&w)      L_k_k     ;P;     ffl        (0);         o_O
usleep(      O_o_P       100000);B         (x,W,a)     dvD
;B(y,H,b); ;x+=a;          y+=b;           }return   (0);}
dVd O_o o_o V D             O_o             O_O dVd o_o
