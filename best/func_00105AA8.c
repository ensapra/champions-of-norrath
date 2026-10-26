typedef struct { s64 q[8]; } E;
extern E D_0032B320[];
extern u8 D_0032B328[];
s32 D_00483E5C;
s32 D_00484CD8;
s32 func_003044FC(s32,s32);
void func_00304640(void*,s32,...);
void func_00105F60(void*,void*,s32,s32,...);
s32 func_00105AA8(s64 *out, s16 limit, s32 mode) {
 s32 r=0, count=0, i;
 s32 lo=(D_00484CD8==2)?17:((D_00484CD8==3)?27:-1);
 for(i=0; D_0032B320[i].q[0]; i++){
  E *e=&D_0032B320[i];
  u64 flags=e->q[5];
  if ((e->q[3]>>32&255)==2 && (flags&0x800000000LL) && (s16)(e->q[0]>>32)>=lo && (s16)(e->q[0]>>32)<=limit) count++;
 }
 if(count) {
   s32 seed=D_00483E5C*0x19660D+0x3C6EF35F;
   D_00483E5C=seed;
   r=1;
 }
 return r;
}
