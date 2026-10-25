extern u16 D_00362CE0[];
void func_00189E08(u8 **arg0,u16 arg1) {
 s32 t3,t7,v2,v22; u8 *p2; u8 c; u16 v5; u32 t4,t8,t9,v23; u8 *t6,*v6;
 v5=arg1;t6=*arg0;
 if(v5>=0x80U){v2=1;if((u32)(v5-0xa0)>=0x40U){t3=(v5>>8)&0x7f;t4=v5&0x7f;if((u32)(t3-0x21)<0x5eU){v2=0;if(t4>=0x21U){v2=0;if(t4<0x7fU){if((v5>>15)!=0){if((t3==0x22)||(t3==0x26)||(t3==0x27)||((v2=0,((u32)(t3-0x29)<3U)==0)&&(v2=1,((u32)(t3-0x30)<0x3eU)!=0))){goto block_11;}}else goto block_12;}}}else{block_11:v2=0;}}}else{block_12:v2=1;}
 v22=v5<0x80U;if(v2==0){v5=D_00362CE0[0];v22=v5<0x80U;}
 if(v22||((u32)(v5-0xa0)<0x40U)||((u32)(v5-0xfd)<3U)){*t6=(u8)v5;v6=t6+1;}else{
 t7=(v5>>8)&0x7f;t9=(v5&0x7f)-0x20;t8=t7-0x20;
 if((v5>>15)==0){p2=t6+1;if(t8<0x3fU)v23=t7+0xe1;else v23=t7+0x161;*t6=(u8)(v23>>1);}
 else{if(t8<0x10U)*t6=((u32)(t7+0x1bf)>>1)-((t8>>3)*3);else *t6=(u8)((u32)(t7+0x17b)>>1);p2=t6+1;}
 if(!(t8&1)){*p2=t9+0x9e;v6=p2+1;}else{v6=p2+1;if(t9<0x40U)c=t9+0x3f;else c=t9+0x40;*p2=c;}
 }
 *arg0=v6;
}
