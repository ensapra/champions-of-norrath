s64 func_002ED9E0(s64); s64 func_002F81C0(s64,s64); extern s64 D_004480B0[];
void func_002EF028(s64 *a,s32 b,s64 *c,s64 *d){s32 i,idx=0,sh; s64 mx=0,v,sc=0,peak,cor=0,pos=40,tot=0,limit;
for(i=0;i<40;i++){v=a[i];if(v<0)v=-v;if(mx<v){mx=v;idx=i;}} if(mx)sc=func_002ED9E0(mx<<16); sh=sc<7?6-sc:0;peak=a[idx]>>sh;
for(i=40;i<121;i++){v=func_002F81C0(peak,*(s64*)(b+idx*8-(i-20)*8));if(cor<v){cor=v;pos=i;}} *d=pos;
limit=(cor<<1)>>(6-sh);for(i=0;i<40;i++){v=*(s64*)(b+(i+40-pos)*8)>>3;tot+=func_002F81C0(v,v);}tot<<=1;
if(limit<=0){*c=0;return;} if(limit>=tot){*c=3;return;}sc=func_002ED9E0(tot);
for(i=0;i<3;i++){v=func_002F81C0((tot<<sc)>>16,D_004480B0[i])>>15;if(v>=(limit<<sc>>16))break;}*c=i;}
