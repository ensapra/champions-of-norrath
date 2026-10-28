u8 *func_001884C8();
u8 *func_00188528(void *unused, s32 *out) {
 u8 *p=func_001884C8();
 if (p==0) return p;
 if (*(u32 *)p != 0x745865) return p;
 if (out) *out=*(s32 *)(p+8);
 return p+16;
}
