void func_0016DDAC(u8 *p) {
 s32 n=*(s32*)(p+0x9C4), step=*(s32*)(p+0x9CC);
 s32 v=*(s32*)(p+0x5AC);
 v-=*(s32*)(p+0x948)*2;
 v-=*(s32*)(p+0x950);
 v-=*(s32*)(p+0x954);
 v-=(n-1)*step;
 v/=n;
 *(s32*)(p+0x984)=v; *(s32*)(p+0x988)=v;
}
