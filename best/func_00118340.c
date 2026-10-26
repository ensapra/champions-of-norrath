extern u8 D_010C2BA8[];
void func_0011AD68(s32);
void func_00118340(s32 n) {
 u8 *b=D_010C2BA8;
 s32 off=n<<5;
 s32 sub=off+16;
 void (*cb)(void *)=*(void (**)(void *))(b+sub+12);
 if (cb) cb(b+off);
 s32 *id=(s32 *)(b+4+off);
 if (*id >= 0) { func_0011AD68(*id); *id=-1; }
 volatile s32 *last=(s32 *)(b+sub+8);
 *last=0;
}
