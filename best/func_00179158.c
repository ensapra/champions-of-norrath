extern volatile char D_010EB624[];extern char D_010EB628[];void func_00179520(s32*,s32,s32,u32);
void func_00179158(s32 *arg0,s32 u1,s32 u2,u32 arg3){
 s32 *p=*(s32**)(void*)D_010EB624,*end=arg0-1;s32 v,c,t;u32 mask;
 if(p!=end){v=*p;c=v&0x7fffffff;if(p+c+1!=end){arg3=*(u32*)(void*)D_010EB628;for(;;){p=p+c+1;if(arg3<(u32)p)return;v=*p;c=v&0x7fffffff;if(p+c+1==end)break;}}
 if(v<0){p=end;v=*p;c=v&0x7fffffff;}else c+=(*end&0x7fffffff)+1;
 }else{v=*p;c=v&0x7fffffff;}
 func_00179520(p,c,0,arg3);
 t=end[*end+1];mask=0x7fffffffU;
 if(t>=0)func_00179520(p,(*p&mask)+(t&mask)+1,0,mask);
}
