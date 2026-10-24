s32 func_002E5F70(s32,s32,s32,s32,s32);s32 func_002E5930(s32,s32,s32,s32,s32,s32);
s64 func_002E6020(s32 a,s32 b,s32 c,s32 d){return func_002E5F70(a,b,c,d,34);}
s64 func_002E6120(s32 a,s32 b,s32 c,s32 d){return func_002E5930(a,b,c,9,d,16);}
s32 func_002E6040();
s32 func_002E6148(s32 a,s32 b,s32*p,s32 d,s32 e){s32 r;if(func_002E6040(a,b,p,d,e)>=0 || (r=func_002E6020(a,b,(s32)p,d))>=0){s32 t=func_002E6120(a,b,*p,e);r=t>-1?0:t;}return r;}
s32 func_002E4E48(s32,s32,void*,s32,s32);s32 func_002E4F58(s32,s32,void*,s32,s32);
s32 func_002E59D8(s32 a,s32*p,s32 b,s32 c){s32 r;*p=c;r=func_002E4E48(a,10,p,4,(c*72)|4);if(r<0)return -542;r=*p;if(r>=0){r=func_002E4F58(a,b,p,1,r*72);if(r>=0)r=*p;}return r;}
