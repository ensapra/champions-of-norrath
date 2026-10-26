typedef struct S { char pad[0x4c]; s32 flag; char p52[8]; s32 f4; char pfc[8]; s32 ffc; } S;
typedef struct V { char pad[0x100]; s32 (*f100)(void); s32 (*f28)(s32); s32 (*f34)(void); s32 (*f18)(void); } V;
extern V *D_00480488;
extern char jtbl_004C006C[], D_00508021[];
void func_0019542C(void*); void func_0019545C(void*); void func_0019548C(void*); void func_0019555C(void*); void func_00195660(void*,s32); void func_001958F4(void*); void func_00195924(void*); void func_001959B8(void*,s32,s32); void func_00195B3C(void*,void*,s32); void func_00198C24(s32); void func_00199F04(void*); void func_0019A120(void*,s32,s32); s32 func_0019A300(void*,s32); void func_001A1568(void*,s32,void*);
void func_0019989C(S *a,s32 b,s32 c,s32 d) {
 s32 x=b&65535,y=c&65535,z=d&65535,t,u;
 if(!a) func_001A1568(jtbl_004C006C+0xF2EC,0x25C,jtbl_004C006C+0xF30C);
 if(D_00480488->f100()==0) {
 if(x&0x100){a->flag=0;D_00480488->f28(15);return;}
 if((x&1)|| (y&1)) func_001959B8(a,8,2);
 if((x&8)||(y&1)) func_001959B8(a,8,2);
 if((x&2)||(y&8)) func_00195660(a,0);
 if((x&0x10)||(y&1)) func_001959B8(a,9,2);
 if((x&0x10)||(y&0x10)) func_00195B3C(a,&t,2);
 if((x&0x80)||(y&0x80)) func_001959B8(a,4,2);
 if(x&0x800){if(D_00480488->f100()){D_00480488->f34();func_00198C24(0x12);}else func_0019542C(a);func_001959B8(a,5,2);D_00480488->f18();return;}
 if(z&1)func_0019545C(a);if(z&2)func_0019548C(a);if(z&0x10)func_0019555C(a);if(z&0x40)func_001958F4(a);if(z&0x80)func_00195924(a);if(z&0x20){func_00199F04(a);a->flag=1;}
 t=(z&0x1000)?-1:0;if(z&0x4000)t++;
 u=func_0019A300(a,y)&65535;
 if(a->ffc>=0x96 && a->f4!=0x10&&a->f4!=0x11){if(u&0x1000)t--;if(u&0x4000)t++;}
 func_0019A120(a,(z&0x8000)?-1:0 + ((z&0x2000)?1:0),t);
 }}
