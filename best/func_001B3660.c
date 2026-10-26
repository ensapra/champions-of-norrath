extern u8 D_01109800[];
extern u8 D_01109848[];
extern s32 jtbl_004C006C[];
extern s32 CreateSema(void *, s32, s32);
extern void DeleteSema(s32);
extern void WaitSema(s32);
extern void func_001B1538(s32);
extern void func_001B1668(void);
extern void func_001B1568(void);
extern void func_001AFE98(void *, s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
struct __attribute__((packed)) Copy40 { u64 x[8]; };
s32 func_001B3660(u8 *arg0, struct Copy40 *arg1, s32 arg2) {
    u8 *p=D_01109800; s32 i=0, sem, result; s32 sp30; s32 sp10[2];
    func_001B1538(13);
    if (jtbl_004C006C[0x3F30/4] == 0) func_001B1668();
    {
      u8 c=*arg0; p[0x50]=c;
      if(c) { do { ++i; if(i>=0x400) break; c=arg0[i]; p[0x50+i]=c; } while(c); }
    }
    if(i==0x400){p[0x44f]=0;i=0x3ff;}
    *(struct Copy40 *)(p+0x10)=*arg1;
    *(s32 *)(p+0xC)=arg2;
    sp10[0]=1;sp10[1]=0; sem=CreateSema(sp10,0,0);
    *(void **)(p+4)=&sp30; *(s32 *)(p+8)=4; *(s32 *)p=sem;
    func_001AFE98(p,0x450);
    result=func_001B08B0(D_01109848+0x16B8,13,0,p,i+0x51,D_01109848+0xBF8,4,0,0);
    if(result<0){DeleteSema(sem);func_001B1568();return -11;}
    result=*(s32 *)((u32)(D_01109848+0xBF8)|0x20000000); func_001B1568();
    if(!result){DeleteSema(sem);return -11;}
    WaitSema(sem);DeleteSema(sem);return sp30;
}
