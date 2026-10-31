/* identical to func_002F9EE8 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void);
extern Fn D_0031F250[];
extern u8 D_00453970[],D_008EA980[];
void func_002FC428(void*,void*); void func_002FF8D8(void(*)(void)); void func_002F9E58(void);
void func_0019FEC8(void) {
 unsigned long nptrs; unsigned i;
 func_002FC428(D_00453970,D_008EA980);
 nptrs=(unsigned long)D_0031F250[0];
 if(nptrs==(unsigned long)-1)
   for(nptrs=0; D_0031F250[nptrs+1]!=0; nptrs++) ;
 for(i=(unsigned)nptrs;i>=1;i--) D_0031F250[i]();
 func_002FF8D8(func_002F9E58);
}
