extern f32 D_0048227C; extern s32 func_00271E68(s32,s32,s32,s32,f32); extern s32 func_0015A2B0(void*,void*,s32,s32,s32,s32);
typedef struct __attribute__((packed)){u64 x;u32 y;} P12;
typedef struct __attribute__((packed)){u64 x[4];u32 y;} P36;
typedef struct __attribute__((packed)){u64 x[2];} P16;
void func_00277EC0(void *arg0){u8*p=(u8*)arg0; func_00271E68((s32)(p+0x7e0),(s32)(p+0x7ec),0,1,D_0048227C); *(P12*)(p+0x284)=*(P12*)(p+0x10); *(P36*)(p+0x480)=*(P36*)(p+0x45c); *(P12*)(p+0x4a4)=*(P12*)(p+0x260); *(P12*)(p+0x4b0)=*(P12*)(p+0x278); *(P12*)(p+0x10)=*(P12*)(p+0x26c); *(P16*)(p+0x43c)=*(P16*)(p+0x44c); func_0015A2B0(p+0x45c,p+0x43c,0,0,0,0);}
