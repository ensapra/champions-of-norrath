extern s64 func_002FB5C0(s64,s64),func_002FB618(s64,s64),func_002FB680(s64,s64); extern s32 func_002FBB50(void);
extern s64 D_0047D838,D_0047D840,D_0047D848,D_0047D850,D_0047D858,D_0047D860;
s64 func_002F5BE0(s64 arg0,s64 arg1) {
 s32 temp_18=(arg0>>32)&0x7fffffff;
 s64 temp_16,temp_16_2,temp_17,temp_17_2,temp_18_2,temp_21,temp_2,var_17,var_2;
 if(temp_18<=0x3e3fffff && func_002FBB50()==0) return (s64)0xffc0<<46;
 temp_2=func_002FB680(arg0,arg0);
 temp_21=func_002FB680(temp_2,func_002FB5C0(func_002FB680(temp_2,func_002FB5C0(func_002FB680(temp_2,func_002FB5C0(func_002FB680(temp_2,func_002FB5C0(func_002FB680(temp_2,func_002FB5C0(func_002FB680(temp_2,D_0047D838),D_0047D840)),D_0047D848)),D_0047D850)),D_0047D858)),D_0047D860));
 if(temp_18>0x3fd33332) {
  var_17=(s64)0xff48<<46;
  if(temp_18<=0x3fe90000) var_17=(s64)((temp_18+0xffe00000)<<32);
  temp_18_2=func_002FB618(func_002FB680(temp_2,(s64)0xff80<<46),var_17);
  temp_17=func_002FB618((s64)0xffc0<<46,var_17);
  temp_16=func_002FB680(temp_2,temp_21);
  var_2=func_002FB618(temp_17,func_002FB618(temp_18_2,func_002FB618(temp_16,func_002FB680(arg0,arg1))));
 } else {
  temp_17_2=func_002FB680(temp_2,(s64)0xff80<<46);
  temp_16_2=func_002FB680(temp_2,temp_21);
  var_2=func_002FB618((s64)0xffc0<<46,func_002FB618(temp_17_2,func_002FB618(temp_16_2,func_002FB680(arg0,arg1))));
 }
 return var_2;
}
