typedef struct {s32 x,y,w,h;} Rect; typedef struct {char pad[0x10];s32 mode;} Obj;
extern s32 func_0011BA18(s32); extern void func_001A42B8(void*,s32); extern void func_001A3D78(void*,s32,void*); extern s32 func_0010F6B0(s32,void*,void*); extern void func_00139550(s32,s32); extern void func_0010C7E8(s32,s32,s32,s32); extern void func_00135330(void); extern s32 D_001BB6BC[]; extern s32 D_010CE2E0[]; extern s32 D_010CE2E8[]; extern Rect D_010CE300;
s32 func_00134EE0(Obj*p,void*b,void*c){s32 i,y,v,w;Rect r;char txt[0x80];
 switch(p->mode){case 1:D_010CE300.x=0x78;D_010CE300.w=0x1A4;D_010CE300.h=0x16;
 if(D_001BB6BC[0])func_001A42B8(&r,func_0011BA18(0xE));else func_001A42B8(&r,func_0011BA18(0xD));
 for(i=0,y=0x2D;i<3;i++){D_010CE300.y=y;v=func_0011BA18(i+0xD8);func_001A3D78(txt,v,&r);D_010CE2E8[i]=func_0010F6B0(D_010CE2E0[0],&D_010CE300,txt);y+=0x16;}return 0;
 case 2:func_00139550(0,0x28);v=func_0011BA18(2);w=func_0011BA18(3);func_0010C7E8(0,v,w,0);func_00135330();return 1;}return 0;}
