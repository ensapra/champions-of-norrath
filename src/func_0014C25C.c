void func_0014BBEC(void*,void*,void*,void*,void*,s32,s32,s32);
typedef struct {u32 r:8,g:8,b:8;} C3;
#define CL(x) ((x)<0?0:(x))
#define B(x) (*(u8*)&(x))
void func_0014C25C(s32 arg0,s32 arg1,char *arg2,s32 arg3,s32 arg4,u8*out){s32 a,b,c,d,e,f,g,h;C3 x,y;
func_0014BBEC(&a,&b,&c,arg2,arg2+4,arg3,0,arg0);func_0014BBEC(&d,&e,&f,arg2+8,arg2+12,arg3,0,arg0);
x.r=CL(a);x.g=CL(b);x.b=CL(c);y.r=CL(d);y.g=CL(e);y.b=CL(f);
func_0014BBEC(&a,&b,&c,&x,&y,arg4,0,arg1);out[0]=B(a);out[1]=B(b);out[2]=B(c);}
