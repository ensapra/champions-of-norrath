typedef struct{u8 p[0x24];s32 ready;u8 q[0x24];s32 ready2;} Dev;
extern u8 func_01000000[]; extern u8 jtbl_004C006C[]; extern s32 D_0000FFFF;
extern volatile s32 D_00362DB8; s32 D_00362DBC;
void func_001B06E0(void*,u32,s32); s32 func_00191178(void); s32 func_00190020(s32); void func_001AF710(void*,s32,s32,s32,s32);
s32 func_0018FEE0(s32 arg0){
 s32 msg,type; Dev*d=(Dev*)(func_01000000+0xF45C0);
 D_00362DB8=1;
 do { func_001B06E0(d,0x80000100,0); if(d->ready) break; s32 n=(s32)(((u32)D_0000FFFF)>>16); do { n+=(s16)D_0000FFFF; } while(n!=-1); } while(1);
 do { func_001B06E0((u8*)d+0x28,0x80000101,0); if(d->ready2) break; s32 n=(s32)(((u32)D_0000FFFF)>>16); do { n+=(s16)D_0000FFFF; } while(n!=-1); } while(1);
 msg=func_00191178(); type=msg>>8;
 if(type==4) return func_00190020(arg0);
 if(D_00362DBC){func_001AF710(jtbl_004C006C+0xEAEC,0,0,0,0);func_001AF710(jtbl_004C006C+0xEB14,4,0,type,msg&255);}
 return 0;
}
