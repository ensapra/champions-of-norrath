/* identical to func_002D7478 (matched), with its names changed by decompdecomp */
void _iEnableIntc_2(void);
void func_002D5D60(void) { _iEnableIntc_2(); M2C_SYNC(); }
extern s32 D_008DEA18[8];
s32 func_001AFAB8(s32 a,s32 b){s32 old=D_008DEA18[3];D_008DEA18[4]=b;D_008DEA18[3]=a;return old;}
s32 func_002D7490(s32 index,s32 a,s32 b){
 s32 n; s32 *base;
 if(index<0){n=(index&0x7fffffff)*12;base=(s32*)((char*)D_008DEA18+12); *((s32*)((char*)base+n+4))=b; *((s32*)((char*)base+n))=a; n+=*(s32*)((char*)D_008DEA18+12);}
 else {n=index*12;base=(s32*)((char*)D_008DEA18+20);*((s32*)((char*)base+n+4))=b;*((s32*)((char*)base+n))=a;n+=*(s32*)((char*)D_008DEA18+20);}
 n+=(s32)__builtin_frame_address(0); return n;
}
extern s32 D_008DEA24; extern s32 D_008DEA2C;
void func_002D7508(s32 i){if(i<0){s32 *p=(s32*)((char*)&D_008DEA24+((i&0x7fffffff)*12));*p=0;}else {s32*p=(s32*)((char*)&D_008DEA2C+(i*12));*p=0;}}
