extern s32 D_008DEA18[];
s32 func_002D7490(s32 i,s32 a,s32 b){s32 n; if(i<0){n=(i&0x7fffffff)*12; s32 *p=(s32*)((char*)D_008DEA18+12);p=(s32*)((char*)p+n);p[1]=b;p[0]=a;n+=D_008DEA18[3];}else{n=i*12;s32*p=(s32*)((char*)D_008DEA18+20);p=(s32*)((char*)p+n);p[1]=b;p[0]=a;n+=D_008DEA18[5];}return n+(s32)__builtin_frame_address(0);}
