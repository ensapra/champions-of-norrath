typedef struct { f32 x,y,z; } Vec3;
s32 func_00153FD0(void*,Vec3*,s32,s32); void ovl_ntgui2_func_0013D230(void*);
void func_00143830(void*); f32 func_0015A070(s16); f32 func_0015A100(s16); s32 func_00165DC0(void*,void*); void func_00194390(void*,s32,s32); void func_0024D308(s32,void*,f32);
extern char D_00452ED0[],D_00479898[],D_00486520[]; extern const f32 D_00482F4C,D_00482F50; volatile s32 D_004844A4;
void func_002BC788(void*p,Vec3*q,s16 angle,s32 a3,s32 a4,s32 a5) {
 Vec3 v=*q, t, out; Vec3 *op; f32 x,y; volatile char *w=(char*)p+0x58; volatile s32 *z=(volatile s32*)((char*)p+0x54);
 func_00153FD0(p,&v,a4,0); t=v; *(void* volatile*)((char*)p+0x48)=D_00452ED0; *z=0;
 *(u8*)((char*)w+9)=0; *(Vec3*)((char*)p+0x88)=t;
 *(volatile f32*)((char*)w+0x24)=105.0f; *(volatile f32*)((char*)w+0x28)=D_00482F4C; *(volatile f32*)((char*)w+0x2c)=D_00482F50;
 *(volatile s16*)((char*)w+0x14)=0x80; *(volatile s16*)((char*)w+0x16)=0xff; *(volatile s16*)((char*)w+0x18)=0x96;
 *(volatile f32*)((char*)w+0x1c)=105.0f; *(volatile f32*)((char*)w+0x20)=D_00482F4C;
 *(volatile s16*)((char*)w+0xa)=0; *(volatile s16*)((char*)w+0xc)=0x80; *(volatile s16*)((char*)w+0xe)=0xff; *(volatile s16*)((char*)w+0x10)=0x96; *(volatile s16*)((char*)w+0x12)=0; *(volatile u8*)((char*)w+8)=0;
 ovl_ntgui2_func_0013D230((void*)w);
 if(a4)func_00194390((void*)z,a4,a4);
 *(s16*)((char*)p+0x94)=a3; *(s16*)((char*)p+0x38)=angle;
 op=&out; x=func_0015A070(angle)*350.0f; y=func_0015A100(*(s16*)((char*)p+0x38))*350.0f;
 op->x=x; op->y=y; op->z=0; *(Vec3*)((char*)p+0x9c)=*op;
 { s32 tmp=D_004844A4+0x78; *(volatile s32*)((char*)p+0xc8)=a5; *(volatile s32*)((char*)p+0xc4)=0; *(volatile s32*)((char*)p+0xc0)=tmp; } *(volatile s32*)((char*)p+0xcc)=0;
 func_00143830(p); func_0024D308(func_00165DC0(D_00486520,D_00479898),p,1.0f);
}
