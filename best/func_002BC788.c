typedef struct { f32 x,y,z; } Vec3; typedef struct { u8 pad[0xD0]; } P;
s32 func_00153FD0(void*,Vec3,s32,s32); void ovl_ntgui2_func_0013D230(void*,Vec3*,s32,s32,s32,Vec3*,s32,s32);
void func_00143830(void*); f32 func_0015A070(s16); f32 func_0015A100(s16); s32 func_00165DC0(void*,void*); s32 func_00194390(void*,void*,void*); void func_0024D308(s32,void*,f32);
extern char D_00452ED0[],D_00479898[],D_00486520[]; extern f32 D_00482F4C,D_00482F50; s32 D_004844A4;
void func_002BC788(P*p,Vec3*q,s16 angle,s32 a3,s32 a4,s32 a5) {
 Vec3 v=*q, out; f32 z=105.0f; void *w=(char*)p+0x58; u32 extra[2];
 func_00153FD0(p,v,a4,0); *(void**)((char*)p+0x48)=D_00452ED0; *(s32*)((char*)p+0x54)=0;
 *(u8*)((char*)w+9)=0; *(Vec3*)((char*)p+0x88)=v;
 *(f32*)((char*)w+0x24)=z; *(f32*)((char*)w+0x28)=D_00482F4C; *(f32*)((char*)w+0x2c)=D_00482F50;
 *(s16*)((char*)w+0x14)=0x80; *(s16*)((char*)w+0x16)=0xff; *(s16*)((char*)w+0x18)=0x96;
 *(f32*)((char*)w+0x1c)=z; *(f32*)((char*)w+0x20)=D_00482F4C;
 *(s16*)((char*)w+0xa)=0; *(s16*)((char*)w+0xc)=0x80; *(s16*)((char*)w+0xe)=0xff; *(s16*)((char*)w+0x10)=0x96; *(s16*)((char*)w+0x12)=0;
 ovl_ntgui2_func_0013D230(w,&v,0x80,0xff,0x96,&v,0,0);
 if(a4)func_00194390((char*)p+0x54,(void*)a4,(void*)a4);
 *(s16*)((char*)p+0x94)=a3; *(s16*)((char*)p+0x38)=angle;
 out.x=func_0015A070(angle)*350.0f; out.y=func_0015A100(*(s16*)((char*)p+0x38))*350.0f; out.z=0;
 *(Vec3*)((char*)p+0x9c)=out;
 *(s32*)((char*)p+0xc8)=a5; *(s32*)((char*)p+0xc4)=0; *(s32*)((char*)p+0xc0)=D_004844A4+0x78; *(s32*)((char*)p+0xcc)=0;
 func_00143830(p); func_0024D308(func_00165DC0(D_00486520,D_00479898),p,1.0f); (void)extra;
}
