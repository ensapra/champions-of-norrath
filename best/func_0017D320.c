extern s32 func_0017C528(s32); extern void func_001AFE98(void *,s32); extern s32 func_001B08B0(void *,s32,s32,void *,s32,void *,s32,s32,s32); extern s32 SignalSema(s32);
extern s32 D_001D1B00[], D_001D2040[], D_001D16C0[]; extern s32 D_001D04EC[];
s32 func_0017D320(s32 a, s32 *out) {
 s32 *buf=D_001D1B00; s32 r; volatile s32 extra[4]; extra[0]=a;
 if(func_0017C528(0x1A)==0)return -1;
 buf[0]=a; func_001AFE98(buf,4);
 if(func_001B08B0(D_001D2040,5,0,buf,4,D_001D16C0,8,0,0)<0){SignalSema(D_001D04EC[0]);return -1;}
 if(out)*out=*(s32 *)((u32)&D_001D16C0[1]|0x20000000);
 r=*(volatile s32 *)((u32)D_001D16C0|0x20000000);
 SignalSema(D_001D04EC[0]); return r;
}
