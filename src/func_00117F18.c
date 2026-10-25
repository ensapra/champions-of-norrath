typedef struct __attribute__((packed, aligned(4))) { u32 v[8]; } E32;
void ovl_ntgui2_func_00117778(void *);
void func_00117F18(void *a, s32 start, void *b) {
 s32 n=*(s32*)((u8*)b+0xC), end=start+n;
 while(*(s32*)((u8*)a+4)<end) ovl_ntgui2_func_00117778(a);
 if(n>0) {
   E32 *src=*(E32**)b;
   E32 *dst=(E32 *)(start*0x20+*(u32*)a);
   s32 i=n;
   do { *dst=*src; dst++; src++; i--; } while(i!=0);
 }
 *(s32*)((u8*)a+0xC)=end;
}
