extern f32 D_00482288; extern f32 D_0048228C; void func_00276B58(void *);
void func_002782B8(void *o) {
 void *vt=*(void**)((u8*)o+0x48); volatile u8 *ent=(volatile u8*)vt+0xE0; s16 off=*(volatile s16*)ent; void(*fn)(void*)=*(void(**)(void*))(ent+4); fn((u8*)o+off);
 f32 x=*(f32*)((u8*)o+0x378); f32 k=D_00482288; f32 y=*(f32*)((u8*)o+0x37C); f32 z=*(f32*)((u8*)o+0x380); x=x*k; y=y*k; f32 scale=*(f32*)((u8*)o+0x374); z=z*k;
 *(f32*)((u8*)o+0x29C)=scale; f32 one=1.0f; f32 xx=x*x; f32 k2=D_0048228C; f32 yy=y*y; f32 zz=z*z;
 f32 inv=one/scale; f32 a0=xx+yy; f32 a1=xx+zz; f32 a2=zz+yy; f32 v0=scale*a0; f32 v1=scale*a1; f32 v2=scale*a2; v0=v0*k2; v1=v1*k2; v2=v2*k2;
 *(f32*)((u8*)o+0x2A0)=inv; *(f32*)((u8*)o+0x4C0)=v0; *(f32*)((u8*)o+0x4C4)=v1; *(f32*)((u8*)o+0x4BC)=v2;
 f32 r0=one/v0; *(f32*)((u8*)o+0x4CC)=r0; f32 r1=one/v1; *(f32*)((u8*)o+0x4D0)=r1; f32 r2=one/v2; *(f32*)((u8*)o+0x4C8)=r2;
 func_00276B58(o);
}
