extern s32 D_00483F30;typedef struct{s8 b0,b1,b2,b3,b4;s8 pad[7];} S88B8;extern volatile S88B8 D_008D88B8;extern s8 D_008D8938[1008];void*func_003021B0(void*,s32,s32);
void func_002CB388(void){s8*p;s32 i;if(!D_00483F30){func_003021B0(D_008D8938,0,0x3F0);D_008D88B8.b4=0;D_008D88B8.b1=0;D_008D88B8.b0=1;D_008D88B8.b3=32;p=&D_008D8938[0x374];for(i=7;i>=0;i--){*p=-2;p-=0x7e;}}}
extern s32 D_004449FC[];void SignalSema_2(s32);void func_002D8F28(void){SignalSema_2(D_004449FC[0]);}
s32 copy_words(s32*d,s32*s,u32 n){u32 i=0;n>>=2;if(n)do{s32 v=*s;i++;s++;*d=v;d++;}while(i<n);return 0;}
s32 func_002DD960(s32*d,s32*s,u32 n){u32 i=0;n>>=2;if(n)do{s32 v=*s;i++;s++;*d=v;d++;}while(i<n);return 0;}
