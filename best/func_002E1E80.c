s32 D_00446070; s32 D_00446074;
typedef struct { u8 pad[0x24]; s32 active; } State;
extern State D_008E6B40; extern u8 D_008E6B80[]; extern u8 D_008E6BF0[]; extern u8 D_008E8100[]; extern u8 func_002E0DE0[];
s32 PollSema_2(s32); s32 SignalSema_2(s32); s32 FlushCache_2(s32);
s32 func_00305118(void *,const char*,s32,void*,void*,void*);
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,void*,s32);
s32 func_002E1E80(s32 a,s32 b,const char*c,const void*d,s32 e){
 s32 r; State *st=&D_008E6B40;
 if(!st->active)return -100;
 if(PollSema_2(D_00446074)<0)return -200;
 if(!c||!*c){SignalSema_2(D_00446074);return -210;}
 *(s32*)D_008E6BF0=a; *(s32*)(D_008E6BF0+4)=b; *(s32*)(D_008E6BF0+8)=e&7;
 __builtin_memcpy(D_008E6B80,d,0x40); *(void**)(D_008E6BF0+0x10)=D_008E6B80;
 func_00305118(D_008E6BF0+0x14,c,0x3ff,0,0,D_008E6B80);
 *(u8*)(D_008E6BF0+0x413)=0; FlushCache_2(0);
 r=func_002D8270(st,14,1,D_008E6BF0,0x414,D_008E8100,4,func_002E0DE0,0);
 if(!r)D_00446070=14;else SignalSema_2(D_00446074);
 return r;
}
