typedef struct { unsigned char pad[0x120]; } O;
void func_0020FF48(O *o, void *a1, s16 a2, s32 a3, s32 a4) {
 *(s32*)(o->pad+0x48)=0; *(s32*)(o->pad+0x3c4)=0; *(s16*)(o->pad+0x23c)=0;
 *(s32*)(o->pad+0xf8)=0; *(s32*)(o->pad+0xec)=0; o->pad[0xac]=0x12;
 *(f32*)(o->pad+0xb0)=180.0f; *(f32*)(o->pad+0xa8)=20.0f; *(f32*)(o->pad+0x1c)=12.0f;
 *(f32*)(o->pad+0x5c)=-0.25f; *(f32*)(o->pad+0x58)=1.0f;
 *(u64*)(o->pad+0xa0)=0; *(s32*)(o->pad+0x3c8)=0;
}
