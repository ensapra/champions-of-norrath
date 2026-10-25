s32 func_003044FC(void*,s32); void func_00304640(void*,void*);
typedef struct {u8 low[16];u8 key[32];s32 value;} Temp;
s32 func_00135CC8(void **arg0,s32 arg1,s32 *arg2) {
 Temp t; s32 sp0, lo, sum, mid, cmp; void *base; u8 *entry;
 lo=0; sp0=(s16)*(s16*)((u8*)*arg0+0x38)-1;
 if(sp0>=0){sum=sp0;
loop:
 base=*arg0; mid=(s32)(sum+((u32)sum>>31))>>1;
 if(mid<(s16)*(s16*)((u8*)base+0x38)){
  entry=(u8*)base+*(s32*)((u8*)base+0x3c)+mid*24;
  func_00304640(t.key,entry+4); t.value=*(s32*)entry;
 }
 cmp=func_003044FC(t.key,arg1);
 if(cmp>0){sp0=mid-1;goto update;}
 lo=mid+1;
 if(cmp>=0){*arg2=t.value;return 0;}
update:
 sum=lo+sp0;
 if(sp0>=lo)goto loop;
 }
 *arg2=0; return 0x13;
}
