typedef struct GifTag {s32 a; s32 b; u64 regs;} GifTag;
s32 D_0048041C;
s32 func_00170480(GifTag*);
void func_0017048C(GifTag*, s32);
GifTag *func_001704BC(GifTag *t, u32 reg){ s32 n=func_00170480(t); if(reg&0x80) reg=(reg&~0x80)+D_0048041C; t->regs |= (u64)reg << (n*4); func_0017048C(t,n+1); return t; }
