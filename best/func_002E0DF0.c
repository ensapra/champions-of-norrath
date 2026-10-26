extern s32 D_00446070, D_00446074;
extern s32 D_008E6B40[], D_008E6BC0[], D_008E8100[];
extern s32 PollSema_2(s32), SignalSema_2(s32);
extern void func_002E0DE0(void);
extern s32 func_002D8270(void *,s32,s32,void *,s32,void *,s32,void *,s32);
s32 func_002E0DF0(s32 arg0) {
 s32 *p=D_008E6B40;
 s32 r;
 if(p[9]==0) return -100;
 if(PollSema_2(D_00446074)<0) return -200;
 D_008E6BC0[5]=arg0;
 r=func_002D8270(p,0x14,1,D_008E6BC0,0x30,D_008E8100,4,func_002E0DE0,0);
 if(r==0) D_00446070=0x14;
 else SignalSema_2(D_00446074);
 return r;
}
