extern volatile u32 D_00362CE4[];
void func_0018ACA0(u8 **arg0,s32 c){u8*p=*arg0;u32 lim,mask;s32 n;s32 m1=-1;u8*q;
if(c>m1){}else c=D_00362CE4[0];
if((u32)c<128){*p=c;p++;}else{lim=0x800;n=1;if((u32)c>=0x800)do{lim<<=5;n++;}while((u32)c>=lim);
p+=n+1;q=p;mask=((1<<(7-n))-1)&255;n--;
while(n!=m1){q--;*q=(c&63)|128;n--;c=(u32)c>>6;}q[-1]=~mask|(c&(mask>>1));}*arg0=p;}
