extern u8 D_007D8110[]; extern u8 D_007D8A90[]; extern char D_004747C8[]; extern char D_00474708[];
void func_00164050(void *, s32); void func_00166F30(void *, void *, void *); void func_00194300(void *);
void func_0024EAA8(s32 mode,s32 priority) {
 if(priority==0xFFFF && mode==1) { u8 *p=D_007D8110; s32 i=0x1F; do { --i; p[5]=1; *(s32 *)(p+0x28)=0; p+=0x4C; } while(i!=-1); }
 if(priority==0xFFFF) {
  s32 one=1;
  if(mode==one) func_00166F30(D_007D8A90,D_004747C8,D_00474708);
  if(mode==0) { u8 *base=D_007D8110; u8 *p=base+0x980; if(base!=0) { while(p!=base) { p-=0x4C; func_00194300(p+0x28); func_00164050(p,2); } } }
 }
}
