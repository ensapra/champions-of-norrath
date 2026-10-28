s32 func_003044FC(void*,s32); void func_00304640(void*,void*);
struct Tbl {u8 pad[0x38]; s16 count; u8 pad2[2]; s32 off;};
s32 func_00135CC8(struct Tbl *volatile *arg0,s32 arg1,s32 *arg2) {
 s32 low=0; volatile s32 high; s32 mid,cmp; char key[32]; volatile s32 val; volatile s32 *pv=&val;
 high=(*arg0)->count-1;
 while(low<=high){
  struct Tbl *t=*arg0;
  mid=(low+high)/2;
  if(mid<t->count){
   s32 *e=(s32*)((u8*)t+t->off+mid*24);
   func_00304640(key,e+1); *pv=e[0];
  }
  cmp=func_003044FC(key,arg1);
  if(cmp>0) high=mid-1;
  else { low=mid+1; if(cmp>=0){*arg2=val;return 0;} }
 }
 *arg2=0; return 0x13;
}
