typedef struct { int pad; void *data; } Asset;
extern s32 D_00484468,D_004844C4,D_004844C8;
extern char D_00463548[],D_00463558[],D_00463568[],D_00463578[],D_00463588[],D_00463598[],D_004635A8[],D_004635B8[],D_004635C8[],D_004635D8[],D_004840B8[],D_004840C0[],D_004840C8[];
s32 func_00165B30(char*); Asset *func_00166580(s32,char*); s32 func_0016E658(void*,s32,s32,s32,s32); s32 func_0016E860(void*,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32); void func_00303EB8(char*,char*,char*);
void func_0016EFD8(s32 x,s32 y,s32 w,s32 h,s32 a,s32 b,s32 mode,s32 flags,s32 extra) {
 char t0[0x40],t1[0x40],t2[0x40],t3[0x40],t4[0x40],t5[0x40],t6[0x40],t7[0x40],t8[0x40]; s32 border=0,bw=0,bh=0,right=0,bottom=0,dx=0,dy=0,span=0,stepX=0,stepY=0,i=0,j=0,handle=0,endY=0,endX=0,top=0,left=0; Asset *tex; void *data; char *suffix;
 if ((D_00484468-((D_004844C8-D_004844C4)>>3)) < 0xBB8) return;
 handle=func_00165B30(D_00463548); suffix=mode==2?D_004840B8:mode==1?D_004840C0:D_004840C8;
 func_00303EB8(t0,D_00463558,suffix);func_00303EB8(t1,D_00463568,suffix);func_00303EB8(t2,D_00463578,suffix);func_00303EB8(t3,D_00463588,suffix);func_00303EB8(t4,D_00463598,suffix);func_00303EB8(t5,D_004635A8,suffix);func_00303EB8(t6,D_004635B8,suffix);func_00303EB8(t7,D_004635C8,suffix);func_00303EB8(t8,D_004635D8,suffix);
 tex=func_00166580(handle,t0);data=*(void**)((char*)tex+4);border=*(s16*)data*2;
 if(extra==0){right=x+w;bottom=y+h;span=right-border;dx=x+w;dy=dx-border;stepX=x-1;
 tex=func_00166580(handle,t2);func_0016E658(*(void**)((char*)tex+4),x,span-1,a,b);
 tex=func_00166580(handle,t3);func_0016E658(*(void**)((char*)tex+4),dy-border,span-1,a,b);
 tex=func_00166580(handle,t0);func_0016E658(*(void**)((char*)tex+4),x,stepX,a,b);
 tex=func_00166580(handle,t1);func_0016E658(*(void**)((char*)tex+4),dy-border,stepX,a,b);
 i=0;if(w-2*border>0){j=x+border;do{tex=func_00166580(handle,t7);func_0016E860(*(void**)((char*)tex+4),j,y,a,b,x,x,dy-border,span-border,0,0);j+=border;i+=border;}while(i<w-2*border);}
 i=0;if(h-2*border>0){j=y+border;do{tex=func_00166580(handle,t4);func_0016E860(*(void**)((char*)tex+4),x,j,a,b,x,x,dx,span-border,0,0);j+=border;i+=border;}while(i<h-2*border);}
 }
 tex=func_00166580(handle,t8);data=*(void**)((char*)tex+4);bw=*(s16*)data;bh=*(s16*)((char*)data+2);
 if(flags==0){if(mode==2){top=border-0x1a;left=border-0x19;endY=h-2*border+0x32;endX=w-2*border+0x34;i=0;if(endY>=0){do{j=0;if(endX>0){do{func_0016E860(data,x+left+j,y+top+i,a,b,x,y,dy-left+1,x+w-top,0,0);j+=bw;}while(j<endX);}i+=bh;}while(i<=endY);}}
 else{i=0;endY=h-2*border;endX=w-2*border;if(endY>0){do{j=0;if(endX>0){do{func_0016E860(data,x+border+j,y+border+i,a,b,x,y,dx-border,right-border,0,0);j+=bw;}while(j<endX);}i+=bh;}while(i<endY);}}}
}
