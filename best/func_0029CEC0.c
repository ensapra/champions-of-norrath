typedef struct { s32 a,b,c; } V12;
typedef struct { char p0[0xC]; s32 flags; V12 pos; volatile f32 f1c; char p20[0x28]; s32 vt,s4c; volatile f32 f50; s32 s54,s58; volatile s16 s5c; char p5e[2]; V12 pos2; s32 s6c; } T;
extern char D_00451190[]; s32 D_004844A4;
s32 func_001411F0(T *,V12 *,s32,s32); void func_00143630(T *); void func_00143830(T *);
void func_0029CEC0(T *self,V12 *p1,V12 *p2,s32 a3,s32 a4,f32 f) {
 V12 a=*p1; V12 b=*p2;
 func_001411F0(self,&a,0,0);
 self->vt=(s32)D_00451190; self->s54=a4; self->flags|=0x421D; self->s4c=a3; self->pos=a;
 self->s58=0; self->s5c=0; self->s6c=D_004844A4+0x78; self->pos2=b; self->f1c=f*12.0f; self->f50=f;
 func_00143630(self); func_00143830(self);
}
