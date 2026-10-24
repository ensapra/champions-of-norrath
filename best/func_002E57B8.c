s32 SignalSema_2(s32); s32 func_002D8270(void*,s32,s32,s32,s32,void*,s32,s32,s32); s32 func_002E2CD0(s32);
extern s32 D_004460A8[]; extern u8 D_00446100[],D_00447250[];
s32 func_002E2E40(void){s32 v;if(func_002E2CD0(2)==0)return 0;if(func_002D8270(D_00447250,14,0,0,0,D_00446100,4,0,0)<0){SignalSema_2(D_004460A8[0]);return 0;}v=*(s32*)((u32)D_00446100|0x20000000);SignalSema_2(D_004460A8[0]);return v;}
s32 func_002E4E48(s32,s32,void*,s32,s32); s32 func_002E4F00(s32,void*,s32,s32,s32);
s32 func_002E5400(s32 a,s32*p,s32 b,s32 c){p[0]=b;p[1]=c;if(func_002E4E48(a,3,p,8,4)>=0)return p[0];return -542;}
s32 func_002E57B8(s32 a,s32*p,s32 b,s32 c){p[0]=b;p[1]=c;if(func_002E4E48(a,15,p,8,4)>=0)return p[0];return -542;}
s32 func_002E5620(s32 a,s32*p,s32 b,s32 c,s32 d,s32*q,s32 e){s32 r;p[0]=b;if(q)p[1]=*q;else p[1]=0;p[2]=d;p[3]=e;r=func_002E4F00(a,p,4,c,d);if(r>=0){r=-542;if(func_002E4E48(a,5,p,d+16,8)>=0){if(q)*q=p[1];r=p[0];}}return r;}
