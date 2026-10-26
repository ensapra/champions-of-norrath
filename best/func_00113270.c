typedef struct { s32 a,b,c; } V3; typedef struct { s32 a,b; } E; void func_00113348(void*,V3*,s32);
s32 func_00113270(u8*t,f32*out,V3 v,s32 arg3) {
 s32 ret=0,i,j,x; E*e;
 if(out) {
 i=*(s32*)(t+0x2C4); ret=0; out[1]=-1.0f; out[0]=-1.0f;
 if(i<16) {e=(E*)(t+0x244); if(e[i].a==-1) {func_00113348(t,&v,arg3);return ret;}
 j=i+1; *(s32*)(t+0x2C4)=j; if(j==16) {func_00113348(t,&v,arg3);return ret;}
 x=e[j].a; if(x==-1) {func_00113348(t,&v,arg3);return ret;}
 ret=1;out[0]=(f32)x;out[1]=(f32)e[j].b;
 }} return ret;
}
