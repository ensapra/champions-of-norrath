s32 func_00304CFC(s8 *);
s32 func_00304F60(s32,s8 *,s32);
extern u8 D_0047E1F1[];
void *func_00143A80(void *obj,s8 *str,s32 remaining){
 s32 *list=*(s32 **)((char *)obj+0x2c);
 s32 len,off=0,c;
 s8 *dst=str,*q;
 if(list==0)return 0;
 c=*str;
 while(c){
  s32 ch=(s8)c;
  if(D_0047E1F1[ch]&1)ch+=0x20;
  *dst++=ch;
  c=(u8)*dst;
 }
 len=func_00304CFC(str);
 if(*list==0)return 0;
 do {
  s32 entry=*(s32 *)((char *)list+off);
  if(func_00304F60(entry,str,len)==0){
   q=(s8 *)(entry+len);
   if(*q=='='){
    off+=4;
    remaining--;
    if(remaining==-1)return q+1;
   } else off+=4;
  }else off+=4;
 }while(*(s32 *)((char*)list+off)!=0);
 return 0;
}
