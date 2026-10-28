typedef struct {s32 a,b,c;} V12;
extern char D_00486520[],D_00479868[],D_00479878[];
void func_00157668(void*,V12*,s16); void func_00156CB0(void*,s32,s16); void func_0013E7A8(s16*); s32 func_00165DC0(char*,char*); void func_0016AE78(s32,s32,s32,V12*,void*,s32,s32,s32,s32); void func_0013CB88(void);
void func_002BDEF0(char*self){V12*p=(V12*)(self+16);char buf[64];V12 a;s16 q[4];V12 b;s32 r1,r2;s32 ang=*(u16*)(self+0x38); a=*p;func_00157668(buf,&a,ang-0x7fff);func_00156CB0(buf,0,*(s16*)(self+0x98));q[0]=7;q[1]=7;q[2]=42;q[3]=128;func_0013E7A8(q);r1=func_00165DC0(D_00486520,D_00479868);r2=func_00165DC0(D_00486520,D_00479878);b=*p;func_0016AE78(r1,r2,3,&b,buf,0,-1,0,0);func_0013CB88();}
