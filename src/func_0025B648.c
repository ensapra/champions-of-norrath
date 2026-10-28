typedef struct { s8 name[0x14]; s32 size; } Rec;
extern s32 D_00486C54; void func_0025C790(s32,void*,s32,s32); s32 func_0025C748(void*); s32 func_003044FC(void*,s32);
s32 func_0025B648(s32 arg0,s32 *out) {
 Rec recs[27]; s32 sum=0; s32 i;
 func_0025C790(2,(void*)0x1B610,0,0); func_0025C790(3,recs,0x288,0);
 if(func_0025C748(&D_00486C54)) return -1;
 if(recs[0].name[0]){
 for(i=0;;){
  if(func_003044FC(&recs[i],arg0)==0){ *out=sum; return i; }
  sum+=recs[i].size;
  i++;
  if(i>=26 || !recs[i].name[0]) break;
 }}
 return -1;
}
