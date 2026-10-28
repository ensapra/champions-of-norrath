typedef struct { s32 x,y,z; } T12;
typedef struct { u64 a,b; } Pad16;
extern u8 D_0044D018[];
s16 func_001411F0(void *,void *,s32);
void func_00143630(void *);
void func_00157668(void *,T12 *,s16);
void func_001543C8(u8 *a,T12 *b,s16 ang) {
 T12 t=*b; Pad16 pad;
 T12 t2;
 func_001411F0(a,&t,0);
 *(void**)(a+0x48)=D_0044D018;
 *(s32*)(a+0xc)|=0x1809;
 func_00143630(a);
 *(s16*)(a+0x38)=ang;
 *(u16*)(a+0x140)|=1;
 *(f32*)(a+0x1c)=4.0f;
 t2=*(T12*)(a+0x10);
 func_00157668(a+0x110,&t2,ang+0x4000);
}
