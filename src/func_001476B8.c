extern char D_0044D018[];
typedef struct { s32 x,y,z; } Vec; s32 func_001411F0(void*, Vec*, s32, s32);
void func_00304640(void*, s32);
s32 func_00165DC0(void*, void*);
void func_0016C820(s32, s64, s32*, s32*, s32*, s32*, s32*, s32*);
void func_00143630(void*);
void func_00147A48(void*, s32);
void func_001476B8(void *a, void *b, s32 c, s32 d, s32 e, s64 f, s32 g) {
 Vec v; s32 x[6];
 v=*(Vec*)b; func_001411F0(a, &v, 0, 0);
 *(void**)((char*)a+0x48)=D_0044D018;
 func_00304640((char*)a+0x54,c);
 func_00304640((char*)a+0x64,d);
 func_00304640((char*)a+0xA4,e);
 *(s32*)((char*)a+0x4C)=func_00165DC0((char*)a+0x54,(char*)a+0x64);
 *(s32*)((char*)a+0x50)=func_00165DC0((char*)a+0x54,(char*)a+0xA4);
 *(s64*)((char*)a+0xE8)=f;
 {u32 r=*(u32*)((char*)a+0x44)*0x19660D+0x3C6EF35F;
 f32 zero = 0.0f;
 *(f32*)((char*)a+0x100)=zero; *(f32*)((char*)a+0xFC)=zero; *(f32*)((char*)a+0x30)=zero;
 *(u16*)((char*)a+0x10C)=0; *(u32*)((char*)a+0x44)=r; *(u16*)((char*)a+0x38)=r>>16;}
 func_0016C820(*(s32*)((char*)a+0x4C),f,&x[0],&x[1],&x[2],&x[3],&x[4],&x[5]);
 {s32 z=(g&4), mid=(x[2]+x[5])>>1, xx=(x[0]+x[3])>>1, yy=(x[1]+x[4])>>1;
 *(f32*)((char*)a+0xF8)=(f32)mid; *(f32*)((char*)a+0xF0)=(f32)xx; *(f32*)((char*)a+0xF4)=(f32)yy;
 *(f32*)((char*)a+0x108)=(f32)mid-(f32)x[2];
 if(z){*(f32*)((char*)a+0x10)+=xx;*(f32*)((char*)a+0x14)+=yy;*(f32*)((char*)a+0x18)+=mid;func_00143630(a);}}
 func_00147A48(a,g);
}
