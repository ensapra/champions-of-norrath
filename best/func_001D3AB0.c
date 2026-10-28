s32 func_003044FC(s8*,s8*);void *func_00304640(s8*,s8*);s32 func_00304CFC(s8*);extern u8 D_0047E1F1[];extern s8 D_007D35E8[];
void func_001D3AB0(s8*src,s32 value){s8 buf[0x100];s8*p,*entry;s32 lo=-128;s32 hi=127;
value=(value>lo)?value:lo;
value=(value<hi)?value:hi;
func_00304640(buf,src);
p=buf;
if(*p){do{s32 ch=*p;s32 o=ch;if(D_0047E1F1[ch]&1)o=ch+0x20;*p=o;p++;}while(*p);}
entry=D_007D35E8;
if(*entry){
 do{ if(!func_003044FC(entry,buf))goto done; entry+=func_00304CFC(entry)+2;}while(*entry);
}
func_00304640(entry,buf);
done:
entry[func_00304CFC(entry)+1]=value;}
