typedef struct { s32 a,b; } E; typedef struct { char pad[0x240]; E e[16]; } Inner; typedef struct { s32 hdr; Inner in; s32 idx; } T; typedef struct { float x,y,z; } V3;
void func_00113348(T*,V3*,s32);
s32 func_00113270(T *t,f32 *out,V3 v,s32 arg3) { s32 ret,i,j; T *tt=t; Inner *in;
if(out==NULL)return 0; ret=0; out[0]=-1.0f;out[1]=-1.0f;i=tt->idx;
if(i<16){if(tt->in.e[i].a==-1){func_00113348(tt,&v,arg3);}else{j=i+1;tt->idx=j;if(tt->idx==16){func_00113348(tt,&v,arg3);}else if(tt->in.e[j].a==-1){func_00113348(tt,&v,arg3);}else{ret=1;out[0]=(f32)tt->in.e[j].a;out[1]=(f32)tt->in.e[j].b;}}}return ret;}
