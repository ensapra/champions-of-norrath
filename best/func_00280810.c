extern s8 D_008D5B58[], D_00437053[];
s32 func_00280810(s32 i, s32 d) {
 if (d==0) { D_008D5B58[i]=-1; return 0; }
 if (d>0) {
   s32 x=i*636; s8 *p=&D_008D5B58[i];
   if ((s8)*p < D_00437053[x]-2) { *p=(u8)((s8)*p+d); return 1; }
 }
 if (d>=0) return 0;
 { s8 *p=&D_008D5B58[i]; if ((s8)*p>=0) { *p=(u8)((s8)*p+d); return 1; } }
 return 0;
}
