void func_0014BAFC(void*,void*,void*,void*,void*,void*,s32,s32,s32);
typedef struct {u32 r:8,g:8,b:8,a:8;} C4;
#define CL(x) ((x)<0?0:(x))
#define B(x) (*(u8*)&(x))
void func_0014C030(s32 arg0,s32 arg1,char *arg2,s32 arg3,s32 arg4,s32 arg5,u8*out){s32 a,b,c,d,e,f,g,h;C4 x,y;
func_0014BAFC(&a,&b,&c,&d,arg2,arg2+4,arg4,0,arg0);func_0014BAFC(&e,&f,&g,&h,arg2+8,arg2+12,arg4,0,arg0);
x.r=CL(a);x.g=CL(b);x.b=CL(c);x.a=arg3*CL(d)/255;
y.r=CL(e);y.g=CL(f);y.b=CL(g);y.a=arg3*CL(h)/255;
func_0014BAFC(&a,&b,&c,&d,&x,&y,arg5,0,arg1);out[0]=B(a);out[1]=B(b);out[2]=B(c);out[3]=B(d);}
