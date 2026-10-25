extern f32 D_00482060; extern u8 D_00434068[];
s32 func_00265810(void *out, f32 *p) {
 f32 x=p[0]*D_00482060; f32 y=p[1]*D_00482060; s32 n=0; s8 *q=(s8*)D_00434068;
 p[0]=x;p[1]=y;
 if(q[2]!=-1) {
  s8 *r=q+3; s8 lim=r[4];
  for(;;) {
   if ((f32)lim<=x && (f32)r[5]<=y && x<=(f32)(lim+r[1]) && y<=(f32)(r[5]+r[0])) {
    s32 a=(lim*2+r[1])*0x168; s32 b=(r[5]*2+r[0])*0x168;
    ((f32*)out)[0]=(f32)a; ((f32*)out)[1]=(f32)b; return (s32)out;
   }
   n++; r+=10; if(n>=32 || r[-1]==-1) break; lim=r[4];
  }
 }
 ((f32*)out)[0]=p[0];((f32*)out)[1]=p[1];return (s32)out;
}
