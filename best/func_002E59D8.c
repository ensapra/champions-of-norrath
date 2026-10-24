typedef struct {s32 x[7];} Entry; extern Entry D_008DD8D0[][4];u8*func_002D39B0(s32,s32);
u8 func_002D3CE0(s32 a,s32 b){if(D_008DD8D0[a][b].x[4])return func_002D39B0(a,b)[113];return 0;}
s32 func_002E4E48(s32,s32,void*,s32,s32);s32 func_002E4F58(s32,s32,void*,s32,s32);
s32 func_002E59D8(s32 a,s32*p,s32 b,s32 c){s32 r;*p=c;r=func_002E4E48(a,10,p,4,(c*72)|4);if(r<0)return -542;r=*p;if(r<0)return r;{r=func_002E4F58(a,b,p,1,r*72);if(r<0)return r;r=*p;}return r;}
s32 func_002E5A70(s32 a,s32*p,s32 b,s32 c){s32 r;*p=c;r=func_002E4E48(a,11,p,4,(c*16)|4);if(r<0)return -542;r=*p;if(r>=0){r=func_002E4F58(a,b,p,1,(u32)r<<4);if(r>=0)r=*p;}return r;}
s32 func_002E5AF8(s32 a,s32*p,s32 b){s32 r;*p=b;r=func_002E4E48(a,12,p,4,4);if(r<0)r=-542;else r=*p;return r;}
