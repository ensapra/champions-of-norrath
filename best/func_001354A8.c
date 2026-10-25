s32 D_0048385C;
s32 func_001354A8(s32 n){
s32 i=0, count=D_0048385C;
s8 *p;
if(count>0){
 u8 *b=D_004E2280;
 p=(s8*)(b+0x44D4);
 do{
  if(*p){ if(--n==-1) return i; }
  i++; p+=0x44E0;
 }while(i<count);
}
return -1;}
