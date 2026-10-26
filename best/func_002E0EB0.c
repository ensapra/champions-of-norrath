extern s32 D_00446074;
extern s32 D_008E6B40[];
extern s32 D_008E6BC0[];
extern s32 D_008E8100;
s32 SignalSema_2(s32); s32 PollSema_2(s32);
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,void*,s32);
s32 func_002E0EB0(s32 arg0) {
 s32 *p=D_008E6B40;
 if(p[9]==0) return -0x64;
 if(PollSema_2(D_00446074)<0) return -0xc8;
 D_008E6BC0[1]=arg0;
 s32 r=func_002D8270(p,0x15,0,D_008E6BC0,0x30,&D_008E8100,4,0,0);
 if(r!=0) { SignalSema_2(D_00446074); return r; }
 SignalSema_2(D_00446074);
 return D_008E8100;
}
