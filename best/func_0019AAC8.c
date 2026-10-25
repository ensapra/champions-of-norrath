s32 func_001966E8(void*,s64*); s32 func_0019A5E8(void*,s64*);
typedef struct{ s32 x,y; u8 p[4]; u16 c,d;} A; typedef struct{u8 p[0xec];s32(*f)(s32);s32(*g)(s32);} T; extern T *D_00480488;
s32 func_0019AAC8(void*o,A*a){volatile s32 pad[8];s64 key;s32 r=-1,t,s=0,n=0;u32 x;
x=D_00480488->g(a->x+(a->c>>1));key=(u64)x;
t=D_00480488->f(a->y+(a->d>>1));*(u32*)((char*)&key+4)=t;
r=func_001966E8(o,&key);if(r!=-1)return r;
t=func_0019A5E8(o,&key);if(t!=r){s32 v=t<0?t+15:t;s32 lim=v>>4; s32 *p=(s32*)&key;do{s+=*p++;n++;}while(n<(u32)lim);return s+t;}
*(s32*)((char*)o+0xf8)=0;*(s32*)((char*)o+0xf4)=0;return 0;}
