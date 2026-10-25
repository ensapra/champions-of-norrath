extern s32 SignalSema_2(s32);
extern s32 PollSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern s32 func_00305118(char *, s8 *, s32);
s32 D_00446070;
s32 D_00446074;
struct Gate { char pad[0x24]; s32 ready; };
extern struct Gate D_008E6B40;
extern char D_008E6C04[];
extern char D_008E8100[];
extern void func_002E0DE0(void);
s32 func_002E1CA0(s32 a0, s32 a1, s8 *a2) {
 s32 result;
 char *base;
 char *entry;
 if (D_008E6B40.ready==0) return -100;
 if (PollSema_2(D_00446074)<0) return -200;
 if (a2==NULL || *a2==0) { SignalSema_2(D_00446074); return -210; }
 base=D_008E6C04;
 func_00305118(base,a2,0x3ff);
 entry=base-0x14;
 *(s32 *)(entry+0)=a0;
 *(s32 *)(entry+4)=a1;
 *(s8 *)(entry+0x413)=0;
 *(s32 *)(entry+8)=0;
 result=func_002D8270(&D_008E6B40,15,1,entry,0x414,D_008E8100,4,func_002E0DE0,0);
 if(result==0) D_00446070=15; else SignalSema_2(D_00446074);
 return result;
}
