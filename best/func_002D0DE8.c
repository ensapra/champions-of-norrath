s32 D_00483F1C; s32 D_004844A4; s8 D_004844AC; s32 D_0048667C; extern u32 D_0034BEB8[];
s32 func_00165238(void); s32 func_00167E68(void); s32 func_00190A48(s32,s32,void*); s32 func_001911F8(s32); s32 func_00191200(s32,s32); s32 func_0024B7F8(void);
s64 func_002D0DE8(s32 (*arg0)(void)) {
 s32 result=0;
 D_004844A4=0; func_001911F8(2); D_004844AC=1;
 do {
  func_00191200(D_0048667C,0); func_00167E68();
  if(arg0) result=arg0();
  func_00165238();
  if(D_00483F1C>0 && !(D_0034BEB8[2]&0xFF0FFFFF) && !(D_0034BEB8[24]&0xFF0FFFFF)) D_00483F1C--;
  D_004844A4++;
  func_00190A48(0,D_00483F1C,D_0034BEB8); func_0024B7F8();
 } while(result==0);
 return func_001911F8(1);
}
