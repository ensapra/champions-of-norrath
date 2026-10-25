extern char func_01000000[];
extern void func_0014D048(s32,s32*,s32*);
extern void func_0014CF30(s32,s32*,s32*);
extern void func_0014CE84(s32,s32*,s32*);
extern void func_0014CE44(s32,s32,s32);
void func_00145CA8(void) {
 s32 a,b,c,d,e,f;
 s32 idx=*(s32*)(func_01000000+0xD44E8);
 s32 id=*(s32*)(func_01000000+0xD44B0+idx*4);
 func_0014D048(id,&a,&b);
 idx=*(s32*)(func_01000000+0xD44E8);
 id=*(s32*)(func_01000000+0xD44B0+idx*4);
 func_0014CF30(id,&c,&d);
 func_0014CE84(*(s32*)(func_01000000+0xD44D0),&e,&f);
 s32 diff=a-e;
 if(diff<0) diff=-diff;
 if(diff>=3) {
  s32 mid=(a+((c-0x14)>>1)+e)>>1;
  a=mid;
  func_0014CE44(*(s32*)(func_01000000+0xD44D0),mid,b-0x19);
  func_0014CE44(*(s32*)(func_01000000+0xD44D4),a,b+d+5);
 } else {
  s32 mid=a+((c-0x14)>>1);
  a=mid;
  func_0014CE44(*(s32*)(func_01000000+0xD44D0),mid,b-0x19);
  func_0014CE44(*(s32*)(func_01000000+0xD44D4),a,b+d+5);
 }
}
